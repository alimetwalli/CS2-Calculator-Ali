#include "calculator.h"
#include <iostream>
using namespace std;

int main (){
    Calculator calc;
    cout<<"8+7 = "<<calc.add(8,7)<<endl;
    cout<<"19-7 = "<<calc.subtract(19,7)<<endl;
    cout<<"4*6 = "<<calc.multiply(4,6)<<endl;
    cout<<"8/2 = "<<calc.divide(8,2)<<endl;
    cout<<"8/0 = "<<calc.divide(8,0)<<endl;
    cout<<"5! = "<<calc.factorial(5)<<endl;
    cout<<"-5! = "<<calc.factorial(-5)<<endl;
    cout<<"GCD(12,8) = "<<calc.GCD(12,8)<<endl;
    cout<<"LCM(5,3) = "<<calc.LCM(5,3)<<endl;
    cout<<"Random number between 1 and 10: "<<randomNumber(1,10)<<endl;







    return 0;
}