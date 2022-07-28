#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int input,i,n=5;
  int k=n;
  cin>>input;
  while(input<=n){
    int i=1;
    while(i<=k){
      cout<<i<<" ";
      i++;
    }
    printf("\n");
    input++;
    k--;
  }
  return 0;
}