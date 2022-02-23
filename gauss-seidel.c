#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int c=0,p=1,l=1;
	float b[10];
	float a[10][10];
	float x[10];
	float y[10];
	float z,x1,y1,z1,sum,hata;
	int i,j,h,k,n;
	printf("kac denklem var:");
	scanf("%d",&n);
	printf("matrisi capraz carpim max olacak sekilde yerlestiriniz\n");
	printf("bilinmeyenlerin baslangic degerlerini giriniz:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
for(i=0;i<n;i++)
	{
		printf("%d. denklemin bilinmeyenleri icin katsayilarini giriniz:",i+1);
				for(j=0;j<n;j++)
	    	{		
			scanf("%f",&a[i][j]);
	        }
			if(j==n)
			    {
				printf("%d. denklemin sonucunu giriniz:",i+1);
				scanf("%f",&a[i][n]);
			    }	
   }
   printf("hata miktarini giriniz :\n");
	scanf("%f",&hata);

	do{
		
		for(i=0;i<n;i++)
{
	sum=0;
	
	for(j=0;j<n;j++)
	{
	     if(i!=j)
	    {
	    	sum=sum+(a[i][j]*x[j]);
		}	
	}
	y[i]=x[i];
	x[i]=(1/a[i][i])*(a[i][n]-sum);	
	
	
}
printf("%d. iterasyon x[%d]=%f,x[%d]=%f,x[%d]=%f\n",l,p-1,x[p-1],p,x[p],p+1,x[p+1]);
	l++;
	}while	(fabs(y[i-1]-x[i-1])>hata);	
	
   	
	
   
   
   
for(i=0;i<n;i++)
   {
   	printf("kokler sirasiyla: %f\n",x[i]);
   }




	
	return 0;}
