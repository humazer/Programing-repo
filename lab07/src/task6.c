#define N 6

int func(int* arr, int size) {
int sum = 0;
for (int i = 0; i < size; ++i) {
if (arr[i] > 9 && arr[i] < 100) {
sum += arr[i];
}
}
return sum;
}
int main() {
int arr[N] = { 1, 22, 6, 11, 22, 22 } ; // Массив
int sum = func(arr, N);
return 0;
}
