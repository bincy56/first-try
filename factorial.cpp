#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    if(n<0)
    {
        cout<<"thye given number is less than zero";
    }
    else{
        cout<<"factorial of "<<n<<"is "<<factorial(n)<<endl;
        
    }
    return 0;
}