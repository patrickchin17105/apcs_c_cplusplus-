#include <stdio.h>   //首先inclue〈stdio.h〉不是語句，是執行C需要的標頭檔案，stdio.h是標準輸入輸出函式庫，裡面包含了printf和scanf函式。
int add(int x, int y){
  return x + y;
}
struct Point{
  int x;
  int y;
  int(*lpfun)(int,int);
};
typedef struct Point Point;

int main() {
  Point p1;
  p1.x = 1;
  p1.y = 3;
  p1.lpfun = add; //1,3 做一個相加的動作, line 2 & 3
  printf("%d \n", p1.x);
  printf("%d \n", p1.y);
  printf(" x+y = %d \n,p1.lpfun(p1.x,p1.y));
  return 0;
  }       
