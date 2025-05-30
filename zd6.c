#include <stdio.h>

// Функція для заповнення матриці за заданим правилом
void fillMatrix(int n, int m, double matrix[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < j)
                matrix[i][j] = i - j;
            else if (i == j)
                matrix[i][j] = i + j;
            else
                matrix[i][j] = (i + j) / 2.0;  // Щоб результат був дійсним
        }
    }
}

// Функція для виведення матриці
void printMatrix(int n, int m, double matrix[n][m]) {
    printf("Матриця C[%d][%d]:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%6.2lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Головна функція
int main() {
    int n, m;

    printf("Введіть кількість рядків (n): ");
    scanf("%d", &n);

    printf("Введіть кількість стовпців (m): ");
    scanf("%d", &m);

    double matrix[n][m];

    fillMatrix(n, m, matrix);
    printMatrix(n, m, matrix);

    return 0;
}
