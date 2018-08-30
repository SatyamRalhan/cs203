#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max(int *a, long long int n){//returns index of maximum element
	int index=0;
	for(long long int i=0;i<n;i++){
		if(a[index]<a[i]) index=i;
	}
	return index;
}

int main()
{
	long long int n;
	int j,exp=0;
	scanf("%lld %d",&n,&j); 
	int * a=(int *)malloc(n*sizeof(int));//this contains the raandom numbers generated
	int * b=(int *)malloc(n*sizeof(int));//this maintains the number of times i is the maximum clients
	srand(time(0));
	for(int k=0;k<j;k++ ){
	
		for (int i = 0; i < n; ++i)
		{
			a[i]=0;
		}
		
		for(int i=0;i<n;i++){
			int p;
			p=rand()%n;
			a[p]++;
		}
		b[(a[max(a,n)]-1)]++;
	//for (int i = 0; i < n; ++i)
	//{
		//printf("%d ",a[i] );
	//}	
    }
    
    for (int i = 0; i < n; ++i)
    {
    	printf("%lld,%lf\n",i+1,b[i]/(float)j);
    }
    free(a);
    free(b);
	return 0;
}
