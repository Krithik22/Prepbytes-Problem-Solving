#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int testCases,year;
  cin>>testCases;
  while(testCases){
    cin>>year;
    if(year%4==0){
      if(year%100==0){
        if(year%400==0){
          cout<<"Yes\n";
        } else{
          cout<<"No\n";
        }
      } else{
        cout<<"Yes\n";
      }
    } else{
      cout<<"No\n";
    }
    testCases--;
  }
  return 0;
}