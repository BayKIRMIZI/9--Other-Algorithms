#include<conio.h>
#include<stdio.h>
int main()
{
	int j,i=0;
	char dizi[10000];
	
	printf("Kelime giriniz :");
	scanf("%s",&dizi[i]);

	while(dizi[i]!=0 && dizi[i+1]!=0)
	{
		i++;
	}
	for(j=0;j<=i;j++)
	{
		if(dizi[j]>='a' && dizi[j]<='z' || dizi[j]>='A' && dizi[j]<='Z')
		{
			if(dizi[j]=='a'){dizi[j]='w';}else if(dizi[j]=='A'){dizi[j]='W';}
			else if(dizi[j]=='b'){dizi[j]='m';}else if(dizi[j]=='B'){dizi[j]='M';}
			else if(dizi[j]=='c'){dizi[j]='s';}else if(dizi[j]=='C'){dizi[j]='S';}
			else if(dizi[j]=='d'){dizi[j]='h';}else if(dizi[j]=='D'){dizi[j]='H';}
			else if(dizi[j]=='e'){dizi[j]='y';}else if(dizi[j]=='E'){dizi[j]='Y';}
			else if(dizi[j]=='f'){dizi[j]='e';}else if(dizi[j]=='F'){dizi[j]='E';}
			else if(dizi[j]=='g'){dizi[j]='l';}else if(dizi[j]=='G'){dizi[j]='L';}
			else if(dizi[j]=='h'){dizi[j]='p';}else if(dizi[j]=='H'){dizi[j]='P';}
			else if(dizi[j]=='i'){dizi[j]='n';}else if(dizi[j]=='I'){dizi[j]='N';}
			else if(dizi[j]=='j'){dizi[j]='i';}else if(dizi[j]=='J'){dizi[j]='I';}
			else if(dizi[j]=='k'){dizi[j]='c';}else if(dizi[j]=='K'){dizi[j]='C';}
			else if(dizi[j]=='l'){dizi[j]='x';}else if(dizi[j]=='L'){dizi[j]='X';}
			else if(dizi[j]=='m'){dizi[j]='v';}else if(dizi[j]=='M'){dizi[j]='V';}
			else if(dizi[j]=='n'){dizi[j]='f';}else if(dizi[j]=='N'){dizi[j]='F';}
			else if(dizi[j]=='o'){dizi[j]='t';}else if(dizi[j]=='O'){dizi[j]='T';}
			else if(dizi[j]=='p'){dizi[j]='r';}else if(dizi[j]=='P'){dizi[j]='R';}
			else if(dizi[j]=='q'){dizi[j]='b';}else if(dizi[j]=='Q'){dizi[j]='B';}
			else if(dizi[j]=='r'){dizi[j]='o';}else if(dizi[j]=='R'){dizi[j]='O';}
			else if(dizi[j]=='s'){dizi[j]='k';}else if(dizi[j]=='S'){dizi[j]='K';}
			else if(dizi[j]=='t'){dizi[j]='d';}else if(dizi[j]=='T'){dizi[j]='D';}
			else if(dizi[j]=='u'){dizi[j]='z';}else if(dizi[j]=='U'){dizi[j]='Z';}
			else if(dizi[j]=='v'){dizi[j]='j';}else if(dizi[j]=='V'){dizi[j]='J';}
			else if(dizi[j]=='w'){dizi[j]='a';}else if(dizi[j]=='W'){dizi[j]='A';}
			else if(dizi[j]=='x'){dizi[j]='u';}else if(dizi[j]=='X'){dizi[j]='U';}
			else if(dizi[j]=='y'){dizi[j]='q';}else if(dizi[j]=='Y'){dizi[j]='Q';}
			else if(dizi[j]=='z'){dizi[j]='g';}else if(dizi[j]=='Z'){dizi[j]='G';}
			
			printf("%c",dizi[j]);
		}
		else
		{
			if(dizi[j]=='_'){printf(" ");}
			else if(dizi[j]=='.'){printf("%c",dizi[j]);}
			else if(dizi[j]==','){printf("%c",dizi[j]);}
			else if(dizi[j]=='?'){printf("%c",dizi[j]);}
			else if(dizi[j]=='/'){printf("%c",dizi[j]);}
			else if(dizi[j]=='-'){printf("%c",dizi[j]);}
		}
	}
	
	getch();
}
