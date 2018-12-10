#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
	clrscr();
	char indx,mat[3][3],f,c,l,t,b,a,d,e,f1,g,player1[10],player2[10];
	int recheck[9],i,j,k,n,m,o=0,x=0,indn=1,s,rc1=0,rc2=0,rc3=0,rc4=0,rc5=0,rc6=0,rc7=0,rc8=0,rc9=0;
	char maininput,playinput;
	randomize();
	c=186;
	a=206;
	b=205;
	d=201;
	e=187;
	f=200;
	g=188;
	s=0;
	l=205;
	t=2;
	f1=14;
	for(k=0;k<40;k++)
	{       textcolor(6);
		cprintf("%c",f1);textcolor(YELLOW+BLINK);
		cprintf("%c",f1);
	}
	printf("\n");

	textcolor(YELLOW+BLINK);
	printf("\t\t\t");cprintf("%c%c%c %c%c%c %c%c%c ",t,t,t,t,t,t,t,t,t);printf("\n");
	printf("\t\t\t");cprintf(" %c   %c  %c ",t,t,t);           printf("\n");
	printf("\t\t\t");cprintf(" %c  %c%c%c %c%c%c ",t,t,t,t,t,t,t);     printf("\n\n");
	printf("\t\t\t\t");cprintf("%c%c%c %c%c%c %c%c%c",t,t,t,t,t,t,t,t,t);printf("\n");
	printf("\t\t\t\t");cprintf(" %c  %c%c%c %c ",t,t,l,t,t);         printf("\n");
	printf("\t\t\t\t");cprintf(" %c  %c %c %c%c%c ",t,t,t,t,t,t);  printf("\n\n");
	printf("\t\t\t\t\t");cprintf("%c%c%c %c%c%c %c%c%c",t,t,t,t,t,t,t,t,t);printf("\n");
	printf("\t\t\t\t\t");cprintf(" %c  %c %c %c%c%c   ",t,t,t,t,l,l);   printf("\n");
	printf("\t\t\t\t\t");cprintf(" %c  %c%c%c %c%c%c   ",t,t,t,t,t,t,t); printf("\n");
	textcolor(15);
	printf("\n\n");
	textcolor(3);cprintf("DEVELOPED BY :-");
	printf("\n");textcolor(YELLOW+BLINK);cprintf("----------------------");printf("\n");textcolor(GREEN);cprintf("AANJANEYA SINGH DHONI");printf(" \n         & \n");cprintf("    CHETAN MALI");printf("\n");textcolor(YELLOW+BLINK);cprintf("----------------------");printf("\n")   ;
	textcolor(15);
	cprintf("");
		for(k=0;k<40;k++)
	{       textcolor(6);
		cprintf("%c",f1);textcolor(YELLOW+BLINK);
		cprintf("%c",f1);
	}
	printf("                         ");
	system("pause");
	//*****************************************************
	returntomain:
		for( i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
		{
		mat[i][j]=s;
		}
	}
	rc1=0;
	rc2=0;
	rc3=0;
	rc4=0;
	rc5=0;
	rc6=0;
	rc7=0;
	rc8=0;
	rc9=0;
	indn=1;
	//******************************************************
		clrscr();
	for(i=0;i<=37;i++)
		{
		textcolor(RED);cprintf("%c",t);textcolor(15);cprintf("%c",t);
		}
	for( i=0;i<=7;i++)cout<<"\n";
	textcolor(15);cprintf("                                1.");textcolor(RED);cprintf("Start Game\n");textcolor(15);
	cout<<"\n";
       //	textcolor(15);cprintf("                                2.");textcolor(GREEN);cprintf("High score\n");textcolor(15) ;
       //	cout<<"\n";
	textcolor(15);cprintf("                                2.");textcolor(RED);cprintf("Game Rules\n");textcolor(15)  ;
	cout<<"\n";
	textcolor(15);cprintf("                                3.");textcolor(RED);cprintf("Exit\n\n\n\n\n\n\n");textcolor(15) ;
	cout<<"\n";
	for(i=0;i<=37;i++)
		{
		textcolor(RED);cprintf("%c",t);textcolor(15);cprintf("%c",t);
		}
	cout<<"\nEnter your option :";
	//system("pause");
	reenter2:
	maininput=getch();
		switch(maininput)
		{
		case '1':
			//*****************************************************
			//++++++++++++++++++++++++++++++++++++++++++++++++++++++
				/*clrscr();
			textcolor(WHITE);
			printf("Do U Want 2 Play With :\n1.Singler Player\n2.Double Player\n\n\n\n\n");
			system("pause"); */
			clrscr();
			for(i=0;i<=37;i++)
			{
				textcolor(GREEN);cprintf("^");textcolor(15);cprintf("^");
			}
			for( i=0;i<=7;i++)cout<<"\n";
			textcolor(15);cprintf("                                1.");textcolor(GREEN);cprintf("Single Player\n");textcolor(15)  ;
			cout<<"\n";
			textcolor(15);cprintf("                                2.");textcolor(GREEN);cprintf("Multi Player\n");textcolor(15)  ;
			cout<<"\n";
			textcolor(15);cprintf("                                3.");textcolor(GREEN);cprintf(" <- Back\n\n\n\n\n\n\n");textcolor(15) ;
			cout<<"\n";
			for(i=0;i<=37;i++)
			{
				textcolor(GREEN);cprintf("^");textcolor(15);cprintf("^");
			}
			cout<<"\nEnter your option :";
		       //	system("pause");
		       reenter1:
			playinput=getch();
			switch(playinput)
				{
				case '3':goto returntomain;
					 break;
				case '2':
						clrscr();
						textcolor(WHITE);
						printf("\n\n\n\n\n\n");
						printf("Enter Name :\n");
						printf("Player 1:");
						gets(player1);
						printf("Player 2:");
						gets(player2);
					//+++++++++++++++++++++++++++++++++++++++++++
					re:
					strLoopAgain:
					//+++++++++++++++++++++++++++++++++++++++++++
					clrscr();
					printf("\n\n\n");
					textcolor(6);
					cprintf("             %c",d);
					for(i=0;i<50;i++)
					{
						textcolor(BLUE);cprintf("%c",b);
					}
					textcolor(6);cprintf("%c",e);printf("\n");
					for(j=0;j<3;j++)
					{
						textcolor(BLUE);cprintf("             %c",c);
						for(i=0;i<50;i++)
						printf(" ",c);
						textcolor(BLUE);cprintf("%c",c);printf("\n");
					}
					// maincode to print matrix+++++++++++++++++++
					for(i=0;i<3;i++)
					{
						for( j=0;j<3;j++)
						{
							if(j==0)
							{
							textcolor(BLUE);cprintf("             %c                    ",c);
							}
							else
							printf(" ");
							putchar(mat[i][j]);
							if(j!=2)
							printf(" %c",c);
							else
							cprintf("                     %c",c);
						}
					if(i!=2)
					printf("\n             %c                   %c%c%c%c%c%c%c%c%c%c%c                    %c\n",c,b,b,b,a,b,b,b,a,b,b,b,c) ;

					}
					//mainprintcodeend++++++++++++++++++++++++++++++++
					printf("\n");
					for(j=0;j<3;j++)
					{
						textcolor(BLUE);cprintf("             %c",c);
						for(i=0;i<50;i++)
						printf(" ",c);
						textcolor(BLUE);cprintf("%c",c);printf("\n");
					}
					textcolor(6);cprintf("             %c",f);
					for(i=0;i<50;i++)
					{
						textcolor(BLUE);cprintf("%c",b);
					}
					textcolor(6);cprintf("%c\n",g);
					textcolor(WHITE) ;
					//++++++++++++++++++++++++++++++++++++++++
					printf("\n");
					if(indn%2!=0)
					printf("                    --> %s your chance.",player1);
					else
					printf("                    --> %s your chance.",player2);
					indx=getche();
					if(indx=='0')
					{goto returntomain;}
					      //scanf("%d",&indx);
					//+++++++++++++++++++++++++++++++++++++++++
					if(indx=='1' && rc1==0)
					{
						i=0;
						j=0;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc1++;
					}
					else if(indx=='2' && rc2==0)
					{
						i=0;
						j=1;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc2++;
					}
					else if(indx=='3' && rc3==0)
					{
						i=0;
						j=2;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc3++;
					}
					else if(indx=='4' && rc4==0)
					{
						i=1;
						j=0;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc4++;
					}
					else if(indx=='5' && rc5==0)
					{
						i=1;
						j=1;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc5++;
					}
					else if(indx=='6' && rc6==0)
					{
						i=1;
						j=2;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc6++;
					}
					else if(indx=='7' && rc7==0)
					{
						i=2;
						j=0;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc7++;
					}
					else if(indx=='8' && rc8==0)
					{
						i=2;
						j=1;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc8++;
					}
					else if(indx=='9' && rc9==0)
					{
						i=2;
						j=2;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc9++;
					}
					else
					{
						goto strLoopAgain;
					}

					// condition checking ++++++++++++++++++++++++
					if(indn>4)
					{
					//for diagnol 1 ------
						if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O')
						{
							o++;
							goto end;
						}
					//for diagnol 2 ------
						else if(mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[2][0]=='O' && mat[1][1]=='O' && mat[0][2]=='O')
						{
							o++;
							goto end;
						}
					//hline 1 ------
						else if(mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O')
						{
							o++;
							goto end;
						}
					//for hline 2 ------
						else if(mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]=='O')
						{
							o++;
							goto end;
						}
					//for hline 3 ------
						else if(mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]=='O')
						{
							o++  ;
							goto end;
						}
					//for vline 1 ------
						else if(mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2]=='O')
						{
							o++;
							goto end;

						}
					//for vline 2 ------
						else if(mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]=='O')
						{
							o++;
							goto end;
						}
					//for vline 3 ------
						else if(mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O')
						{
							o++;
							goto end;
						}

					}
					//++++++++++++++++++++++++++++++++++++++++++++++

					indn++;
					if(indn<10)
					goto re;
					end:
					clrscr();
					textcolor(6);cprintf("             %c",d);
				for(i=0;i<50;i++)
				{
					textcolor(BLUE);cprintf("%c",b);
				}
				textcolor(6);cprintf("%c",e);printf("\n");
				for(j=0;j<3;j++)
				{
					textcolor(BLUE);cprintf("             %c",c);
					for(i=0;i<50;i++)
					printf(" ",c);
					textcolor(BLUE);cprintf("%c",c);printf("\n");
				}
				// maincode to print matrix+++++++++++++++++++
				for(i=0;i<3;i++)
				{
					for( j=0;j<3;j++)
						{
							if(j==0)
							{
							textcolor(BLUE);cprintf("             %c                    ",c);
							}
							else
							printf(" ");
							putchar(mat[i][j]);
							if(j!=2)
							printf(" %c",c);
							else
							cprintf("                     %c",c);
						}
						if(i!=2)
						printf("\n             %c                   %c%c%c%c%c%c%c%c%c%c%c                    %c\n",c,b,b,b,a,b,b,b,a,b,b,b,c) ;

				}
				//mainprintcodeend++++++++++++++++++++++++++++++++
				printf("\n");
				for(j=0;j<3;j++)
				{
					textcolor(BLUE);cprintf("             %c",c);
					for(i=0;i<50;i++)
					printf(" ",c);
					textcolor(BLUE);cprintf("%c",c);printf("\n");
				}
				textcolor(6);cprintf("             %c",f);
				for(i=0;i<50;i++)
				{
					textcolor(BLUE);cprintf("%c",b);
				}
				textcolor(6);cprintf("%c\n",g);
				textcolor(WHITE) ;
				if(x==1 )
				printf("\n\t\t\t\t %s WIN!!!",player1);
				else if(o==1)
				printf("\n\t\t\t\t %s WIN!!!",player2);
				else
				printf("\n\t\t\t\t DRAW MATCH");
				printf("\n\n\n\n\t\t\t\t");
				x=0;
				o=0;
				system("pause");
				goto returntomain;
				break;
		case '1':
			//*****************************
					     clrscr();
						textcolor(WHITE);
						printf("\n\n\n\n\n\n");
						printf("Enter Your Name :\n");
					       //	printf("Player 1:");
						gets(player1);
						fflush(stdin);
					      //	gets(player2);
					//+++++++++++++++++++++++++++++++++++++++++++
					sgre:
					sgstrLoopAgain:
					//+++++++++++++++++++++++++++++++++++++++++++
					clrscr();
					printf("\n\n\n");
					textcolor(6);
					cprintf("             %c",d);
					for(i=0;i<50;i++)
					{
						textcolor(BLUE);cprintf("%c",b);
					}
					textcolor(6);cprintf("%c",e);printf("\n");
					for(j=0;j<3;j++)
					{
						textcolor(BLUE);cprintf("             %c",c);
						for(i=0;i<50;i++)
						printf(" ",c);
						textcolor(BLUE);cprintf("%c",c);printf("\n");
					}
					// maincode to print matrix+++++++++++++++++++
					for(i=0;i<3;i++)
					{
						for( j=0;j<3;j++)
						{
							if(j==0)
							{
							textcolor(BLUE);cprintf("             %c                    ",c);
							}
							else
							printf(" ");
							putchar(mat[i][j]);
							if(j!=2)
							printf(" %c",c);
							else
							cprintf("                     %c",c);
						}
					if(i!=2)
					printf("\n             %c                   %c%c%c%c%c%c%c%c%c%c%c                    %c\n",c,b,b,b,a,b,b,b,a,b,b,b,c) ;

					}
					//mainprintcodeend++++++++++++++++++++++++++++++++
					printf("\n");
					for(j=0;j<3;j++)
					{
						textcolor(BLUE);cprintf("             %c",c);
						for(i=0;i<50;i++)
						printf(" ",c);
						textcolor(BLUE);cprintf("%c",c);printf("\n");
					}
					textcolor(6);cprintf("             %c",f);
					for(i=0;i<50;i++)
					{
						textcolor(BLUE);cprintf("%c",b);
					}
					textcolor(6);cprintf("%c\n",g);
					textcolor(WHITE) ;
					//++++++++++++++++++++++++++++++++++++++++
					printf("\n");
					if(indn%2!=0)
					{
					printf("                    --> %s your chance.",player1);
					indx=getche();
					fflush(stdin);
				    //	recheck[o]=indx;
				      //	o++;
					}
					else
					{
					printf("                    --> CPU  chance.");
					delay(100) ;
					indx=(rand()%57)+49;
					printf("%d",indx);
				       //	recheck[o]=indx;
				       //	o++;
					}
					if(indx=='0')
					{goto returntomain;}
					      //scanf("%d",&indx);
					//+++++++++++++++++++++++++++++++++++++++++
					if(indx=='1' && rc1==0)
					{
						i=0;
						j=0;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc1++;
					}
					else if(indx=='2' && rc2==0)
					{
						i=0;
						j=1;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc2++;
					}
					else if(indx=='3' && rc3==0)
					{
						i=0;
						j=2;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc3++;
					}
					else if(indx=='4' && rc4==0)
					{
						i=1;
						j=0;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc4++;
					}
					else if(indx=='5' && rc5==0)
					{
						i=1;
						j=1;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc5++;
					}
					else if(indx=='6' && rc6==0)
					{
						i=1;
						j=2;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc6++;
					}
					else if(indx=='7' && rc7==0)
					{
						i=2;
						j=0;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc7++;
					}
					else if(indx=='8' && rc8==0)
					{
						i=2;
						j=1;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc8++;
					}
					else if(indx=='9' && rc9==0)
					{
						i=2;
						j=2;
						fflush(stdin);
						if(indn%2!=0)
						mat[i][j]='X';
						else
						mat[i][j]='O';
						m=j;
						n=i;
						rc9++;
					}
					else
					{
						goto sgstrLoopAgain;
					}

					// condition checking ++++++++++++++++++++++++
					if(indn>4)
					{
					//for diagnol 1 ------
						if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X')
						{
							x++;
							goto sgend;
						}
						else if(mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O')
						{
							o++;
							goto sgend;
						}
					//for diagnol 2 ------
						else if(mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]=='X')
						{
							x++;
							goto sgend;
						}
						else if(mat[2][0]=='O' && mat[1][1]=='O' && mat[0][2]=='O')
						{
							o++;
							goto sgend;
						}
					//hline 1 ------
						else if(mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X')
						{
							x++;
							goto sgend;
						}
						else if(mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O')
						{
							o++;
							goto sgend;
						}
					//for hline 2 ------
						else if(mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]=='X')
						{
							x++;
							goto sgend;
						}
						else if(mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]=='O')
						{
							o++;
							goto sgend;
						}
					//for hline 3 ------
						else if(mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]=='X')
						{
							x++;
							goto end;
						}
						else if(mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]=='O')
						{
							o++  ;
							goto sgend;
						}
					//for vline 1 ------
						else if(mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X')
						{
							x++;
							goto sgend;
						}
						else if(mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2]=='O')
						{
							o++;
							goto sgend;

						}
					//for vline 2 ------
						else if(mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X')
						{
							x++;
							goto sgend;
						}
						else if(mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]=='O')
						{
							o++;
							goto sgend;
						}
					//for vline 3 ------
						else if(mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X')
						{
							x++;
							goto sgend;
						}
						else if(mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O')
						{
							o++;
							goto sgend;
						}

					}
					//++++++++++++++++++++++++++++++++++++++++++++++

					indn++;
					if(indn<10)
					goto sgre;
					sgend:
					clrscr();
					textcolor(6);cprintf("             %c",d);
				for(i=0;i<50;i++)
				{
					textcolor(BLUE);cprintf("%c",b);
				}
				textcolor(6);cprintf("%c",e);printf("\n");
				for(j=0;j<3;j++)
				{
					textcolor(BLUE);cprintf("             %c",c);
					for(i=0;i<50;i++)
					printf(" ",c);
					textcolor(BLUE);cprintf("%c",c);printf("\n");
				}
				// maincode to print matrix+++++++++++++++++++
				for(i=0;i<3;i++)
				{
					for( j=0;j<3;j++)
						{
							if(j==0)
							{
							textcolor(BLUE);cprintf("             %c                    ",c);
							}
							else
							printf(" ");
							putchar(mat[i][j]);
							if(j!=2)
							printf(" %c",c);
							else
							cprintf("                     %c",c);
						}
						if(i!=2)
						printf("\n             %c                   %c%c%c%c%c%c%c%c%c%c%c                    %c\n",c,b,b,b,a,b,b,b,a,b,b,b,c) ;

				}
				//mainprintcodeend++++++++++++++++++++++++++++++++
				printf("\n");
				for(j=0;j<3;j++)
				{
					textcolor(BLUE);cprintf("             %c",c);
					for(i=0;i<50;i++)
					printf(" ",c);
					textcolor(BLUE);cprintf("%c",c);printf("\n");
				}
				textcolor(6);cprintf("             %c",f);
				for(i=0;i<50;i++)
				{
					textcolor(BLUE);cprintf("%c",b);
				}
				textcolor(6);cprintf("%c\n",g);
				textcolor(WHITE) ;
				if(x==1 )
				printf("\n\t\t\t\t %s YOU WIN !!!");
				else if(o==1)
				printf("\n\t\t\t\t %s YOU LOSS!!!");
				else
				printf("\n\t\t\t\t DRAW MATCH\n");
				printf("\n\n\n\n\n\n\t\t\t");
				x=0;
				o=0;
				system("pause");
				goto returntomain;
				break;
			default :goto reenter1;

		}
	//*****************************************************
			//+++++++++++++++++++++++++++++++++++++++++++++++++++++++
			  break;
		case '2' :
			//*******************************************
			  clrscr();
				for(i=0;i<=37;i++)
				{
					textcolor(BLUE);cprintf("<");textcolor(15);cprintf(">");
				}
				//for( i=0;i<=7;i++)cout<<"\n";
				textcolor(BLUE);printf("\n\n\t\t\t\t!!");cprintf(" HOW TO PLAY ");textcolor(WHITE);printf("!!\n\n\n");
				printf("-> If want exit during run time");textcolor(GREEN);cprintf(" PRESS 0 ");textcolor(WHITE);printf("to exit \n\n");
				int hp=1;
				for(i=0;i<3;i++)
				{
					for( j=0;j<3;j++)
						{
							if(j==0)
							{
							textcolor(BLUE);cprintf("                                  "/*,c*/);
							}
							else
							printf(" ");
							printf("%d",hp++);
							if(j!=2)
							printf(" %c",c);
							else
							cprintf("                      ");
						}
						if(i!=2)
						printf("\n                                 %c%c%c%c%c%c%c%c%c%c%c                     \n",b,b,b,a,b,b,b,a,b,b,b) ;
				}
				printf("\n");
				printf("\n\n-> Use index (Box number) number to insert your choice \n");
				printf("   ( Suppose U want to insert in the middle box then press 5 )\n\n\n\n\n\n ");
				for(i=0;i<=37;i++)
				{
					textcolor(BLUE);cprintf("<");textcolor(15);cprintf(">");
				}
				printf("\n\t\t\t");
				system("pause");
				goto returntomain;
				  break;
		case '3' :exit(0);
			  break;
		default : goto reenter2;
		}


	getch();
}

