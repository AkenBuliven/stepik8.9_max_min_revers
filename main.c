#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    
    int n;
    int i;
    int array[100];
    int min = 0;
    int max = 0;

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=0; i<n; i++)
    {
      if (array[i] < array[min])
      {
        min = i;
      }
      else if (array[max] < array[i])
      {
        max = i;
      }
    }

    i = array[max];
    array[max] = array[min];
    array[min] = i;

    for (i=0; i<n; i++)
    {
      printf("%d ", array[i]);
    }


  return 0;
   
}

