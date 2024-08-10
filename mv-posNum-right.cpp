//so i will assing a variable which is track the all negative number is 
// first variable will constat and if any negative value occur at right side then it will swap with the first varible and then increate that value


#include<iostream>
using namespace std;
#include<vector>

using namespace std;
 int main(){
    vector<int> ans = {1,-2,4,-8,9,4,-5,-7};
    int i=0;
    for(int j=0 ; j<ans.size();j++){
        if(ans[j]<0){
            int temp=ans[i];
            ans[i]=ans[j];
            ans[j]=temp;
            i++;
            // cout<<ans[i]<<" "<<ans[j];
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
  return 0;

 }