#include <stdio.h>

//void 在諸如 C/C++ 等程式語言中是一個關鍵字，表示一個函數「不返回值」。
注意這並不意味著某個函數永不返回，只是說「該函數的返回值沒有意義、調用方應當無視」。
在參數表中的 void 代表該函數沒有參數。

void print(int x){
  int t;
  //scanf("%d",&t);
  if(x==1){
    printf("%2d *%2d ",x,1,x*1);
  }else{
    print(x-1);
    printf(%2d *%2d = %2d ",x,1,x*1);
   }
 }
 int main()
 {
  print(9);
  printf("\n Hello World");
  return 0;
}  
  //【C/C++】输出格式%d、%6d、%06d、%-6d、%.6f的区分
1、%d 普通的整数输出
2、%6d 整数输出，宽度是6位，不足左边补空格
3、%06d 整数输出，宽度是6位，不足左边补数字0
4、%-6d 整数输出，宽度是6位，不足右边补空格
5、%.6f 输出小数，即保留小数点后6位
————————————————
