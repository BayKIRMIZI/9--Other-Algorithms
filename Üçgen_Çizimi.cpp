#include<stdio.h>
#include<conio.h>

int main() {

    int i,j,a;
    printf("boyutu giriniz :");
    scanf("%d",&a);
    
    for(i=0;i<a;i++) 
	{
    for(int k=0;k<a-1-i;k++)
    printf(" ");
    for(j=0;j<2*i+1;j++) 
	{
    printf("*");
	}
    printf("\n");
	}/*
for(i=1;i>=0;i--) 
{ // algoritmanýn tersten iþleme mantýgý burada baslamaktadýr
for(int k=1-i;k>=0;k--)
printf(" ");
for(j=2*i;j>=0;j--)
printf("*");
printf("\n");
}
return 0;
*/
getch();
}
