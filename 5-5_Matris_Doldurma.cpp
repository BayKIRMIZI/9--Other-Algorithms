#include <windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#pragma comment(lib, "winmm.lib")
#include<stdio.h>
#include<conio.h>
void gotoxy(short x, short y) // console ekranýnda dolaþmak için oluþturduðumuz koordinat fonksiyonu
{
HANDLE hConsoleOutput;
COORD Cursor_Pos={x-1,y-1};
hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,Cursor_Pos);
}
int main()
{
	int a,b,s;
	gotoxy(27,1); printf("Matris  Doldurunuz:\n\n");
	printf("Satir sayisi :"); scanf("%d",&a);
	printf("Sutun sayisi :"); scanf("%d",&b);
	int A[a][b]; printf("\n");
    for(int i=0;i<a;i++)
    {
		for(int j=0;j<b;j++)
        {
			printf("A[%d][%d]=",i,j);
		    scanf("%d",&A[i][j]);
        } printf("\n");  
    } printf("\n");
    for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("%d",A[i][j]); printf("\t");
		}   printf("\n\n\n");	
	}
	getch(); return 0;
}
