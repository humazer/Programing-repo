int main () 
{
	int year = 0;
	int century;
	if (year % 100 == 0) 
	{
		century = year / 100;
	}
	else
	{
		century = (year / 100) + 1;
	}
	return 0;
}

	

