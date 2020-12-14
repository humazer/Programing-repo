int main()
{
	int NUM = 6;
		// Через For
	int sumFor = 0;
	int resFor;
	int tempFor;
	for (int i = 1; i < NUM; i++) {
		tempFor = NUM % i;
		if (tempFor == 0) {
			sumFor += i;
		}
	} 
	if (sumFor == NUM) {
		resFor = 0; // 0 - Число совершенное 
	} else if (sumFor != NUM) {
		resFor = 1; // 1 - Число не совершенное
	}
		// Через While
	int sumWhile = 0;
	int resWhile;
	int tempWhile;
	int j = 1;
	while (j < NUM) {
		tempWhile = NUM % j;
		if (tempWhile == 0) {
			sumWhile += j;
		}
		j++;
	}
	if (sumWhile == NUM) {
		resWhile = 0; // 0 - Число совершенное
	} else if (sumWhile != NUM) {
		resWhile = 1; // 1 - Число не совершенное
	}
		// Через Do While
	int sumDoWhile = 0;
	int resDoWhile;
	int tempDoWhile;
	int k = 1;
	do {
		tempDoWhile = NUM % k;
		if (tempDoWhile == 0) {
			sumDoWhile += k;
		}
		k++;
	} while (k < NUM);
	if (sumDoWhile == NUM) {
		resDoWhile = 0; // 0 - Число совершенное
	}else if (sumDoWhile != NUM) {
		resDoWhile = 1; // 1 - Число не совершенное
	}
	return 0;
}
