#pragma once
#include <string>
using namespace std;
class Date{
private:
    int day; int month; int year;
public:
    Date(): day(1), month(1), year(2000){}
    Date(int dateDay, int dateMonth, int dateYear){
        day = dateDay;
        month = dateMonth;
        year = dateYear;
    }
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    void setDay(int d){ day = d; }
    void setMonth(int m){ month = m; }
    void setYear(int y){ year = y; }
};
class Manager{
private:
    int id; string name;
public:
    Manager(): id(0), name(""){}
    Manager(int managerId, string managerName){
        id = managerId;
        name = managerName;
    }
    int getId() const { return id; }
    string getName() const { return name; }
    
    void setId(int managerId)  { id = managerId; }
    void setName(string managerName) { name = managerName; }
};
class Sale{
private:
   Date date; Manager managerId; string car; int price;
public:
    Sale(): date(), managerId(), car(""), price(0){};
    Sale(Date saleDate, Manager saleManager, string saleCar, int salePrice){
        date = saleDate;
        managerId = saleManager;
        car = saleCar;
        price = salePrice;
    }
    Date getDate() const { return date; }
    Manager getManager() const { return managerId; }
    string getCar() const { return car; }
    int getPrice() const { return price; }

    void setDate(Date saleDate){ date = saleDate; }
    void setManager(Manager saleManager){ managerId = saleManager; }
    void setCar(string saleCar){ car = saleCar; }
    void setPrice(int salePrice){ price = salePrice; }

};