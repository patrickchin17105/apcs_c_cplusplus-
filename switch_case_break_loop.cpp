#include <iostream>
using namespace std;
int main()
{
  int i;
  scanf("%d",&i);
  switch(i){
    case 1:
         printf(" this is Manday \n");
    break;
    case 2:
         printf(" this is Tuesday \n");
    break;
    case 3:
         printf(" this is Wedesday \n");    
    break;
    case 4:
          printf(" this is Thursday \n");
    break;
    case 5:
          printf(" this is Friday \n");
    break;
    case 6:
          printf(" this is Saterday \n");
    break;
    case 7:
          printf(" this is Sunday \n");
    break;
    default:
          printf("please input 1 ~ 7 \n");
    break;
  }
  cout<<" Hello World";
  return 0;
}  
