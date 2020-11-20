int main () 
{
	int num = 101;
	int n1 = num/100;
	int n2 = num%100/10;
	int n3 = num%100%10;
	int result;
	if  (n1 == n2  || n3 == n2 || n1 == n3) 
	{
		result = 1;
	}
	return 0;

	
}
