#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void xulixau (char *s)
{
    int n=0;
    n=strlen(s);
    if(97<=s[0]&&s[0]<=122)
    s[0]-=32;
    for(int i=1;i<n;++i)
    {
        if(65<=s[i]&&s[i]<=90)
         s[i]+=32;
    }
    }   

int main()
{
    char *ten[50],*key,temp[30];
    int sodem=0,i=0,j;
    printf("nhap vao ten cua hoc sinh cua hoc sinh:");
    while(1)
    {
    	ten[i]=(char *)malloc(30);
        gets(ten[i]);
        fflush(stdin);
        if((*ten[i])=='#') break;
        sodem++;
        xulixau(ten[i]);
        ++i;

    }
    key=(char *)malloc(30);

    for(int i=1;i<sodem;++i)
    {
    	strcpy(key,ten[i]);

        j=i-1;
        for(j;j>=0;--j){
            if(key[0]<(*ten[j])){
            	strcpy(temp,ten[j+1]);
                strcpy(ten[j],temp);

            }
     
                
            else{
                strcpy(ten[j+1],key);
                break;
            }
        }
    }    


  
    for(int j=0;j<sodem;++j)
    {
        printf("%d.%s\n",j+1,ten[j]);
    }

}