int main ()
{
	int a = 10; // Первое заданное число
	int b = 25; // Второе заданное число
	int nsd = 0;
	    do
	    {
	            if (a>b)
	            a = a % b;
	            else
	            b = b % a;
	            
	    } while (a != 0 && b != 0);
	    nsd = a + b; 
}
