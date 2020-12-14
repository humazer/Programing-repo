int main ()
{
	int NUM = 21;
		// Через FOR
	int resFor = 0;
	
	for (int i = 2; i < NUM; i++) {
		if (NUM % i == 0) {
			resFor = 1; // 1 - Число не простое
		}
	}
		// Через While
	int resWhile = 0;
	int i = 2;
	
	while (i < NUM) {
		if (NUM % i == 0) {
			resWhile = 1; // 1 - Число не простое
		}
		i++;
	}
		// Через Do While
	int resDoWhile = 0;
	int j = 2;
	
	do {
		if (NUM % j == 0) { 
			resDoWhile = 1; // 1 - Число не простое
		}
		j++;
	} while (j < NUM);
return 0;
}
