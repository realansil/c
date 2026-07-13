//matrix adding in c//
#include <stdio.h>
int main(){
 int P[3] = {5,4,3};
 int Q[3] = {3,2,1};
 int R[3];
 int i;
 for(i = 0 ; i<3 ; i++ )
 {
R[i] = P[i] + Q[i];
 }
printf("result polynomial :\n");
printf("%d x^2 + %dx + ckt%d\n", R[0],R[1],R[2]);

return 0;
 }


