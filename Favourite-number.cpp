#include <bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
  //write your code here
  int testCases,n;
  scanf("%d",&testCases);
  while(testCases){
    scanf("%d",&n);
    int cnt = 0,rem;
    while(n > 1){
      rem = n%10;
      n = n/10;
      if(rem == 5){
        cnt++;
      }
    }
    printf("%d\n",cnt);
    testCases--;
  }
  return 0;
}