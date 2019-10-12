// bu baslangýç kýsmýnda gerekli kütüphanelerin ve deðiþkenlerin tanýmlanmasý yapýlmaktadýr.
#include<stdio.h>
#include<string.h>
int top,maxlength;
// bu fonksiyon yýðýnýn dolu olup olmadýðýný kontrol etmektedir.
bool FULL(void){
	if(top>=maxlength) return (true);
	else return(false);
}
// bu fonksiyon yýðýnýn boþ olup olmadýðýný kontrol etmektedir.
bool EMPTY(void){
	if(top<=0) return(true);
	else return(false);
}
// bu fonksiyon yýðýndan eleman çýkartma iþlemi yapmaktadýr,x deðiþkenine bu deðeri atamaktadýr.
void POP(char &x,char S[]){
	if(EMPTY()) printf("yýgýn bos\n");
	else{
		x=S[top];
		top=top-1;
	}
}
// bu fonksiyon x deðiþkenini yýðýna ekleme iþlemi yapmaktadýr.
void PUSH(char x,char S[]){
	if(FULL()) printf("yýgýn dolu\n");
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
	

