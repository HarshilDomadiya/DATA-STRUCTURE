#include<iostream>
using namespace std;
void Drotate(int size,int arr[],int key){
    while(key!=0){
    int temp=arr[size-1];
    for(int i=size;i>=0;i--){
            arr[i]=arr[i-1];
    }
    arr[0]=temp;
    key--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    Drotate(size,arr,key);
}