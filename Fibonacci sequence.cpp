#include<iostream>

using namespace std;

int fib(int);
int main()
{
    int x;
    cout<<"Enter n: ";
    cin>>x;
    cout<<endl<<"Fibonacci of n: "<<fib(x);

}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
