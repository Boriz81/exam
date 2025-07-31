#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int n = 0, capacity = 0;
    int num;
    char next_char;

    while (1) {
        // Пытаемся считать число
        int read_result = scanf("%d", &num);

        // Если ввод не является числом (например, символ)
        if (read_result != 1) {
            printf("n/a");
            free(arr);
            return 1;
        }

        // Проверяем следующий символ после числа
        next_char = getchar();
        if (next_char != ' ' && next_char != '\n' && next_char != EOF) {
            printf("n/a");
            free(arr);
            return 1;
        }

        // Если ввели -1, завершаем ввод
        if (num == -1) break;

        // Если число отрицательное (но не -1)
        if (num < 0) {
            printf("n/a");
            free(arr);
            return 1;
        }

        // Расширяем массив при необходимости
        if (n >= capacity) {
            capacity = (capacity == 0) ? 4 : capacity * 2;
            int *temp = realloc(arr, capacity * sizeof(int));
            if (!temp) {
                free(arr);
                printf("n/a");
                return 1;
            }
            arr = temp;
        }

        arr[n++] = num;

        // Если следующий символ — конец строки, завершаем ввод
        if (next_char == '\n' || next_char == EOF) break;
    }

    // Если массив пуст, завершаем программу
    if (n == 0) {
        free(arr);
        return 0;
    }

    // Находим индексы минимального и максимального элементов
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) min_idx = i;
        if (arr[i] > arr[max_idx]) max_idx = i;
    }

    // Меняем их местами
    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;

    // Выводим результат
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }

    free(arr);
    return 0;
}
