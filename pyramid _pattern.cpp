#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
      int s=1;
      while(s<=n-i){
          cout<<" ";
            s++;
      }
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            k--;
            j++;
        }
        int m=2;
        j=2*i-2;
        while(j>=i){
            cout<<m;
            j--;
            m++;
        }
        cout<<endl;
        i++;
    
    }
    

  // Write your code here  

  
}
