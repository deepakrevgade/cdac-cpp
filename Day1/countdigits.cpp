#include<iostream>
using namespace std;

void countdigit(int num){
    
    int count=0;

    if(num == 0){
        count=1;
    }
    while(num>0){ 
        
        num = num/10;
        count++;

    }
    
    cout<<"Count of digit: "<<count;

}
int main(){
    int num;
    cout<<"Enter Number: ";
    cin>> num;

     countdigit(num);
    

    return 0;

}