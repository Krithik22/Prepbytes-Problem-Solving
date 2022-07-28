#include <bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
  //write your code here
  int testCases,i,pair_of_socks;
  scanf("%d",&testCases);
  for(i=0;i<testCases;i++){
    scanf("%d",&pair_of_socks);
    // int socks_in_pair=2;
    if(pair_of_socks==1){
      printf("%d\n",pair_of_socks);
    }
    else{
      // socks_in_pair = socks_in_pair * pair_of_socks;
      printf("%d\n",pair_of_socks+1);
    }
  }
  return 0;
}