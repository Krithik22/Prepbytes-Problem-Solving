#include <bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
  //write your code here
  int x,y;
  scanf("%d %d",&x,&y);
  if (x > y){
    printf("%d is greater than %d",x,y);
  }else if(x<y){
    printf("%d is smaller than %d",x,y);
  }else{
    printf("%d is equal to %d",x,y);
  }
  
  return 0;
}