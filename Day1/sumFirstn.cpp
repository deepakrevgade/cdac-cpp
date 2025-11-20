#include<iostream>
using namespace std;
void sumofFirst(int num);

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    sumofFirst(num);
    return 0;
}
void sumofFirst(int num){
    int sum=0;
    int i=1;
    while(i<=num){
        sum = sum+i;
        i++;
    }
    cout<<"sum of first "<<num<< " natural no is: "<<sum;
}

