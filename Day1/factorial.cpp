#include<iostream>
using namespace std;

int fact=1;

int factorial(int n){

    while(n>0){
        fact = fact*n;
        n--;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the No: ";
    cin>>num;

    int res = factorial(num);
    cout<<"Factorial of "<<num<<" is: "<<res<<endl;
}