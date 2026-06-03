#include <stdio.h>
int main() {
    int n;
    char t[4];
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%s",t);
        if (t[0]=='a'||t[1]=='b'||t[2]=='c') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}