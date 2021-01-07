#include <stdio.h>

// Задаем размер массива
#define N 6
int main()
{
 int i, sum = 0;  // Переменные 
 int arr[N] = { 1, 22, 6, 11, 22, 22}; // Массив
 for (int i = 0; i < 10; i++) {
 }
 for (i = 0; i < N; ++i) {
  if (arr[i] > 9 && arr[i]< 100) { // Нахождение двохзначных чисел 
   sum += arr[i];
  }
 }
 return 0;
}
