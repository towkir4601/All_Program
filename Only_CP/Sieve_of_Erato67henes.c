#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int found = 0;
        scanf("%d",&t);
        int s[t];
        for(int j=0;j<t;j++){
            scanf("%d",&s[j]);
        }

        for(int x=0;x<t;x++){
            for(int y=0;y<t;y++){
                if(s[x]*s[y] == 67){
                    found = 1;
                }
            }
        }

        if(found){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}
