#include <stdlib.h>
// Преждевременное объявление функции
int nod_for(int num1, int num2);
int nod_while(int num1, int num2); 
int nod_dowhile(int num1, int num2); 
int main ()
{
	
	int a = 64;
	int b = 4;
	
		// Через FOR
	int resultFor = nod_for(a, b);
		// Через While
	int resultWhile = nod_while(a, b);
		// Через Do While
	int resultDoWhile = nod_dowhile(a, b);
	
return 0;
}

int nod_for(int num1, int num2) {
	int nodFor = 0;
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			nodFor = i;
			break;
		}
	}
	return nodFor;
}

int nod_while(int num1, int num2) {
	int nodWhile = 0;
	int j = num1;
	while (j > 0) {
		if (num1 % j == 0 && num2 % j == 0) {
			nodWhile = j;
			break;
		}
		j--;
	}
	return nodWhile;
}

int nod_dowhile(int num1, int num2) {
	int nodDoWhile = 0;
	int k = num1;
	do {
		if (num1 % k == 0 && num2 % k == 0) {
			nodDoWhile = k;
			break;
		}	
		k--;
	} while (k > 0);
	return nodDoWhile;
}
