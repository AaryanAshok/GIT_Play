/*
Palindrome Numbers are the numbers that does not change the value if the numbers
are reversed e.g. 123 reversed 321 value is changes not a palindrome number but
1221 if reversed 1221 still same value then it's a palindrome number
*/
#include<stdio.h>

int main(){
  int num,tmp1=0,tmp2=0;
  printf("Enter Number : ");
  scanf("%d",&num);
  tmp2 = num;
  while(tmp2 > 0){
    tmp1 = tmp2%10 + tmp1 * 10;
    tmp2 /=10;
  }
  (tmp1 == num)?printf("%d is a Palindrome Number",num):printf("%d is not a Palindrome Number",num);
  return 0;
}
