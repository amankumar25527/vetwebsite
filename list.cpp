#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
      list<int> a;
      a.push_back(10);
      a.push_back(1000);
      a.push_back(1);
      a.push_back(8);
      a.push_back(32);
      for(auto i:a){
        cout<<i<<endl;
      }
      cout<<"after sorting "<<endl;
      a.sort();
       for(auto i:a){
        cout<<i<<endl;
      }
      a.erase(a.begin(),a.end());
       for(auto i:a){
        cout<<i<<endl;
      }
      cout<<"all item are erased"<<endl;
    return 0;
}