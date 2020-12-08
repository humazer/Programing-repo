int main() 
{
	int NUM = 9;
		// Через FOR
	int resFor = 0;
	for (int i = 0; i*i <= NUM; i++) {
		resFor = i;
	}
		// Через While
	int resWhile = 0;
	int i = 0;
	while (i*i <= NUM) {
		i++;
		resWhile = i - 1;
	}
		// Через Do While
	int resDoWhile;
	int j = 0;
	do {
		j++;
		resDoWhile = j - 1;
	} while (j * j <= NUM);
return 0;
}
