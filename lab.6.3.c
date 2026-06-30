#include <stdio.h>
void main() {
int i, j = 0, k = 0, n;
long int ARR[n], OAR[n], EAR[n];
printf("Enter the size of array AR \n");
scanf("%d", &n);
printf("Enter the elements of the array \n");
for (i = 0; i < n; i++) {
scanf("%d", &ARR[i]);
}


for (i = 0; i < n; i++) {

if (ARR[i] % 2 == 0) {
EAR[j] = ARR[i];
printf("EAR[%d]= %d\n",j,EAR[j]);
j++;
}
else {
OAR[k] = ARR[i];
printf("OAR[%d] = %d\n",k,OAR[k]);
k++;
}
}
printf("\n");
printf("The elements of OAR are \n");
printf("\n");
for (i = 0; i < k; i++) {
printf("%d\n", OAR[i]);
}
printf("\n");
printf("The elements of EAR are \n");
printf("\n");
for (i = 0; i < j; i++) {

printf("%d\n", EAR[i]);
}
}
