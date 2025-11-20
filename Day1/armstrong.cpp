#include<iostream>
using namespace std;

int power(int base,int exp){
    int result =1;
    for(int i=0;i<exp;i++){
        result*=base;
    }
    return result;
}

bool armstrong(int num){
    int original = num;
    int count = 0;

    //count digits
    int temp=num;
    while(temp != 0){
        temp=temp/10;
        count++;
    }

    //sum of powers
    int sum = 0;
    temp= num;
    while(temp !=0){
        int digit = temp %10;
        sum = sum+power(digit,count);
        temp = temp/10;
    }
    return sum == original;

}
int main(){
    int num;
    cout<<"Enter a No: ";
    cin>> num;

    if(armstrong(num)){
        cout<< num<<" No is armstrong";
    }
    else{
        cout<<num << "No is not armstrong";
    }
}
