#include<stdio.h>
#include<windows.h>
int main()
{
	int i,j,p,side_decider,flag1,flag2,flag3,flag4,flag5,flag6,flag7,flag8,flag9,flag10,flag11,flag12,flag13,flag14,flag15,flag16;
	int p1=0,p2=0,re_start;
	char a[3][3];
	char z='O', c='X';

	while(1)
	{
	char a[3][3]={{'-','-','-',},{'-','-','-',},{'-','-','-',}};	
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0,flag10=0,flag11=0,flag12=0,flag13=0,flag14=0,flag15=0,flag16=0;
	system("cls");
	printf("Games won by Player1(Blue): %d\n",p1);
	printf("Games won by player2(Red): %d\n",p2);
	
	for(side_decider=1;side_decider<=9;side_decider++)
	{
		if (side_decider%2!=0)
		{   
			system("color 03");
  			printf("\nEnter linear_index(Blue):");
			scanf("%d",&p);
			p=p-1;
			i= p/3;
			j=p%3;
			a[i][j] = z;
			p=p+1;
			printf("\n\n%c %c %c\n%c %c %c\n%c %c %c",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
			if(p==1||p==2||p==3)
			{
				flag1++;
			}
			if(p==1||p==4||p==7)
			{
				flag2++;
			}
			if(p==1||p==5||p==9)
			{
				flag3++;
			}
			if(p==3||p==6||p==9)
			{
				flag4++;
			}
			if(p==3||p==5||p==7)
			{
				flag5++;
			}
			if(p==7||p==8||p==9)
			{
				flag6++;
			}
			if(p==2||p==5||p==8)
			{
				flag13++;
			}
			if(p==4||p==5||p==6)
			{
				flag14++;
			}
			if(flag1==3||flag2==3||flag3==3||flag4==3||flag5==3||flag6==3||flag13==3||flag14==3)
			{
				printf("\nPlayer1 Won the Game!\n");
				p1++;
				break;
			}
		}
		else
		{
			system("color 04");
   			printf("\nEnter Linear_index(Red):");
			scanf("%d",&p);
			p=p-1;
			i= p/3;
			j=p%3;
			a[i][j] = c;
			p=p+1;
			printf("\n\n%c %c %c\n%c %c %c\n%c %c %c",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
			if(p==1||p==2||p==3)
			{
				flag7++;
			}
			if(p==1||p==4||p==7)
			{
				flag8++;
			}
			if(p==1||p==5||p==9)
			{
				flag9++;
			}
			if(p==3||p==6||p==9)
			{
				flag10++;
			}
			if(p==3||p==5||p==7)
			{
				flag11++;
			}
			if(p==7||p==8||p==9)
			{
				flag12++;
			}
			if(p==2||p==5||p==8)
			{
				flag15++;
			}
			if(p==4||p==5||p==6)
			{
				flag16++;
			}
			if(flag7==3||flag8==3||flag9==3||flag10==3||flag11==3||flag12==3||flag15==3||flag16==3)
			{
				printf("\nPlayer2 Won the Game!\n");
				p2++;
				break;
			}
		}
	}
	printf("Jit gaya te chupa hi lade!!");
	printf("\n\nPress 1 to start a new game OR 0 to end the game");
	scanf("%d",&re_start);
	if(re_start==0)
	{
	    break;
	}
	
}
	return 0;
}
