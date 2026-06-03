#include<stdio.h>
int main() {
    int n,p;
    scanf("%d",&n);
    for (int k=0;k<n;k++) {
        scanf("%d",&p);
        int t[p];
        int found=0;
        for(int j=0;j<p;j++){
            scanf("%d",&t[j]);
        }
        if(p==1){
            printf("YES\n");
        }else{
            for (int i=0;i<p;i++) {
            for (int j=i+1;j<p;j++){
            if (t[i]==t[j]){
                found=1;
                break;
                }
                }
                if (found){
                 break;
                }
            }
            if(found>=1){
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}