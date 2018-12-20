#include<stdio.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  

void saxepSe (int *day,int n){
	int min_idx;
	for (int i = 0; i < n-1; i++) 
    { 
        // tim phan tu nho nhat
        min_idx = i; 
        for (int j = i+1; j < n; j++) 
          if (day[j] < day[min_idx]) 
            min_idx = j; 
  
        swap(&day[min_idx], &day[i]); 
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
	saxepSe(a,n);

	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}

}
    
