#include<stdio.h>
#include<conio.h>


void zaaxd(float boy,float index,float kilo)
{
	 index=(kilo*10000.0)/(boy*boy);
    if (index<=20.0)
    
    printf("%f zayifsin",index);
    
    else if (index>20.0 && index<=25.0)
    printf("%f fitsin maasallah",index);
    
    else if (index>25.0 && index<=30.0)
    printf("%f hafif sismansin",index);
    
    else if ( index>30.0 && index<=35.0)
    printf ("%f diyete baslasan iyi olur",index);
    
    else if(index>35.0)
    printf ("%f gecmis olsun obezsin",index);
    
	
}

int main()
{
    float kilo,boy,index;
    printf("kilonuzu giriniz (kg): ");
    scanf("%f",&kilo);
    
    printf("boyunuzu giriniz (cm): ");
    scanf("%f",&boy);
    
   zaaxd(boy,index,kilo);
   
    getch();
    
    
    
    
    
    
    
    
    
    
    
    
    }
