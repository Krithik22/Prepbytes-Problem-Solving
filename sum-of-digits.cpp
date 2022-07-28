#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,sum=0,rem;
  cin>>n;
  while(n != 0){
    rem = n%10;
    n = n/10;
    sum += rem;
  }
  cout<<sum;
  return 0;
}