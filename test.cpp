#include "calculator.h"
#include <iostream>
using namespace std;

int main (){
    Calcylatir calc;
    cout<<"8+7 = "<<add(8,7)<<endl;
    cout<<"19-7 = "<<subtract(19,7)<<endl;
    cout<<"4*6 = "<<multiply(4,6)<<endl;
    cout<<"8/2 = "<<divide(8,2)<<endl;
    cout<<"8/0 = "<<divide(8,0)<<endl;
    cout<<"5! = "<<factorial(5)<<endl;
    cout<<"-5! = "<<factorial(-5)<<endl;
    cout<<"GCD(12,8) = "<<GCD(12,8)<<endl;
    cout<<"LCM(5,3) = "<<LCM(5,3)<<endl;
    cout<<"Random number between 1 and 10: "<<randomNumber(1,10)<<endl;







    return 0;
}