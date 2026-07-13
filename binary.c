#include <stdio.h>
int main(){

int arr[10],i,key,n;
int low,mid,high;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the sorted array");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the element to search");
scanf("%d",&key);
low = 0;
high = n-1;
while(low <= high){
    mid =  low  + (high - low) / 2 ;
    if(arr[mid] == key){
        printf("element %d found at position %d\n",key,mid+1);
        return 0;
    }
    else if (arr[mid]<key)
    {
        low = mid+1;
    }
    else{
        high = mid-1;
    }
}
printf("element %d not found\n",key);
return 0;
}










