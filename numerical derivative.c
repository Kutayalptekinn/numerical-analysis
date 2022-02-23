#include <stdio.h>
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



int main()
{ 
float m,k,h;
int d,a[max],t,i;
	printf("Kacinci dereceden bir fonksiyon?\n");
	scanf("%d",&d);
	for(i=d;0<=i;i--)
	{
		printf("%d.dereceden elemanin katsayisini giriniz:\n",i);
		scanf("%d",&a[i]);		
	}
		printf("hangi noktada turev istendigini giriniz:\n");
		scanf("%f",&k);
		printf("h degerini giriniz:\n");
		scanf("%f",&h);
		printf("ileri fark icin 1i geri fark icin 2yi merkezi fark icin 3u tuslayiniz:\n");
		scanf("%d",&t);
		if(t==1)
		{
			m=(degerdondur(k+h,d,a)-degerdondur(k,d,a))/h;
			printf("ileri fark ile yapilan cozum=%f",m);
		}
		else if(t==2)
		{
			m=(degerdondur(k,d,a)-degerdondur(k-h,d,a))/h;
			printf("geri fark ile yapilan cozum=%f",m);
		}
		else if(t==3)
		{
			
				m=(degerdondur(k+h,d,a)-degerdondur(k-h,d,a))/(h*2);
				printf("merkezi fark ile yapilan cozum=%f",m);
		}
	
	
	
	
}
