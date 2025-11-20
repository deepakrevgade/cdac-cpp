#include<iostream>>
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

    //count digit
    int temp = num;
    while(temp != 0){
        temp = temp/10;
        count++;
    }

    //sum of powers
    temp = num;
    int sum =0;
    while(temp != 0){
        int digit = temp%10;
        sum = sum+ power(digit,count);
        temp = temp /10;
    }

}
int main(){
    int num;
    cout<<"Enter No: ";
    cin>>num;

    if(armstrong(num)){
        cout<<num<<" armstrong";       
    }else{
        cout<<num<<" is not armstrong";
    }
}