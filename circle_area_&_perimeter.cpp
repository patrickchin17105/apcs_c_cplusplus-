/*
輸入一個圓半徑(r), when r >= 0, 計算並輸出圓的面積和周長，否則，輸出提示資訊。
＊/
#include <isotream>
using namespace std;
int maim(){
  double r, area;
  printf("please input radius: \n");
  scanf("%lf", &r);
  printf("The radius is %2.20lf \n" , r)
  if(r>=0.0){
    area=3.14159*r*r;
    printf("The area of the circle is %lf \n", area);
    printf("The perimeter of the circle is %lf \n", 3.14159*2*r);
  }else{
        printf("A radius should be greater than 0! \n);
  }
  cout<<"Done ! ";
   retrun 0;
}  
