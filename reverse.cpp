#include<iostream>
using namespace std;
void swap(int *a ,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
void display(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[] , int size){

   int start=0;
   int end=size-1;
   while(start<end){
    // swap(&arr[start],&arr[end]);
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
   }
}

void reverseAnother(int arr[],int size){
    int newArr[size];
   for(int i=0;i<size;i++){
    newArr[i]=arr[size-i-1];
    // cout<<arr[i]
   }
 display(newArr,size);
   
}

int main(){
    int arr[]={1,2,3,4,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    // display(arr,size);
    reverse(arr,size);
    display(arr,size);
    cout<<"\n";
    reverseAnother(arr,size);
    // display(arr,size);
    
    return 0;

}