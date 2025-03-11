#include <stdio.h>
#include <string.h>
#include "pr1.h"

int main() {
    char input[256];
    printf("Введите строку: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    reverseWords(input);

    printf("Строка с обратным порядком слов: %s\n", input);

    return 0;
}