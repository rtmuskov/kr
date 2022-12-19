#include <stdio.h>
#include <limits.h>
//1. квадрат из решеток
//2. удаление повторяющихся цифр из числа
//3. число которое делится на все числа
//4. сдвиг поразрядно
//5. прямоугольник
//6. прямоугольник с вертикальной линией
//7. прямоугольник с горизонтальной
int main() {
    int choice = 0;
    printf("Choose program\n>");
    scanf("%d", &choice);
    if (choice == 1) {
        int a;
        scanf("%d", &a);
        int d1 = 0;
        int d2 = a - 1;
        if (a) {
            for (int y = 0; y < a; y++) {
                for (int x = 0; x < a; x++) {
                    if ((y == 0) || (y == (a - 1))) {
                        printf("#");
                    } else {
                        if ((x == 0) || (x == (a - 1))) {
                            printf("#");
                        }
                        else if ((x == d1) || (x == d2)) {
                            printf("#");
                        }
                        else {
                            printf(" ");
                        }
                    }
                }
                printf("\n");
                d1++;
                d2--;
            }
        }
    }
    if (choice == 2){
        int input;
        int len = 0;
        int flag = 0;
        scanf("%d", &input);
        int copy = input;
        int k;
        while (copy > 0) {
            len++;
            copy /= 10;
        }
        int array[len];
        copy = input;
        for (int i = len - 1; copy > 0; i--) {
            array[i] = copy % 10;
            copy /= 10;
        }
        for (int i = 0; i < len - 1; i++) {
            for (int j  = i + 1; j < len; j++) {
                if (array[i] == array[j]) {
                    k = j + 1;
                    if (k < len)
                        for (int m = j; m < len -1; m++) {
                            array[m] = array[k];
                            k++;
                        }
                    flag = 1;
                    len--;
                }
            }
            if(flag) {
                i--;
                flag = 0;
            }
        }
        int result = 0;
        for(int i = 0; i < len; i++) {
            result += array[i];
            result *= 10;
        }
        result /= 10;
        printf("result: %d", result);
    }
    if (choice == 3) {
        int input = 1;
        int i = 10;
        while (i <= 10) {
            if (input % i == 0)
                i++;
            else {
                input++;
                i = 1;
            }
        }
        printf("%d", input);
    }
    if (choice == 4){
        int input;
        int n;
        int len = 0;
        int flag = 0;
        scanf("%d", &input);
        scanf("%d", &n);
        int copy = input;
        int k;
        while (copy > 0) {
            len++;
            copy /= 10;
        }
        int array[len];
        copy = input;
        for (int i = len - 1; copy > 0; i--) {
            array[i] = copy % 10;
            copy /= 10;
        }
        int result = 0;
        for(int i = 0; i < len; i++) {
            result += array[i] + n;
            result *= 10;
        }
        result /= 10;
        printf("result: %d", result);
    }
    if (choice == 5) {
        int a;
        int b;
        scanf("%d", &a);
        scanf("%d", &b);
        int i,j;
        for (i=0; i<a; i++) {
            for (j = 0; j < b; j++) {
                if (i == 0 || i == (a - 1)) {
                    printf("# ");
                } else {
                    if (j == 0 || j == (b - 1)) {
                        printf("# ");
                    } else {
                        printf("  ");
                    }
                }

            }
            printf("\n");
        }

        }
    if (choice == 6) {
        int a;
        int b;
        scanf("%d", &a);
        scanf("%d", &b);
        int i,j,g;
        int d1=a/2;
        for (i=0; i<a; i++) {
            for (j = 0; j < b; j++) {
                    if (i == 0 || i == (a - 1)) {
                        printf("# ");
                    } else {
                        if (j == 0 || j == (b - 1)) {
                            printf("# ");
                        }
                        else if ((j == d1) ) {
                            printf("# ");
                        }
                        else {
                            printf("  ");
                        }


                    }

                }
                printf("\n");
            }
        }
    if (choice == 7) {
        int a;
        int b;
        scanf("%d", &a);
        scanf("%d", &b);
        int i,j,g;
        int d1=a/2;
        for (i=0; i<a; i++) {
            for (j = 0; j < b; j++) {
                if (i == 0 || i == (a - 1)) {
                    printf("# ");
                } else {
                    if (j == 0 || j == (b - 1)) {
                        printf("# ");
                    }
                    else if ((i == d1) ) {
                        printf("# ");
                    }
                    else {
                        printf("  ");
                    }


                }

            }
            printf("\n");
        }
    }



    return 0;
}