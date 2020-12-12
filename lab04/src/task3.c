int main()
{
	int k = 6;
	int m = 3;
	int n = 1;
	int prmn;
	
	if (k > m) {
		prmn = k;
		k = m;
		m = prmn;
	}
	if (m > n) {
		prmn = m;
		m = n;
		n = prmn;
	}
	if (k > m) {
		prmn = k;
		k = m;
		m = prmn;
	}
return 0;
}
