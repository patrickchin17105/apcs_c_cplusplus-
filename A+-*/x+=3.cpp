#include <stdio.h>

int main() {
    
    int a =20, b = 7, x ;
    
   printf("A => " ); 
   //scanf("%d" , &a );
   printf("B =>  "); 
   //scanf("%d", &b );
   printf("A + B =%d\n" , a + b );
   printf("A - B =%d\n" , a - b );
   printf("A * B =%d\n" , a * b );
   printf("A / B =%d\n" , a / b );
   printf("A % B =%d\n" , a % b );   //mode
   
   x = 16;
   x += 3 ;
   printf("x= %d \n ", x);
   x = 16;
   x = x + 3;
   printf("x= %d \n ", x);

   x = 16;
   x -=  3;
   printf("x= %d \n ", x);  
   x = 16;
   x *=  3;
   printf("x= %d \n ", x);   
   x = 16;
   x /= 3;
   printf("x= %d \n ", x);   
      x = 16;
   x %=  3;
   printf("x= %d \n ", x);
   
      x = 16;
   x &=  3;
   printf("x= %d \n ", x);
   
      x = 16;
   x |= 3;
   printf("x= %d \n ", x);
   
      x = 16;
   x ^= x ;
   printf("x= %d \n ", x);
   
      x = 16;
   x >>= 3;
   printf("x= %d \n ", x);
   
      x = 16;
   x <<= 3;
   printf("x= %d \n ", x);
   
  return 0;
}
