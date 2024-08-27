//delete all the occurence of an element
//count frequency of all th enumber in an array

#include<iostream>
using namespace std;
void display(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}}
void deletion(int arr[],int& size,int capacity,int key){
    for(int i=0;i<size;i++){
    if(arr[i]==key){
        arr[i]=arr[i+1];
    }
    }
    size--;
}

int main(){
    int capacity=10,size=5;
    int arr[capacity]={3,1,2,4,3,2,1,3,3};
    cout<<"Dispalying the array: ";
    display(arr,size);
    cout<<endl;
    int key;
    cout<<"enter key: ";
    cin>>key;
    deletion(arr,size,capacity,key);
    cout<<"new array is:";
    display(arr,size);
}