int main()
{
    int NUM = 123;
    int num1 = NUM / 100;    
    int num2 = NUM / 10 % 10;
    int num3 = NUM % 10;
    int pp = num3 * 100 + num2 * 10 + num1;
    return 0;
}
