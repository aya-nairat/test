#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--){
int k,n;
cin>>k>>n;
int scores[n];
for(int i=0;i<n;i++){
cin>>scores [i];}
int threshold=scores[k-1];
int c=0;
for(int i=0;i<n;i++)
{if (scores[i]>=threshold&&scores[i]>0)
c++;}
cout<<c<<endl;
return 0;}}