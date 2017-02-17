#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i,j,number[4],answer;
	char symbol[4]={'+','-','*','/'},symbolnow[4];
	scanf("%d",&n);
	srand(time(NULL));
	for(i=1;i<=n;i++)
	{
		for(j=0;j<4;j++)
		{ 
			number[j]=rand()%11;
			symbolnow[j]=symbol[rand()%4];
		} 
		switch(rand()%5)
		{
			case 0:printf("%d%c%d%c%d%c%d=?\n",number[0],symbolnow[0],number[1],symbolnow[1],number[2],symbolnow[2],number[3],symbolnow[3]);break;
			case 1:printf("(%d%c%d)%c%d%c%d=?\n",number[0],symbolnow[0],number[1],symbolnow[1],number[2],symbolnow[2],number[3],symbolnow[3]);break;
			case 2:printf("%d%c(%d%c%d%)%c%d=?\n",number[0],symbolnow[0],number[1],symbolnow[1],number[2],symbolnow[2],number[3],symbolnow[3]);break;
			case 3:printf("%d%c%d%c(%d%c%d)=?\n",number[0],symbolnow[0],number[1],symbolnow[1],number[2],symbolnow[2],number[3],symbolnow[3]);break;	
			case 4:printf("(%d%c%d%c%d)%c%d=?\n",number[0],symbolnow[0],number[1],symbolnow[1],number[2],symbolnow[2],number[3],symbolnow[3]);break;
			case 5:printf("%d%c(%d%c%d%c%d)=?\n",number[0],symbolnow[0],number[1],symbolnow[1],number[2],symbolnow[2],number[3],symbolnow[3]);
		}
		scanf("%d",&answer);
		
	}
	return 0; 
 } 

