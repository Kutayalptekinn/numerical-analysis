#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 50

float degerdondur(float k,int d,int a[max])
{
	int i,n,m,p;
	float j;
	float toplam=0;
 n=d;
 j=k;
 for(m=0;m<n;m++)
 {
 	for(i=d-1;0<i;i--)
 	{
 		k=k*j;
	}
	k=k*a[d];
	toplam=toplam+k;
	d=d-1;
	k=j;
	if(d==0)
	{
		toplam=toplam+a[d];
	}	 
 }
return toplam;
}


int main() {
		
	int a[max];
int i,d,p;
float u=2.0,x,y;
float z,k,l,first,second,hata;
int h=1;


	printf("Kacinci dereceden bir fonksiyon?\n");
	scanf("%d",&d);
	for(i=d;0<=i;i--)
	{
		printf("%d.dereceden elemanin katsayisini giriniz:\n",i);
		scanf("%d",&a[i]);		
	}
			printf("fonksiyonun araliginin ilk degerini giriniz;\n");
            scanf("%f",&k);
            first=degerdondur(k,d,a);
            printf("fonksiyonun araliginin ikinci degerini giriniz:\n");
            scanf("%f",&l);
            second=degerdondur(l,d,a);
            
            if(first==0 && second!=0)
            {
            	printf("kokumuz verilen sinir degerlerden birincisidir (%f)",k);
			}
            else if(first!=0 && second==0)
            {
            		printf("kokumuz verilen sinir degerlerden ikincisidir (%f)",l);
			}
			else if(first==0 && second==0)
			{
				printf("kokumuz verilen sinir degerleridir (%f,%f)",k,l);
			}
			else
			{
            printf("hata miktarini giriniz :\n");
	        scanf("%f",&hata);
            
            while(first*second<0 && fabs(k-l)/u>hata)
            {
            	x=((k*second)-(l*first))/(second-first);
            	if(degerdondur(x,d,a)>0) l=x;
	            else k=x;
            	first=degerdondur(k,d,a);
            	second=degerdondur(l,d,a);
            	u=u*2;
            	printf("%d. iterasyon x=%f\n",h,x);
            	h++;
			}
			printf("aradigimiz kok=%f ",x);
		}
	return 0;}
