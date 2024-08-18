#include<iostream>
using namespace std;
int majority(int size,int arr[]){
    int count=0,Max=0;
    int temp=0;
    for(int i=0;i<size;i++){
        count=0;
        for(int j=i;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                if(count>Max){
                    Max=count;
                    temp=arr[i];
                }
            }
        }
    }
    return temp;
}
main(){
    int arr[5]={3,2,3,2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int R=majority(size,arr);
    cout<<R;
}