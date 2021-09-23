#include<stdio.h>

int f_substring(char s1[],char s2[]){
  int i=0,j=0;
  int k;
  while(s1[i]!= '\0'){
    while (s1[i] != s2[0] && s1[i] == '\0') {
      i++;
    }
    if(s1[i]=='\0'){
      return -1;
    }
    k=i;
    while(s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0'){
      i++;
      j++;
    }
    if(s2[j] == '\0'){
      return k;
    }
    if(s1[i] == '\0'){
      return -1;
    }
    i = k + 1;
    j = 0;
  }
}

int main(){
  char str1[40] = "Aryan";
  char str2[40] = "jk";
  int indx;
  // printf("Enter String S1 : ");
  // gets(str1);
  // printf("Enter String S2 : ");
  // gets(str2);
  indx = f_substring(str1,str2);
  printf("%d",indx);
  // if(indx == -1){
  //   printf("Not Found");
  // }
  // else{
  //   printf("Found on S1 Index: %d",indx);
  // }
  return 0;
}
