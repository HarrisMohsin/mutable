#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
     
    int arr[5];
    int i;
 
 
    for (i=0; i<5; i++) {
        arr[i] = rand();
        printf("%i ", arr[i]);
 }
 
 
  return 0;
}
