#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*****
//题目：输入某年某月某日，判断这一天是这一年的第几天？

//分析
//普通年能被4整除且不能被100整除的为闰年。（如2004年就是闰年，1900年不是闰年）
//世纪年能被100整除且能被400整除的是闰年。（如2000年是闰年，1900年不是闰年）
//对于数值很大的年份，这年如果能整除3200，并且能整除172800则是闰年。如172800年是闰年，86400年不是闰年（因为虽然能整除3200，但不能整除172800）
*****/

int judge_year(int year);
void main (void);

void main (void){
   int num = 2001;
   int ret = 0;

   ret = judge_year(num);
   if(ret == 1){
      printf("year[%d] is leap year\n", num);
   }else{
      printf("year[%d] is not leap year\n", num);
   }
  
   return ;
}


int judge_year(int year){
   if(year <= 0){
      return -1;
   }
   if((year %4 == 0 && year %100 != 0) || \
      (year %400 == 0)){
      return 1;
   }

   if((year %3200 == 0 && year %172800 == 0)){
      return 1;//不好考虑
   }
   return 0;   

}