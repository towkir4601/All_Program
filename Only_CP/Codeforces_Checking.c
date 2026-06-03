#include <stdio.h>

int main() {
    char k;
    int p, i;
    scanf("%d", &p);
    for (i = 1; i <= p; i++) {
        scanf(" %c", &k); 
        if (k == 'c' || k == 'o' || k == 'd' || k == 'e' || k == 'f' || k == 'r' || k == 's') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}