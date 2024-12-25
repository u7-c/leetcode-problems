#include<stdio.h>
int main()
{
    FILE *fptr;
    int ch;
    if((fptr=open("mytext.txt","w")==NULL))
    {
        printf("File does not exist");
    }
    else{
            printf ("Enter text Ctrl+z for Stop \n" ) ;
    while((ch=getchar())!=EOF)
    fputc (ch, fptr);
        }
       fclose(fptr);

    return 0;
}
