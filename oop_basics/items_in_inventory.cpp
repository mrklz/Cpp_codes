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
public:
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
class Inventory{
private:
    double maxWeight;
    double curWeight = 0;
    vector<Item> items;
public:
    Inventory(double ItemMaxWeight){ maxWeight = ItemMaxWeight; }
    void addItem(Item newItem){
        if(curWeight+newItem.getWeight()<maxWeight){
            items.push_back(newItem);
            cout<<"Добавлено!"<<endl;
            curWeight+=newItem.getWeight();
        }
        else cout<<"Недостаточно места!"<<endl;
    }
    void showInventory(){
        for(Item& item : items){
            cout<<"Название: "<<item.getName()<<" Вес: "<<item.getWeight()<<endl;
        }
        cout<<"Занято: "<<curWeight<<" из "<<maxWeight<<endl;
    }
};
int main(){
    system("chcp 65001 > nul");
    Inventory(15.0);
    Item("Металлическая броня", 10.0);
    Item("Эликсир маны", 1.5);
    Item("Двуручный топор", 7.0);
}