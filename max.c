#include <stdio.h>

int main() {
    int x, max;
    int first_number = 1;  // Флаг: 1 = число ещё не введено, 0 = введено
    
    while (scanf("%d", &x) == 1) {  // Читаем числа, пока успешно
        if (x == -1) {
            break;
        }
        
        // Если это первое число, инициализируем max
        if (first_number) {
            max = x;
            first_number = 0;
        } 
        // Иначе сравниваем с текущим максимумом
        else if (x > max) {
            max = x;
        }
    }
    
    // Если чисел не было (или только -1), завершаем с ошибкой
    if (first_number) {
        return 1;
    }
    
    printf("%d", max);
    return 0;
}
