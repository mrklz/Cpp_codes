#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    string surname;
    int hp; 

    Student(string a, string b){
      name = a;
      surname = b;
      hp = 100;
    };
    bool is_alive(){
      if(hp>0)return true;
      else return false;
    };
    void show(){
      if(is_alive())cout<<name<<" "<<surname<<": HP = "<<hp<<".";
      else cout<<name<<" "<<surname<<": HP = 0. Game over.";
    };
}; 
int main(){
  string name, surname;
  cin>>name>>surname;
  Student st(name, surname);
  st.show();
  return 0;
}