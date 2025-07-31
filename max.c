#include <stdio.h>
 
int main() {
 
    int x, max;
    int first = 1;  // Флаг: 1 = число ещё не введено, 0 = введено
 
    while (scanf("%d", &x)) {  // Читаем числа, пока успешно
        if (x == -1) {
            break;
        }

        // Проверям, что после числа идет пробел или перенос строки
        if (first) {
            max = x;
            first = 0;
        } else if (x > max) {
                   max = x;
        }
    }
 
    printf("%d", max);
    return 0;
}
