#include <stdio.h>
int main(){

int arr[100],n,key,i;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the number to search");
scanf("%d",&key);
for(i=0;i<n;i++){
if(arr[i] == key){
printf("element found at position %d\n",i+1);
return 0; 
}
}


printf("element not found\n");
return 0;
}

