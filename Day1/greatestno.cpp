#include <iostream>
using namespace std;

void greatestnumber(int a,int b,int c){
    int res;
    if(a>b && a>c){
        cout<< a <<" is largest";
    }else if (b>c){
        cout<< b<<" is largest";
    }else{
        cout<<c <<" is largest";
    }
    
    
    
}
int main(){
    cout<<"Enter 3 Numbers: ";
    int a,b,c;

    cin >>a >>b>>c;
    greatestnumber(a,b,c);
   
}