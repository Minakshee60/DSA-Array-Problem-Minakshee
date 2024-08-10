#include<iostream>
using namespace std;

int main(){
    int arr[]={2,5,7,0,34,0,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int j=0;j<size;j++){
        if (arr[j]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}