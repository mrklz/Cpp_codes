#pragma once
#include <string>
#include "Models.h"
#include <vector>
using namespace std;
class Autosalon{
private:
    vector<Manager> managers;
    vector<Sale> sales;
public:
    bool loadManagersFromFile(string filename);
    bool loadSalesFromFile(string filename);

    void printManagers();
    void printSales();

    void countSalesByManagerInMonth(string filename);
    string getManagerNameById(int managerId);
};