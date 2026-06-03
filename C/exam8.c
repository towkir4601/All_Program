#include <stdio.h>
#include <stdlib.h>

int main()

{  int n;
    printf("Enter a number");
    scanf("%d",&n);

     int sum=0;
  int count =0;
   int arr[50];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2!=0){

    count++;
    sum=sum+arr[i];
   }
}
   printf("total odd number:%d\n",count);
    printf("total sun of odd number:%d",sum);


    return 0;
}