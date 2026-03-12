#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
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