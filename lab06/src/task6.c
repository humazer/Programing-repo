int main()
{
    #define N 3
    int temp = 0;
    int mas[N][N] = {
        {5, 4, 7},
        {1, 5, 8},
        {5, 6, 9},
    };
    int res[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = 0;
            for(int k = 0; k < N; k++) {
                res[i][j] += mas[i][k] * mas[k][j];
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        }
    }

    return 0;
}

