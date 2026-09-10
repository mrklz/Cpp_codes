
#include <iostream>
using namespace std;
class Fraction{
    public:
    long long int x, y;
    Fraction(long long x=0, long long y=1): x(x), y(y){};
    void read(){
      char t;
        cin>>x>>t>>y;
    };
    void show(){
        cout<<x<<"/"<<y;
    };
    Fraction operator+(Fraction fr){
       x*=fr.y;
       long long n=y;
       y*=fr.y;
       fr.y=y;
       fr.x*=n;
       return Fraction(x+fr.x, y);
    };
};
int main()
{
    Fraction fr1;
    Fraction fr2;
    fr1.read();
    long long g;
    cin>>g;
    fr2.x = g;
    fr2.y = 1;
    Fraction fr = fr1+fr2;
    fr.show();

    return 0;
}