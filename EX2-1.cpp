#include<iostream>
using namespace std;
int Count(int size,int arr[]){
    int i,j,count=0,x,Max=0;
    for(i=0;i<size;i++){
        count=0;
        x=arr[i];
        for(j=i;j<size;j++){
            if(x==arr[j]){
                count++;
                Max=max(count,Max);
            }
        }
    }return Max;
}
int main(){
    int arr[10]={3,1,5,3,4,1,2,3,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=Count(size,arr);
    cout<<result;
}