#include <iostream>
using nameplace std;
float print_sum(int


float f_ret;
int i, sum=0;
for(

int main(void){
  int n=5, i;
  int score[5];
  int u_c = 0;
  float aver;
  printf("please input 5 scores:\n");
  for(i=0;i<n;i++){
    scanf("%d",&score[i]);
    if (score[i]<60){
      u_c++;
    }
  }   
  aver = print_sum(score,n);
  printf("\n score average = %f\n" ,aver);
  temp = add(score[0],&score[1]);
  printf("two scores add = %d\n", temp);
  printf("%p %p \n ",&score[0],&score[1]);
  if(u_c == 0){
    printf("All pass!\n')
  }else{
    printf("need to put more attentions , have %d courses\n",u_c);
  }  
  
