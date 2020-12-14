#define num 1560
int main()
{
	char *masThousands[10] = {"dont","Одна тисяча","Дві тисячі","Три тисячі","Чотири тисячі","П ять тисяч","Шість тисяч","Сім тисячі","Вісім тисячі","Дев ять тисяч"};
	char *masHundreds[10]  = {"dont","Сто","двісті","триста","чотириста","п ятсот","шістсот","сімсот","вісімсот","дев ятсот"};
	char *masTens[10]  = {"dont","десять","двадцять","тридцять","сорок","п ятдесят","шістдесят","сімдесят","вісімдесят","дев яносто"};
	char *masDecimal[10]  = {"ZERO","один","два","три","чотири","п ять","шість","сім","вісім","дев ять"};
	char *masAny[10] = {"dont","одинадцять","дванадцять","тринадцять","чотирнадцять","п ятнадцять","шістнадцять","сімнадцять","вісімнадцять","дев ятнадцять"};
	char *result[4];
	if (num != 0 && num < 10000 ){
	if ((num % 100) > 19){
		if (num >=1 && num % 10 != 0)
		{	
			result[3] = masDecimal[(num % 10)];
		}
	
		if ((( num % 100 ) / 10)>0)
		{
			result[2] = masTens[(( num % 100 ) / 10)];
		}
		}
	if ((num % 100) < 10)
	{
		result[3] = masDecimal[(( num % 100) % 10)];
	}
	if ((num % 100) > 10 && (num % 100) < 20){
		result[3] = masAny[(( num % 100 ) / 10)];
		}
	if ((( num / 100 ) % 10) > 0)
	{
		result[1] = masHundreds[(( num / 100 ) % 10)];
	}
	if ( (num / 1000) > 0)
	{
		result[0] = masThousands[(num / 1000)];
	}
	}
	else if(num==0){
		result[3]= masDecimal[0];
	}
	return 0;	
}
