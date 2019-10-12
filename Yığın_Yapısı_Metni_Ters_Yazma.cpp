// bu baslang�� k�sm�nda gerekli k�t�phanelerin ve de�i�kenlerin tan�mlanmas� yap�lmaktad�r.
#include<stdio.h>
#include<string.h>
int top,maxlength;
// bu fonksiyon y���n�n dolu olup olmad���n� kontrol etmektedir.
bool FULL(void){
	if(top>=maxlength) return (true);
	else return(false);
}
// bu fonksiyon y���n�n bo� olup olmad���n� kontrol etmektedir.
bool EMPTY(void){
	if(top<=0) return(true);
	else return(false);
}
// bu fonksiyon y���ndan eleman ��kartma i�lemi yapmaktad�r,x de�i�kenine bu de�eri atamaktad�r.
void POP(char &x,char S[]){
	if(EMPTY()) printf("y�g�n bos\n");
	else{
		x=S[top];
		top=top-1;
	}
}
// bu fonksiyon x de�i�kenini y���na ekleme i�lemi yapmaktad�r.
void PUSH(char x,char S[]){
	if(FULL()) printf("y�g�n dolu\n");
	else{
		top=top+1;
		S[top]=x;
	}
}
// ana progmam
 main(){
	int i;
	char ch,Stack[50];
	char str[50];
	printf("YIGIN(STACK) yapisi ile girilen metnin tersten yazilmasi\n\n");
	printf("Metin giriniz(bosluk koymayin): ");
	scanf("%s",str);
	top=0;
	maxlength=sizeof(Stack);
	for(i=0;i<strlen(str);i++){
		PUSH(str[i],Stack);
	}
	printf("\Girilen metnin tersi: ");
	while(EMPTY()==false){
		POP(ch,Stack);
		printf("%c",ch);
	}
	scanf("%d",&i);
}
	

