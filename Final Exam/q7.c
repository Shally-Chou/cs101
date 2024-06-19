#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* clone_array(int* np, int n) {
    int* clone = (int*)calloc(n, sizeof(int));
    if (clone != NULL) {
        memcpy(clone, np, n * sizeof(int));
    }
    return clone;
}

void print_array(int* p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", p[i]);
        if (i != n - 1) {
            printf(",");
        }
    }
    printf("\n");
}

int main() {
    int n = 5;
    int np[5] = {0, 1, 2, 3, 4};
    int* p = clone_array(np, n);
    print_array(p, n);
    free(p);
    return 0;
}
