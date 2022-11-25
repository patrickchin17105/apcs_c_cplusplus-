/*
目前使用的格里曆閏年規則如下：

西元年份除以4不可整除，為平年。
西元年份除以4可整除，且除以100不可整除，為閏年。
西元年份除以100可整除，且除以400不可整除，為平年
西元年份除以400可整除，為閏年。
請你寫一個寫程式判斷，西元某一年是不是閏年。
*/

#include <iostream>
using namespace std;
int main()
{
  int year;
  scanf("%d" , & year);
  if(year % 4 == 0){
    if(year % 100 == 0){
      
    }else if(year % 100 == 0 && year % 400 != 0){
      cout<< year<< " Leap year"
    }
  }else{
    cout << year <<" not Leap year"
  }
  
/*  
  因為不是閏年就是平年，沒有第三種狀況。

所以只要針對描述閏年的兩句話下手：

西元年份除以4可整除，且除以100不可整除，為閏年。
西元年份除以400可整除，為閏年。
#include<iostream>
using namespace std;

int main()
{
    int n;
    while( cin >> n )
    {
        if( n%400==0 or ( n%4==0 and n%100!=0 ) )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
*/
