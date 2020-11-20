int main() 
{
	int NUM = 123;
 	float a = NUM / 100;
 	float b = NUM % 10;
 	float diff = a / b;
 	float rrdiff = ((float)(((int)(diff * 1000)) / 1000.0 )); 
 return 0;
}
