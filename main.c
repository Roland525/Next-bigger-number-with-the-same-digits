#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int nextnumber(char* number) {
    int len = strlen(number);
    int i;
    for (i = len - 2; i >= 0; i--) {
        if (number[i] < number[i + 1]) {
            break;
        }
    }

    if (i == -1) {
        return 0;
    }

    int j;
    for (j = len - 1; j > i; j--) {
        if (number[j] > number[i]) {
            break;
        }
    }

    swap(&number[i], &number[j]);

    for (int start = i + 1, end = len - 1; start < end; start++, end--) {
        swap(&number[start], &number[end]);
    }

    return 1;
}

int main() {
    char number[100];
    printf("Enter the number: ");
    scanf("%s", number);

    if (nextnumber(number)) {
        printf("Next biggest number: %s\n", number);
    } else {
        printf("-1.\n");
    }

    return 0;
}