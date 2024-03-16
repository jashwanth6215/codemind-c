#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin >>a;
    cout <<fixed<<setprecision(2);
    cout <<4.0/3*3.14*a*a*a;
}