int main()
{
	int R = 4;
	float PI = 3.14;
	char command = 'v';
	float result;
	switch(command) {
	case 'l': 2 * PI * R; // Длина окружности
		break;
	case 's': PI * R * R; // Площадь круга
		break;
	case 'v': (4.0 / 3.0 ) * PI * R * R * R; // Объем шара
		break;
	default: R;
	}
return 0;
}
