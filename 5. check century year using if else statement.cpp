#include <iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter the year";
    cin>>year;
    if(year%400==0)
    {
        cout<<"This is a century year=";
    }
    else{
        cout<<"Not a Century Year";
    }
}
