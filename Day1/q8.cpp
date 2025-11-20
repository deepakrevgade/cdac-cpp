//Print Squares of a numbers from 1 to N where N is user input Input: 5 Output: 1 4 9 16 25

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the NO: ";
    cin >> num;

    int *arr = new int[num];

    int v =1;
    for(int i=0;i<num;i++){
        arr[i] = v++;
    }

    int *square = new int[num];
    for(int i=0;i<num;i++){
        square[i] = arr[i] * arr[i];
    }

    cout<< "Result: ";
    for(int i=0;i<num;i++){
        cout<<square[i]<<" "<<endl;
    }
    

}







