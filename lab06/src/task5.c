#define N 2
int main()
{
    int temp = 0;
    int mas[N][N] = {
        {1, 2},
        {4, 5},
    };
    
    for (int i = 0; i < N; i++) {
        temp = mas[i][0];
        for (int j = 0; j < N; j++) {
            mas[i][j] = mas[i][j+1];
        }
        mas[i][N-1] = temp;
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        }
    }

    return 0;
}
