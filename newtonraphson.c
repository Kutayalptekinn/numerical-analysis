#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
float turevdeger(float k,int f,int b[max])
{
	int i,n,m,p;
	float j;
	float toplam=0;
 n=f;
 j=k;
 for(m=0;m<n;m++)
 {
 	for(i=f-1;0<i;i--)
 	{
 		k=k*j;
	}
	k=k*b[f];
	toplam=toplam+k;
	f=f-1;
	k=j;
	if(f==0)
	{
		toplam=toplam+b[f];
	}	 
 }
return toplam;
}


int main(){
	
int a[max];
int b[max];
int i,d,f,p;
float u=2.0,dg,tr,hata;
float z,k,s,x,q=1,l,w,t,first,second;
int e=0,r=1;
int h=1;


	printf("Kacinci dereceden bir fonksiyon?\n");
	scanf("%d",&d);
	for(i=d;0<=i;i--)
	{
		printf("%d.dereceden elemanin katsayisini giriniz:\n",i);
		scanf("%d",&a[i]);		
	}
		printf("fonksiyonun turevi kacinci dereceden bir fonksiyon?\n");
		scanf("%d",&f);
		for(i=f;0<=i;i--)
	{
		printf("%d.dereceden elemanin katsayisini giriniz:\n",i);
		scanf("%d",&b[i]);		
	}
	
	printf("ilk x in degerini sinirlar verildiyse verilen sinirlarin alt sinir degerini, verilmediyse 0 olarak giriniz :\n");
	scanf("%f",&s);
	if(degerdondur(s,d,a)==0)
	{
		printf("aranilan kok degerimiz %f dir",s);
	}
	else
	{
	printf("hata miktarini giriniz :\n");
	scanf("%f",&hata);
	
	while(q>hata)
	{
	dg=degerdondur(s,d,a);
	tr=turevdeger(s,f,b);
	x=s-(dg/tr);	
	q=fabs(x-s);
	printf("x%d in degeri %f x%d in degeri %f hata:x%d-x%d=%f\n",e,s,r,x,r,e,q);
	e++;
	r++;
	s=x;
	}
	printf("aradigimiz kok=%f",s);	
	}
	
	
	return 0;}

