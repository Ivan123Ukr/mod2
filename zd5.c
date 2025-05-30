#include <stdio.h>

// Функція для введення елементів масиву
void inputArray(double arr[], int n) {
    printf("Введіть %d дійсних чисел:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
}

// Функція для виведення елементів масиву
void outputArray(double arr[], int n) {
    printf("Елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %.2lf\n", i, arr[i]);
    }
}

// Функція для обчислення суми елементів масиву
double calculateSum(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Головна функція
int main() {
    int n;
    printf("Введіть кількість елементів (n): ");
    scanf("%d", &n);

    double arr[n];

    inputArray(arr, n);
    outputArray(arr, n);

    double sum = calculateSum(arr, n);
    printf("Сума елементів масиву: %.2lf\n", sum);

    return 0;
}
