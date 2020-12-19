
#define HOUR 10
#define MIN 35
#define SEC 59
#include <stdio.h>
/*
int main()
{
	int hoursAngle = ( HOUR * (30));
	int minutesAngle = ( MIN * (1 / 60))
return 0;
}
*/   
int main()
{
	int h = (HOUR * 30);
	float m = (MIN * 6) + (SEC * 6 / 60);
	float s = (SEC * 6);
	int angleHS, angleMH, angleMS;
	angleHS = (s - h);
	angleMH = (s - m);
	angleMS = (h - m);

}
