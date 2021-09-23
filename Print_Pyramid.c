#include<stdio.h>

int main(){
  int rows,i,j;
  printf("Enter number height of pyramid (Number of rows) : ");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
    for(j=1;j<=(2*rows-1);j++){
      if(j>=rows-(i-1) && j<=rows+(i-1)){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
