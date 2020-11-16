int main()
{
    int NUM = 3244; // Число в 8-ой системе счисления
    int O = 8; // Система счиления
    int a = NUM / 1000;
    int b = NUM / 100 % 10;
    int c = NUM % 100 / 10;
    int d = NUM % 10;
    int notation = ((O * O * O * a) + (O * O * b) + (O * c) + (1 * d)); // Перевод в десятичную систему счисления
        return 0;
}
