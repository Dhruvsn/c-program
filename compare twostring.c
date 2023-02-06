#include<stdio.h>
#include<string.h>
 int main(){
    char string1[20],string2[40];
    int result;
     printf("Enter first string");
     gets(string1);

     printf("enter strng2");
     gets(string1);
     result = strcmp(string1,string2);

     if(result ==0){
        printf("both the string are equal");
     }
  else{
     printf("both the strngs are not equal");
     }
   return 0;
 
   
   }
