#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Test{ //создаем сущность и даем ей атрибуты
public:
    string name;
    int num, id;
    Test(): name(""), num(0), id(0){};
};
class Menu{ //создаем еще одну сущность, в которой работаем с вектором первых сущностей и методы
private:
    vector<Test> tests;
    void fill(){ //метод для заполнения сущности атрибутами
        int n;
        cout<<"Введите число набираемых слов"<<endl;
        cin>>n;
        for(int i=0; i<n; i++){
            Test t;
            cout<<"Введите название, количество и ключ"<<endl;
            cin>>t.name>>t.num>>t.id;
            tests.push_back(t);
        }
        cout<<"Всё ок"<<endl;
    }
    void printTests(){ //метод вывода вектора сущностей
        if(tests.empty()){
            return;
        } 
        for(int i=0; i<tests.size(); i++){
            cout<<i+1<<" "<<tests[i].name<<" "<<tests[i].num<<" "<<tests[i].id<<endl;
        }
        cout<<"Готово"<<endl;
    }
    void sortNum(){ //сортировка по второму атрибуту
        if(tests.empty()){
            return;
        } 
        sort(tests.begin(), tests.end(),[](const Test& a, const Test& b){
            return a.num<b.num;
        });
        cout<<"Готово"<<endl;
    }
     void sortId(){ //сортировка по третьему атрибуту
        if(tests.empty()){
            return;
        } 
        sort(tests.begin(), tests.end(),[](const Test& a, const Test& b){
            return a.id<b.id;
        });
        cout<<"Готово"<<endl;
    }
public:
    void runMenu(){ //главный метод, в котором происходит проверка того, что выберет пользователь
        int choice;
        while(true){
        cout << "\n=== МЕНЮ ===" << endl;
        cout << "0 - Выход" << endl;
        cout << "1 - Заполнение" << endl;
        cout << "2 - Печать" << endl;
        cout << "3 - Сортировка по количеству" << endl;
        cout << "4 - Сортировка по айди" << endl;
        cout << "Выберите пункт: ";
        cin >> choice;
        switch(choice){
            case 0:
                cout<<"Пока!";
                return;
            case 1: fill(); break;
            case 2: printTests(); break;
            case 3: sortNum(); break;
            case 4: sortId(); break;
            default: cout<<"Введите что-то другое"; break;
        }
        }
    }
};
int main(){
    system("chcp 65001 > nul");
    Menu m;
    m.runMenu();
}