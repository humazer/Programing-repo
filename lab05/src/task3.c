int main()
{
	int NUM = 102300; // Номер билета
	int sumfnum = 0;
	int sumlnum = 0;
	int fhalf = NUM / 1000;
		// Через for
	for (int a = 1000; (NUM / a) > 0; a *= 10) {
		sumfnum += NUM / a % 10;
	}
	for (int b = 1; (fhalf / b) > 0; b *= 10) {
		sumlnum += NUM / b % 10;
	}
	
		// Через WHILE
	int sumfnumWhile = 0;
	int sumlnumWhile = 0;	
	
	int a = 1000;
	int b = 1; 
	
	while ((NUM / a) > 0) { 
		sumfnumWhile += NUM / a % 10;
		a *= 10;
	}
	while ((fhalf / b) > 0) {
		sumlnumWhile += NUM / b % 10;
		b *= 10;
	}
		// Через DO WHILE
	int sumfnumDoWhile = 0;
	int sumlnumDoWhile = 0;
	
	int a1 = 1000;
	int b1 = 1;
	
	do {
		sumfnumDoWhile += NUM / a1 % 10;
		a1 *= 10;
	} while ((NUM / a1) > 0);
	do { 
		sumlnumDoWhile += NUM / b1 % 10;
		b1 *= 10;
	} while ((fhalf / b1) > 0);
	
		// Проверяем удачный/нет
	int resFor = 0;
	int resWhile = 0;
	int resDoWhile = 0;
		// Удачный/нет через FOR
	if (sumfnum == sumlnum) {
		resFor = 1;
	}
		// Удачный/нет через While
	if (sumfnumWhile == sumlnumWhile) {
		resWhile = 1;
	}
		// Удачный/нет через Do While
	if (sumfnumDoWhile == sumlnumDoWhile) {
		resDoWhile = 1;
	}
		
	return 0;
}

