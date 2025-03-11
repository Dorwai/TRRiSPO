void reverseWords(char *str) {
    int length = strlen(str);
    int i = 0, j = 0;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    i = 0;
    while (i < length) {
        while (i < length && str[i] == ' ') {
            i++;
        }
        j = i;
        while (j < length && str[j] != ' ') {
            j++;
        }
        int start = i;
        int end = j - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        i = j;
    }
}