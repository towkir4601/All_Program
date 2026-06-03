#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        char t[7];
        scanf("%s",t);
        int s=(t[0])+(t[1])+(t[2]);
        int k=(t[3])+(t[4])+(t[5]);
        if(s==k){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}