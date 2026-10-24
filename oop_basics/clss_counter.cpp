#include <iostream>
using namespace std;
class Counter {
private:
    int value = 0;

public:
    Counter(int value) : value(value) {}

    void increment() { ++value; }
    void decrement() { --value; }
    int get_value() { return value; }
};

int main() {
    int a;
    cin >> a;
    Counter c(a);
    c.increment();
    cout << c.get_value() << endl;
}