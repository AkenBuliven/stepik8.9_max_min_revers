# stepik8.9_max_min_revers

В заданном массиве поменять местами наибольший и наименьший элементы.

Входные данные:
Первая строка число 
N
,
(
N
>
0
)
N,(N>0) -- длина массива. Длина массива не более 100 элементов. Вторая строка 
N
N  натуральных чисел, записанных через пробел.

Выходные данные: 
Новый массив, в котором на месте минимума(ов) стоит максимум, а на месте максимума(ов) стоит минимум. Остальные элементы массива остаются на прежних местах.

Sample Input:
5
10 93 22 75 12
Sample Output:
93 10 22 75 12

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
