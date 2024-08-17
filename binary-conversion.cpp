
#include <bits/stdc++.h>
using namespace std;

 string convertToBinary(int num){
      string res="";
      while(num>0){
            if(num%2==1) res+="1";
            else res+="0";
            num/=2;
        }
        return res;
  }
  
  int calculateDecimal(string str){
      int size=str.size();
      cout<<size<<" size";
      int sum=0;
      int p2=1;
      for(int i=size-1;i>=0;i--){
          if(str[i]=='1'){
              sum+=p2;
          }
          p2=2*p2;
      }
      
      return sum;
  }
  

int main()
{
 
        int num=70;
        int i=3;

        string str="";
        str=convertToBinary(num);
        
        while(str.size()<i){
            str+="0";
        }
        reverse(str.begin(),str.end());
        // cout<<str<<" ";
        
        cout<<str[str.size()-i]<<" ";
        
        str[str.size()-i]='1';
        cout<<str<<" ";

        int result=0;
        result=calculateDecimal(str);
        
        cout<<result<<" ";
        
        str[str.size()-i]='0';
        
        int result2=0;
        result2=calculateDecimal(str);
        
        cout<<result2;

	return 0;
}