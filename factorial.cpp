#include<iostream>
using namespace std;

int main()
{
    int i;
    int a;
    cout<< "Enter the number to find its factorial\n";
    cin>>a;
    int m=1;
    for(i=1;i<=a;i++)
    {
        m=m*i;
    }
    cout<<"Factorial = "<<m<<"\n";
    return 0;
}