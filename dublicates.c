#include <stdio.h>
#include <stdlib.h>

int* dynamic_array_until_eof(int *size) {
    int capacity = 10;
    *size = 0;
    int *array = malloc(capacity * sizeof(int));

    if (array == NULL) {
        return NULL;
    }

    int value;

    while (scanf("%d", &value) == 1) {
        if (*size >= capacity) {
            capacity *= 2;
            int *temp = realloc(array, capacity * sizeof(int));
            if (temp == NULL) {
                free(array);
                return NULL;
            }
            array = temp;
        }

        array[(*size)++] = value;
        
        // Проверяем следующий символ после числа
        int next_char = getchar();
        if (next_char == '\n' || next_char == EOF) {
            break; // Выходим из цикла при Enter или EOF
        } 
        // ungetc(next_char, stdin); // Возвращаем символ обратно в поток
    }

    return array;
}

void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] != -1) {
            printf("%d", array[i]);
            if (i < size - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");
}

void del_dublicates(int *array, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j] && array[i] != -1) {
                array[j] = -1;
            }
        }
    }
}

int main() {
    int size = 0;
    int *array = dynamic_array_until_eof(&size);
    
    if (array == NULL) {
        return 1;
    }
    
    del_dublicates(array, size);
    print_array(array, size);
    free(array);
    return 0;
}
