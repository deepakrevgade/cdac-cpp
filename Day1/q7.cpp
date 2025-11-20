#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    int oddCount = 0;
    int evenCount = 0;

    while(num>0){
        int digit =num%10;
        if(digit % 2== 0){
            evenCount++;
        }else{
            oddCount++;
        }
        num = num/10;
    }

    cout<<"The Even count is: "<<evenCount<<endl<< "The odd Count is: "<<oddCount;
}