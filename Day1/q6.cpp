#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter Value: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<< "Data: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    int value = 0;
    int count = 0;
    cout<<"Enter Value: ";
    cin>>value;
    for(int i=0;i<n;i++){
        if(arr[i] == value){
            count++;
        }
    }

    cout<<"The Frequency of "<<value<<" is : "<<count<<endl;

}