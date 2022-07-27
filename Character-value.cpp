#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  char x;
  scanf("%c",&x);
  
  if (x=='P' || x=='p'){
    printf("PrepBytes");
  }else if(x=='Z' || x=='z'){
    printf("Zenith");    
  }else if(x=='E' || x=='e'){
        printf("Expert Coder");
  }else if(x=='D' || x=='d'){
      printf("Data Structure");
  }
  return 0;
}