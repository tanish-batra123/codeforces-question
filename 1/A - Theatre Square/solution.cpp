#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n,m,a;
cin>>n>>m>>a;
 
long long rowMeKitnaLega=ceil((double) n/a);
long long colMeKitnaLega=ceil((double) m/a);
cout<<rowMeKitnaLega*colMeKitnaLega;
    return 0;
}