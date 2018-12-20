#include<stdio.h>

void insertionSort(int *day, int n)
{
	int key,j;

	for(int i=1;i<n;++i)
	{
		key=day[i];
		j=i-1;
		for(j;j>=0;--j){
			if(key<day[j])
				day[j+1]=day[j];
			else{
				day[j+1]=key;
				break;
			}

		}

	}


} 


int main()
{
	int a[100],n;
	printf("so phan tu cua day so la:\n");
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		printf("nhap vao so thu %d\n",i+1);
		scanf("%d",&a[i]);
			}
	insertionSort(a,n);

	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}

}
    


