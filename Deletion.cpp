#include<iostream>
using namespace std;
void display(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
}
void deletion(int arr[],int& size,int capacity,int pos){
    if(size>=capacity){
        cout<<"Array is Full";
    }
    if(pos<0||pos>size){
        cout<<"Invalid position";
    }
    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
}

int main(){
    int capacity=10,size=5,pos=2;
    int arr[capacity]={2,5,3,8,3};
    cout<<"Dispalying the array: ";
    display(arr,size);
    cout<<endl;
    deletion(arr,size,capacity,pos);
    cout<<"new array is:";
    display(arr,size);
}