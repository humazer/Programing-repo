int main()
{
	  int X = 8;
	  int y = 0;
	  if (X < -1) 
	  {
		         y = -1 / X;
	  }
	  else if (X > -1 && X <= 0) {
		         y = X + 1;
	  }
	  else if (X > 1) {
		         y = X - 1;
	  }
    return 0;
}
