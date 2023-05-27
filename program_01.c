
#include<stdio.h>
int main(){
    int arr[100];
    int i,item,pos,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

     printf("enter the array elements:");
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("Array before insertion:");
     }
      for(i=0;i<n;i++){
          printf("%d",arr[i]);
          printf("\n");

      }

      printf("Enter the element to be inserted:");
      scanf("%d",&item);


      printf("enter the position at which the element is to be inserted:");
      scanf("%d",&pos);


      n++;

      for(i =n-1;i>=pos;i--){
        arr[i] = arr[i -1];
         arr[pos -1] = item;
         printf("Array after insertion:");


      }
      for(i=0;i<n;i++){
         printf("%d",arr[i]);
         printf("\n");
      }
     return 0;
}
























