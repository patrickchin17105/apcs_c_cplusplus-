#include <stdio.h>
int add(int x, int y){
  return x+y;
}
int main(){
  int (*lp_fun)(int, int);
  lp_fun=add;
  
  printf("3 + 4 = %d \n",lp_fun(3,4));
  return 0;
}  
