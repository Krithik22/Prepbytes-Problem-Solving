#include <bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
  //write your code here
  int no_of_games,i,p,q;
  scanf("%d",&no_of_games);
  int T=0,P=0;
  for(i=0;i<no_of_games;i++){
    scanf("%d %d",&p,&q);
    if(p>q){
      P++;
    } else if(p<q){
      T++;
    }
  }
  if(P>T){
    printf("Pragya\n");
  }
  else if(P<T){
    printf("Tina\n");
  }
  else{
    printf("Draw\n");
  }
  return 0;
}