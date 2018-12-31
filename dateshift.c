#include<stdio.h>


int nim (int syc){
	
int datenum = 0;
switch(syc){
	case 12 : datenum += 31;
	case 11 : datenum += 30;
	case 10 : datenum += 31;
	case 9  : datenum += 30;
	case 8  : datenum += 31;
	case 7  : datenum += 31;
	case 6  : datenum += 30;
	case 5  : datenum += 31;
	case 4  : datenum += 30;
	case 3  : datenum += 31;
	case 2  : datenum += 28;
	case 1  : datenum += 31;
	break ;
	}

	return datenum;
}

int calc (int y, int m, int d){
	int i ;
	long int date = 0;
	date += 365.25*y;
	date += nim(m-1);
	date += d;

	return date;
}

int main (void){

int y, m, d;

printf("今年の西暦を入力してください\n");
do{
	scanf("%d",&y);
	if(y>10000)
		printf("対象外の数字です、もう一度入力してください\n");
}while(y>10000);
printf("今月の月を入力してください\n");
do{
	scanf("%d",&m);
	if(m<1 || m>12)
		printf("対象外の数字です、正しい月を入力してください\n");
}while(m<1 || m>12);
printf("今日の日付を入力してください\n");
do{
	scanf("%d",&d);
	if(d<1 || d>31);
		printf("対象外の数字です、正しい日にちを入力してください\n");
}while(d<1 || d>31);
printf("今日はキリストが生まれて%d日です\n",calc(y,m,d));

return 0;

}
