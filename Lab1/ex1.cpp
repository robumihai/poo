#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int x=0;
    FILE *f;
    f=fopen("in.txt","r");
    if(f==NULL)
        printf("Eroare la deschiderea fisierului\n");
    else {
            printf("Am deschis fisierul\n");
            char s[200];
            while(fgets(s,200,f))
            {
                int n1=0;
                s[strlen(s)-1]=NULL;
                for(int i=0;i<strlen(s);i++)
                    if(s[i]>='0'&&s[i]<='9')
                        n1=n1*10+(s[i]-'0');
                x+=n1;
            }
    }
    printf("%d \n",x);
    return 0;
}
