#include<iostream>
using namespace std;

int factorial(int n)
{
    int i;
    int m=1;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    return m;
}
int main()
{
    int i;
    int a;
    cout<< "Enter the number to find its factorial\n";
    cin>>a;
    int m=factorial(a);
    cout<<"Factorial = "<<m<<"\n";
    return 0;
}