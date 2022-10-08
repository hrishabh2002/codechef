#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    char operation;
    
    cin>>n1>>n2;
    cin>>operation;
    switch (operation)
    {
        case '+': cout<<n1+n2<<endl;
                   break;
        case '-': cout<<(n1-n2)<<endl;
                   break;

        case '*': cout<<(n1*n2)<<endl;
                   break;

        case '/': cout<<(n1/n2)<<endl;
                   break;
    }

}