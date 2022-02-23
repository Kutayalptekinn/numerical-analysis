#include<stdlib.h>
#include<stdio.h>
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
int a[max];
int i,d;
float h,alt,ust,n,S,j,v=0.0;
float b=0.0;
int c=1;


	printf("Kacinci dereceden bir fonksiyon?\n");
	scanf("%d",&d);
	for(i=d;0<=i;i--)
	{
		printf("%d.dereceden elemanin katsayisini giriniz:\n",i);
		scanf("%d",&a[i]);
    }
    printf("integralin sirasiyla alt ve ust degerlerini giriniz\n");
    scanf("%f",&alt);
    scanf("%f",&ust);
    printf("n degerini giriniz\n");
    scanf("%f",&n);
	h=(ust-alt)/n;
	j=h;
	while(alt+h!=ust)
	{
		if(c%2==0)
		{
			v=v+(degerdondur(alt+h,d,a));
	h=h+j;
	c++;
		}
		else{
			b=b+(degerdondur(alt+h,d,a));
	h=h+j;
	c++;
		}	
	}
	v=v*2;
	b=b*4;
	
	S=(j/3)*(degerdondur(alt,d,a)+degerdondur(ust,d,a)+b+v);
	printf("simpson yontemi ile hesaplanan integral %f",S);
}
