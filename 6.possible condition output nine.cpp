#include <iostream>
using namespace std;
int main() {
    int number1;
    int number2;
    cout<<"Enter Two Number=";
    cin>>number1>>number2;
    if(number1+number2==9||number1-number2==9||number1*number2==9||number1/number2==9||number1%number2==9)
    {
        cout<<"Ans is 9";
    }
    else{
        cout<<"Not possible";
    }
}