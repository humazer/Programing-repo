int main()
{
// Центрувати заданий рядок на площині з із заданим заповнювачем

	#define napol '_'
	#define dlina 15
	char mas[dlina] = "Ivanov        \0";
	int countprobel = 0;
	int countivanov = 0;
	char mas2[dlina];
	int j = 0;
	for (int i = 0; i < dlina; i++)
	{
		if (mas[i] == ' ')
		{
			countprobel++;
		}
	}

	for (int i = 0; i < dlina; i++)
	{
		if (mas[i] != ' ' && mas[i] != '\0')
		{
			countivanov++;
			mas2[i] = mas[i];
		}
	}
	int formula = (dlina - 1 - countivanov) / 2;

	for (int i = (formula); i < (countivanov+formula); i++)
	{
		mas[i] = mas2[j];
		j++;
	}

	for (int i = 0; i < formula ; i++)
	{
		mas[i] = napol;
	}
	for (int i = formula + countivanov; i < dlina; i++)
	{
		mas[i] = napol;
	}
}
