#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Item{ //создаем сущность и даем ей атрибуты
private:
    string name;
    double weight;
public: // создаем конструкторы и методы для работы с сущностью
    Item(): name(""), weight(){};
    Item(string ItemName, double ItemWeight){
        name = ItemName;
        weight = ItemWeight;
    }
    string getName(){
        return name;
    }
    double getWeight(){
        return weight;
    }
};
class Inventory{ //создаем сущность инвентарь и даем ей атрибуты
private:
    double maxWeight;
    double curWeight = 0;
    vector<Item> items;
public:
    Inventory(double ItemMaxWeight){ maxWeight = ItemMaxWeight; }
    void addItem(){ //создаем метод добавления предмета в инвентарь
        Item newItem;
        int choice;
        cout<<"Выберете из доступных предметов:"<<endl<<"Металлическая броня: press 1"<<endl<<"Эликсир маны: press 2"<<endl<<"Двуручный топор: press 3"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                newItem = Item("Металлическая броня", 10.0);
                break;
            case 2:
                newItem = Item("Эликсир маны", 1.5);
                break;
            case 3:
                newItem = Item("Двуручный топор", 7.0);
                break;
        }
        if(curWeight+newItem.getWeight()<maxWeight){
            items.push_back(newItem);
            cout<<"Добавлено!"<<endl;
            curWeight+=newItem.getWeight();
        }
        else cout<<"Недостаточно места!"<<endl;
    }
    void showInventory(){ //создаем метод просмотра инвентаря
        for(Item& item : items){
            cout<<"Название: "<<item.getName()<<" Вес: "<<item.getWeight()<<endl;
        }
        cout<<"Занято: "<<curWeight<<" из "<<maxWeight<<endl;
    }
    void removeItem(){ //создаем метод удаления предмета из инвентаря
        string itemName;
        cout<<"Введите название предмета для удаления: ";
        cin.ignore();
        getline(cin, itemName);
        auto it = find_if(items.begin(), items.end(), [&](Item& item){ return item.getName() == itemName; });
        if(it != items.end()){
            curWeight -= it->getWeight();
            items.erase(it);
            cout<<"Предмет удален!"<<endl;
        }
        else cout<<"Предмет не найден!"<<endl;
    }
    void createItem(){ //создаем метод создания нового предмета
        string name;
        double weight;
        cout<<"Введите название предмета: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Введите вес предмета: ";
        cin>>weight;
        if(curWeight + weight > maxWeight){
            cout<<"Недостаточно места!"<<endl;
            return;
        }
        else {
            Item newItem(name, weight);
            items.push_back(newItem);
            curWeight += weight;
            cout<<"Предмет создан!"<<endl;
        }
    }
};
class Menu { //создаем сущность меню и создаем метод для работы с меню
public:
    void runMenu(){
        int choice;
        Inventory inv(15.0);
        while (true){
            cout<<endl<<"===ВЫБОР ДЕЙСТВИЯ==="<<endl;
            cout<<"===Добавить предмет: press 1 ==="<<endl;
            cout<<"===Посмотреть инвентарь: press 2 ==="<<endl;
            cout<<"===Удалить предмет: press 3 ==="<<endl;
            cout<<"===Создать предмет: press 4 ==="<<endl;
            cin>>choice;
            switch(choice){
                case 1:
                    inv.addItem();
                    break;
                case 2:
                    inv.showInventory();
                    break;
                case 3:
                    inv.removeItem();
                    break;
                case 4:
                    inv.createItem();
                    break;
                default:
                    cout<<"Неверный выбор!"<<endl;
            }

        }
        
    }
};
int main(){
    system("chcp 65001 > nul");
    Menu m;
    m.runMenu();

}