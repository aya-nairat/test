#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>> t;
int A[t];
for(int i=0;i<t;i++)
cin >> A[i];
int x;
cin >>x;
int pos=-1;
for(int i=0;i<t;i++)
if (A[i]==x){
pos=i;
break;}
cout <<pos<<endl;
return 0;
}