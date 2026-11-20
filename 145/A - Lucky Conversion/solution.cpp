#include <bits/stdc++.h>
using namespace std;
 int main(){
   string a,b;
 
   cin>>a>>b;
 
   int i=0;
   int j=0;
   int cnt=0;
   int swapCnt1=0;
   int swapCnt2=0;
   while(i<a.size()&&j<b.size()){
    if(a[i]!=b[j])cnt++;
   i++;
   j++;
   }
 for(int p=0;p<a.size();p++){
    if(a[p]=='4' && b[p]=='7')swapCnt1++;
    if(a[p]=='7'&&b[p]=='4')swapCnt2++;
 }
  cout<<min(cnt,max(swapCnt1,swapCnt2));
  return 0;
 }