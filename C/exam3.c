#include <stdio.h>
int prime(int n) {
    if(n<2)
    return 0;
    for (int i=2;i*i<=n;i++) {
        if(n%i==0) 
        return 0;
    }
    return 1;
}
int towkirSum(int n) {
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        if(n<2) {
            printf("INVALID\n");
        }
        else if(prime(n)) {
            int s=towkirSum(n);
            if (prime(s))
                printf("SUPER PRIME\n");
            else
                printf("PRIME\n");
        }
        else {
            if(n%2==0)
                printf("EVEN_COMPOSITE\n");
            else
                printf("ODD_COMPOSITE\n");
        }
    }
    return 0;
}