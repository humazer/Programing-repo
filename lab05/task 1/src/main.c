int main ()
{
	int num1 = 12; // Первое заданное число
	int num2 = 14; // Второе заданное число
	
		// Через FOR
	int resFor;
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			resFor = i;
			break;
		}
	} 
		// Через While
	int resWhile;
	int j = num1;
	while (j > 0) {
		if (num1 % j == 0 && num2 % j == 0) {
			resWhile = j;
			break;
		}
		j--;
	}
	
		// Через Do While
	int resDoWhile;
	int k = num1;
	do {
		if (num1 % k == 0 && num2 % k == 0) {
			resDoWhile = k;
			break;
		}	
		k--;
	} while (k > 0);
return 0;
}
