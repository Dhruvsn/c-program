#include<stdio.h>
void main(){
 int a,count;
   printf("Enter the number:");
   scanf("%d",&a);
 if(a==2){
      printf("prime");
 }
  else{
      for(int i=1;i<=a;i++){
          count = a%1;
          count++;
        if(count==0){
               printf("prime");
        }
        else{
           printf("non_prime");
        }
        
      }
  }
}
                        
