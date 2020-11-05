int main() {
   int my_number = 375;
   int result = 100 * (my_number % 10) + 10 * ((my_number / 10) % 10) + (my_number / 100); //Разбиваем число на цифры, потом в обратном порядке собираем
   return 0;
}
