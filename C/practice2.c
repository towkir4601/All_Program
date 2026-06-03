#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int home[n], guest[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &home[i], &guest[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) {     
            if (i == j) continue;         
            if (home[i] == guest[j]) {
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}