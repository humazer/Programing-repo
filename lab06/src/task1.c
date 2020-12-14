int main()
{
// Центрувати заданий рядок на площині з із заданим заповнювачем

	#define zapol '_'
	#define dlina 15
	char mas[dlina] = "Ivanov        ";
	int count_spaces = 0;
	int count_spaces_before_chars = 0;
	int count_chars = 0;

  // Меняем пробелы на заполнитель и считаем кол-во пробелов и символов
  for (int i = 0; i < dlina - 1; i++)
  {
    if (mas[i] == ' ')
    {
      mas[i] = zapol;
      count_spaces++;
    }
    else
    {
      count_chars++;
    }
  }

  // Считаем кол-во пробелов перед символами
  for (int i = 0; i < dlina - 1; i++)
  {
    if (mas[i] == zapol)
    {
      count_spaces_before_chars++;
    }
    else
    {
      break;
    }
  }

  // Сдвигаем слово влево, есои пробелы перед словом
  for (int i = 0; i < count_spaces_before_chars; i++)
  {
    for (int j = 0; j < dlina - 2; j++)
    {
      mas[j] = mas[j + 1];
    }
    mas[dlina - 2 - i] = zapol;
  }

  // Сдвигаем слово на количество пробелов делённое на 2
  for (int i = 0; i < count_spaces / 2; i++)
  {
    for (int j = dlina - 3; j >= 0; j--)
    {
      mas[j + 1] = mas[j];
    }
  }

  // Заменяем на заполнитель первые символы кол-во которых равно количеству пробелов пополам 
  for (int i = 0; i < count_spaces / 2; i++)
  {
    mas[i] = zapol;
  }
}
