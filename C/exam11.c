#include<stdio.h>
int main(){
FILE*fdata,*fodd,*feven;
int num;
fdata=fopen("data.txt","r");
fodd=fopen("odd.txt","w");
feven=fopen("even.txt","w");
if(fdata==NULL)
printf("File Doesn't Find!!!");
else{
    while(fscanf(fdata,"%d",&num)!=EOF){
        if(num%2==0){
            fprintf(feven,"%d\n",num);
        }else{
            fprintf(fodd,"%d\n",num);

        }

    }
    printf("Copied Successfully\n");                        
}
fclose(fdata);
fclose(fodd);
fclose(feven);


    return 0;
}