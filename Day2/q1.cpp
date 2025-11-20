#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 6;
    int c = 7;

    cout<<"\n a = "<<a;
    cout<<"\n b = "<<b;
    cout<<"\n c = "<<c;

    int *ptr = &a;
    cout<<"\n ptr ="<<ptr;
    cout<<"\n *ptr = "<<*ptr;
}