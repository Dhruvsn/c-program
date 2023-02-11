#include<stdio.h>
int main(){
 float a,b,c;
   int ch;
     while(1){
        printf(" enter value of a and b:");
        scanf("%f%f",&a,&b);
        printf("Enter 1 for add,2 for sub,3 for mul, 4 for division:");
        scanf("%d",&ch);

        switch(ch){
            case 1: c=a+b;
                 printf("The sum of %f and %f is %f:",a,b,c);
                break;
            case 2: c=a-b;
                printf("The diff of %f and %f is %f",a,b,c);
                break;
            case 3: c*b;
                 printf("the product of %f and %f is %f",a,b,c);
                 break;
                
            case 4: 
               if(b!=0){
                  c=a/b;
                    printf("division of %f and %f is %f",a,b,c);
                }
                else{
                    printf("division by zero is not possible");
                    }
               
                
                default:
                  printf("-----Invalid----");
                    break;
                
        }
    }     
       return 0;
}












