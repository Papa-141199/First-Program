#include<iostream>
using namespace std;

int main()
{
    char s;
    float a,b;

    cout<<" Enter the symbol of the operation that you want to perform ";
    cin>>s;

    cout<<"Please enter the numbers:";
    cin>> a>> b;

    switch(s)
    {
        case '+':
        cout<< a <<" +"<<  b <<"=";
        cout<< a+b;
        break;

        case '-':
        cout<< a <<"-" << b << "=";
        cout<< a-b;
        break;

        case '*':
        cout<< a << "*" << b << "*";
        cout<< a*b;
        break;

        case '/':
        cout<< a <<"/" << b << "/";
        cout<< a/b;
        break;
    }
}