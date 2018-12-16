#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Node
{
	int stt;
	char ten[30];
	struct Node* next;
	
}node;
typedef struct Node* list;

void makelist (list n)
{
	n=NULL;
}
void printNode (list n)
{
	while(n!=NULL)
	{
		printf("\n%d.",n->stt);
		printf("%s",n->ten);
		n= n->next;
	}
}
void xulixau(char *s)
{
	int n=0;
	n=strlen(s);
	if(97<=s[0]&&s[0]<=122)
	 s[0]-=32;
	for(int i=1;i<n;++i)
	{
		if(65<=s[i]&&s[i]<=90)
		 s[i]+=32;
		if(s[i-1]==' '&&97<=s[i]&&s[i]<=122)
	s[i]-=32;
	}
	}	

int main()
{
	int i=0;
	list a[100];
	
	printf("nhap vao lan luot ten cua hoc sinh va ket thuc bang dau #\n");
	do{
		makelist (a[i]);
		a[i]=(struct Node*)malloc(sizeof(node));
		gets(a[i]->ten);
		fflush(stdin);
		if((a[i]->ten[0])=='#'){
			a[i-1]=NULL;
			break;
		}else if(i!=0) a[i-1]->next=a[i];
		xulixau(a[i]->ten);
		a[i]->stt=i+1;
		++i;
	}while(1);
	printNode(a[0]);


}