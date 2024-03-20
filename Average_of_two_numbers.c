#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float  a,b;
    cin >>a>>b;
    cout <<fixed<<setprecision(2);
    cout <<"Average of "<<int (a)<<" and "<<int (b)<<" is: "<<(a+b)/2;
}