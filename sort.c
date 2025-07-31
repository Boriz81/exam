#include <stdio.h>
#define arr_SIZE 10

int read_array(int *a) {
    for (int i = 0; i < arr_SIZE; i++) {
        if (scanf("%d", &a[i]) != 1) {
            return 0;
        }
    }
    return 1;
}

void sort_array(int *a) {
    for (int i = 0; i < arr_SIZE - 1; i++) {
        for (int j = 0; j < arr_SIZE - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void print_array(const int *a) {
    for (int i = 0; i < arr_SIZE; i++) {
        printf("%d", a[i]);
        if (i < arr_SIZE - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr[arr_SIZE];

    if (!read_array(arr)) {
        printf("n/a\n");
        return 1;
    }
    sort_array(arr);
    print_array(arr);

    return 0;
}