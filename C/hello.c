#include<stdio.h>
int main(){
FILE*in,*out;
char ch;
in=fopen("input.txt","r");
out=fopen("output.txt","w");
if(in==NULL)
printf("File doesn't exist\n");
else{
    while((ch=fgetc(in))!=EOF){
        fputc(ch,out);
    }
    printf("Copied successfully\n");
}
fclose(in);
fclose(out);

    return 0;
}