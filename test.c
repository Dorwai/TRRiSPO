#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "pr1.h"

void test_swap_words() {
    char str[] = "Проверка работы программы.";
    reverseWords(str);
    assert(strcmp(str, "программы. работы Проверка") == 0);
    printf("Test 1 passed.\n");

    char str1[] = "123123 3456443 54364 89876543";
    reverseWords(str1);
    assert(strcmp(str1, "89876543 54364 3456443 123123") == 0);
    printf("Test 2 passed.\n");

    char str2[] = "Работа...";
    reverseWords(str2);
    assert(strcmp(str2, "Работа...") == 0);
    printf("Test 3 passed.\n");

    char str3[] = "実験室の仕事";
    reverseWords(str3);
    assert(strcmp(str3, "実験室の仕事") == 0);
    printf("Test 4 passed.\n");

    char str4[] = " ";
    reverseWords(str4);
    assert(strcmp(str4, " ") == 0);
    printf("Test 5 passed.\n");

    printf("All tests passed!\n");
}

int main() {
    test_swap_words();
    return 0;
}