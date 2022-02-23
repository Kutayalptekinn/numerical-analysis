#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a[50][50];
	float b[50][50]={0};
	float p,m;
	int i,j,n,k;
	printf("matrisin satir ve sutun sayisini giriniz");
	scanf("%d",&n);
	printf("tersi alinacak matrisi giriniz\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
		        	scanf("%3f",&a[i][j]);
					}
					printf("\n");
				}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(i==j)
					{
						b[i][j]=1;
					}	
				}
				
			}
				
	for(i=0;i<n;i++)
{
		p=a[i][i];
		for(j=0;j<n;j++)
		{
			a[i][j]=a[i][j]/p;
			b[i][j]=b[i][j]/p;
		}
			
		
		for(j=0;j<n;j++)
		
		if(i!=j)
		{
			m=a[j][i];
			for(k=0;k<n;k++)
			{
				a[j][k]=a[j][k]-m*a[i][k];
				b[j][k]=b[j][k]-m*b[i][k];
			}
			
			
		}
		
	
}
printf("matrisin inversi\n");
for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
		        	printf("%f\t",b[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				
				
				printf("matrisin kendisi\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
		        	printf("%f\t",a[i][j]);
					}
					printf("\n");
				}
    
	    			
	    	
		    
			
	
	
	
	
	return 0;
}
