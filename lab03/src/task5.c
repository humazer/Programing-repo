int main() {
    int num = 123;
    float result = (float) 100 * (num / 100) / (num % 10); // Сравниваем первую и последнюю цифру
    int foo = (int) result;
    result = (float) foo / 100; // Обрезаем результат до второго знака после запятой
    return 0;
}
