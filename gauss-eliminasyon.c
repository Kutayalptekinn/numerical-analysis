#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int c;
	float b[10];
	float t[50];
	float a[10][10];
	float x[50];
	float p;
	int i,j,h,k,n,m;
	printf("kac denklem var:");
	scanf("%d",&n);
	printf("kac bilinmeyen var:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		printf("%d. denklemin bilinmeyenleri icin katsayilarini giriniz:",i+1);
				for(j=0;j<m;j++)
	    	{		
			scanf("%f",&a[i][j]);
			
			if(j+1==m)
			    {
				printf("%d. denklemin sonucunu giriniz:",i+1);
				scanf("%f",&a[i][m]);
			    }
	        }	
   }
	
	
	for(i=0;i<n;i++)
	{
		p=a[i][i];
		for(j=0;j<m+1;j++)
		{
			a[i][j]=a[i][j]/p;
		}
		
		for(k=i+1;k<n;k++)
		{
			p=a[k][i];
			for(j=0;j<m+1;j++)
			{
				a[k][j]=a[k][j]/p;
				a[k][j]=a[k][j]-a[i][j];
				a[k][j]=a[k][j]*p;
			}
		}
	}	
	for(i=0;i<n;i++)
	{
		x[i]=a[i][n];
	}
	
	
	
	
	for(i=n-1;i>=0;i--)
	{
		for(j=m-1;j>i;j--)
		{
			x[i]=x[i]-a[i][j]*x[j];
		}
	}
	
	
	printf("bilinmeyenler sirasiyla\n");
	for(i=0;i<m;i++)
	{
		
		printf("%f\n",x[i]);
	}
	
	                                                                                                                    
	
	
	                       
	
	
	return 0;}
