#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*****
//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

//分析:i*i = n
*****/
int judge_square(int n);
void main (void);

void main (void){
   int num = 0;
   int num1 = 0;
   int num_max = 65535;
   int ret = 0;
   int ret1 = 0;
   for(num = 0; num < num_max; num++){
      ret = judge_square(num+100);//+100
      ret1 = judge_square(num+100+168); 
      if(ret != -1 && ret1 != -1 ){
         printf("right, num[%d], ret[%d], ret1[%d] \n",num, ret, ret1);
         //break;
      }         
   }
   if(num >= num_max){
      printf("fail, num[%d], ret[%d], ret1[%d] \n",num, ret, ret1);
   }
   return ;
}


int judge_square(int n){
   if(n <= 0){
      //printf("input number[%d] is wrong.", n);
      return -1;
   }
   int i = 0;
   for(i = 0; i < n; i++){
      if(i*i == n){
         //printf("right: %d * %d  = %d ", i, i, n); 
         break;
      }
   }
   if(i >= n){
      return -1;
   }
   return i;

}