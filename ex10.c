#include <stdio.h>
//ex 10
int verificarSubsequencia(int A[], int n, int B[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (A[i] == B[j]) {
            j++; 
        }
        i++;  
    }

    return j == m;
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int B[] = {2, 4, 6};


    if (verificarSubsequencia(A, 7, B, 3)) {
        printf("O vetor B eh uma subsequencia de A.\n");
    } else {
        printf("O vetor B não eh uma subsequencia de A.\n");
    }

    return 0;
}
