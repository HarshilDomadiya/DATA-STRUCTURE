#include<iostream>
using namespace std;
void merge_two_sorted(int arr1[],int arr2[],int size1,int size2){
    int i,j,temp;
    for(i=0,j=0;i<size1,j<size2){
        if(arr1[i]>arr2[j]){

        }
    }
}
main(){
    int arr1[4] = {1,4,8,10}; 
    int arr2[3] = {2,3,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    merge_two_sorted(arr1,arr2,size1,size2);
}