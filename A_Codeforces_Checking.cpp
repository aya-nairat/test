#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>> t;
string cf="codeforces";
while (t--){
char c;
cin>>c;
if (cf.find(c)!=string::npos)
cout <<"YES"<<endl;
else 
cout <<"NO"<<endl;}
return 0;}