#include <stdio.h>
//ex 9

int verificarPalindromo(char str[], int n) {

    for (int i = 0; i < n; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[] = "reviver";

    if (verificarPalindromo(str, 7)) {
        printf("A string '%s' eh um palindromo.\n", str);
    }else {
        printf("A string '%s' nao eh um palindromo.\n", str);
    }

    return 0;
}
