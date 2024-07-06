#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	float c,d,f,g;
	int num;
	int a,b,e;
	int note20,note10,note5,note2,note1;
	clrscr();
	do
	{
	clrscr();
	printf("\n========MAIN MENU=========\n");
	printf("\nPress 1 for Arithamatic Menu	");
	printf("\nPress 2 for Print Differrent Messeges Menu ");
	printf("\nPress 3 for Conditional Statments Menu");
	printf("\nPress 4 for While Loop Menu");
	printf("\nPress 5 for For Loop Menu");
	printf("\nPress 6 for Do-While Loop Menu");
	printf("\nPress 7 for EXIT!!");
	printf("\n\nEnter Your Choice = ");
	scanf("%d",&num);
	switch(num)
	{
		case 1 :
			clrscr();
			do
			{
			 clrscr();
			 printf("\nYou are in Arithmatic Menu\n");
			 printf("\nPress 1 for Addition Menu");
			 printf("\nPress 2 for Substraction Menu");
			 printf("\nPress 3 for Multiplication");
			 printf("\nPress 4 for Division");
			 printf("\nPress 5 for Modulus");
			 printf("\nPress 6 for Related Programs");
			 printf("\n\nEnter Your Choice = ");
			 scanf("%d",&num);
			 switch(num)
			 {
				case 1:
					clrscr();
					do
					{   clrscr();
						printf("Addtion menu\n");
						printf("\nPress 1 For Addtion of 1 Integers");
						printf("\nPress 2 for Addition of 2 Floats");
						printf("\n\nEnter Your Choice = ");
						scanf("%d",&num);
						switch(num)
						{
							case 1:
								clrscr();
									printf("\nAddition of 2 Integers\n");
									printf("\nEnter value of a = ");
									scanf("%d",&a);
									printf("Enter value of b = ");
									scanf("%d",&b);
									printf("\nAddition = %d",a+b);
									printf("\n\nEnter Any Key...");
									getch();
									break;
							case 2:
								clrscr();
								printf("\nAddition of 2 Floats\n");
								printf("\nEnter value of a = ");
								scanf("%f",&c);
								printf("\nEnter value of b = ");
								scanf("%f",&d);
								printf("Addition = %0.3f",c+d);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							default:
								clrscr();
								printf("\nEnter Valid Input...\n");
								break;
						}
						clrscr();
						printf("\nDo You Want To Continue Addition Menu(Y/N) = ");
						scanf(" %ch",&ch);
					}while(ch=='Y' || ch=='y');
					break;
				case 2:
					clrscr();
					do
					{
					clrscr();
					printf("\nSubstraction Menu\n");
					printf("\nPress 1 for Substraction of 2 integers");
					printf("\nPress 2 for Substraction of 2 Floats");
					printf("\n\nEnter Your Choice = ");
					scanf("%d",&num);
					switch(num)
					{
						case 1:
							clrscr();
							printf("\nFor Substraction of 2 Integers\n");
							printf("\nEnter value of a = ");
							scanf("%d",&a);
							printf("\nEnter value of b = ");
							scanf("%d",&b);
							printf("Substraction = %d",a-b);
							printf("\n\nEnter Any Key...");
							getch();
							break;
						case 2:
						clrscr();
							printf("\nFor Substraction of 2 Floats");
							printf("\nEnter value of a = ");
							scanf("%f",&a);
							printf("\nEnter value of b = ");
							scanf("%f",&b);
							printf("\nSubstraction = %0.3f",a-b);
							printf("\n\nEnter Any Key...");
							getch();
							break;
						default:
							clrscr();
							printf("\nEnter valid input...\n");
							printf("\nEnter Any Key...");
							getch();
							break;
					}
					clrscr();
					printf("\nDo You Want To Continue Substraction Menu(Y/N) = ");
					scanf(" %ch",&ch);
					}while(ch=='Y' || ch=='y');
					break;
				case 3:
					do
					{
						clrscr();
						printf("\nMultiplication Menu\n");
						printf("\nPress 1 for Multiplication of 2 Integers");
						printf("\nPress 2 for Multiplication of 2 Floats");
						printf("\n\nEnter Your Choice = ");
						scanf("%d",&num);
						switch(num)
						{
							case 1:
								clrscr();
								printf("Multiplication of 2 Integers\n");
								printf("\nEnter value of a = ");
								scanf("%d",&a);
								printf("\nEnter value of b = ");
								scanf("%d",&b);
								printf("\nMultiplication = %d",a*b);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							case 2:
								clrscr();
								printf("\nMultiplication of 2 Floats\n");
								printf("\nEnter value of a = ");
								scanf("%f",&c);
								printf("\nEnter value of b = ");
								scanf("%f",&d);
								printf("\nMultiplication = %0.3f",c*d);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							default:
								clrscr();
								printf("\nEnter valid input...\n");
								printf("\nEnter Any Key..");
								getch();
								break;
						}
						clrscr();
						printf("\nDo you Want To Continue Multiplication Menu(Y/N) = ");
						scanf(" %c",&ch);
					}while(ch=='Y' || ch=='y');
					break;
				case 4:
					do
					{
						clrscr();
						printf("\nDivision Menu\n");
						printf("\nPress 1 for Division of 2 Integers");
						printf("\nPress 2 for Division of 2 Floats");
						printf("\n\nEnter Your Choice = ");
						scanf("%d",&num);
						switch(num)
						{
							case 1:
								clrscr();
								printf("Division of 2 Integers\n");
								printf("\nEnter value of a = ");
								scanf("%d",&a);
								printf("\nEnter value of b = ");
								scanf("%d",&b);
								printf("\nDivision = %d",a/b);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							case 2:
								clrscr();
								printf("\nDivision of 2 Floats\n");
								printf("\nEnter value of a = ");
								scanf("%f",&c);
								printf("\nEnter value of b = ");
								scanf("%f",&d);
								printf("\nDivision = %0.3f",c/d);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							default:
								clrscr();
								printf("\nEnter valid input...\n");
								printf("\nEnter Any Key..");
								getch();
								break;
						}
						clrscr();
						printf("\nDo you Want To Continue Division Menu(Y/N) = ");
						scanf(" %c",&ch);
					}while(ch=='Y' || ch=='y');
					break;
				case 5:
					do
					{
								clrscr();
								printf("\nModulus of 2 Integers\n");
								printf("\nEnter value of a = ");
								scanf("%d",&a);
								printf("\nEnter value of b = ");
								scanf("%d",&b);
								printf("\nModulus = %d",a%b);
								printf("\n\nEnter Any Key...");
								getch();
								clrscr();
						printf("\nDo you Want To Continue Modulus Operation(Y/N) = ");
						scanf(" %c",&ch);
					}while(ch=='Y' || ch=='y');
					break;
				case 6:
					do
					{
						clrscr();
						printf("\nArithmatic Related Programs Menu\n");
						printf("\nPress 1 for Calculating Cude and Square");
						printf("\nPress 2 for Calculationg Area and Perimeter of Circle");
						printf("\nPress 3 for Calculating  Area and Perimeter of Rectangle");
						printf("\nPress 4 for Converting Meters into Kilometers");
						printf("\nPress 5 for Convertiong Kilometers into Meters");
						printf("\nPress 6 for Calculatig Simple Intrest");
						printf("\n\nEnter Your Choice = ");
						scanf("%d",&num);
						switch(num)
						{
							case 1:
								clrscr();
								printf("\nFor finding Square and cube\n");
								printf("\nEnter the Number = ");
								scanf("%f",&c);
								printf("\nSquare = %0.3f",c*c);
								printf("\nCube    =%0.3f",c*c*c);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							case 2:
								clrscr();
								printf("\nFor Calculating Area and Perimeter of Circle\n");
								printf("\nEnter the Radius = ");
								scanf("%f",&c);
								printf("Area = %0.3f",(3.143*c*c));
								printf("\nPerimeter = %0.3f",(2*3.143*c));
								printf("\n\nEnter Any Key...");
								getch();
								break;
							case 3:
								clrscr();
								printf("\nfor Calculating area and Perimeter of Rectangle\n");
								printf("\nEnter the Lenght =  ");
								scanf("%f",&c);
								printf("\nEnter the Height = ");
								scanf("%f",&d);
								printf("\nArea = %0.3f",(c*d));
								printf("\nPerimeter = %0.3f",2*(c+d));
								printf("\n\nEnter Any Key...");
								getch();
								break;
							case 4:
								clrscr();
								printf("For calculating M to KM\n");
								printf("\nEnter the distance in Meter = ");
								scanf("%d",&a);
								b = a / 1000;
								printf("\nKilometer = %dKM",b);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							case 5:
								clrscr();
								printf("\nfor calculating KM to M\n");
								printf("Enter the distance in KM = ");
								scanf("%d",&b);
								a = b*1000;
								printf("\nMeter = %dM",a);
								printf("\n\nEnter Any Key...");
								getch();
								break;
							case 6:
								clrscr();
								printf("\nFor calculating Simple Intrest\n");
								printf("\nEnter principal Amount = ");
								scanf("%f",&c);
								printf("\nEnter Rate of Intrest = ");
								scanf("%f",&d);
								printf("\nEnter Number of Years = ");
								scanf("%d",&a) ;
								printf("\nSimple Intesest = %0.3f",(c*d*a)/100);
								printf("\n\nEnter Any Key...");
								getch();
								break;
						default:
								clrscr();
								printf("\nEnter valid input...\n");
								printf("\nEnter Any Key..");
								getch();
								break;
						}
						clrscr();
						printf("\nDo You Want To Continue Related Programs Menu(Y/N) = ");
						scanf(" %c",&ch);
					}while(ch=='Y' || ch=='y');
					break;
			 }
			 clrscr();
			 printf("\nDo You Want To Continue Arithmatic Menu(Y/N) = ");
			 scanf(" %c",&ch);
			 }while(ch=='Y' || ch=='y');
			break;
		case 2 :
			clrscr();
			do
			{
			clrscr();
			printf("\nPrint Different Messeges Menu\n");
			printf("\nPress 1 for Time Table");
			printf("\nPress 2 for Personal Information");
			printf("\nPress 3 for Marksheet");
			printf("\n\nEnter Your Choice = ");
			scanf("%d",&num);
			switch(num)
			{
				case 1:
					clrscr();
					printf("\n      		     Department Of Computer Engineering 						  ");
					printf("\n================================================================================");
					printf("\nName    = Birhade Sagar Kantilal");
					printf("\nR C Patel Institute Of Technology shirpur");
					printf("\nBranch  = Computer Engineering");
					printf("\nclass  h = FYBTech");
					printf("\n================================================================================");
					printf("\n 	        --- ************* T I M E T A B L E ************* ---				  ");
					printf("\n  ||--------------------------------------------------------------------||");
					printf("\n  ||      SR NO	    Mon     Tues     Wed     Thur     Fri     sat       ||");
					printf("\n  ||--------------------------------------------------------------------||");
					printf("\n  ||        1       Math    Math     Ecs     Math     Chem    Chem      ||");
					printf("\n  ||        2       Graph   Graph    Phy     Math     Math    Ecs       ||");
					printf("\n  ||--------------------------------------------------------------------||");
					printf("\n  ||                          LUNCH BRRAK                               ||");
					printf("\n  ||--------------------------------------------------------------------||");
					printf("\n  ||        3       gra      Ecs     Ecs     Cp       Cp      Cp        ||");
					printf("\n  ||        4       grap     Ecs     Chem    Cp lab   Chem    Cp        ||");
					printf("\n  ||--------------------------------------------------------------------||");
					printf("\n  ||                          TEA   BREAK                               ||");
					printf("\n  ||--------------------------------------------------------------------||");
					printf("\n  ||        5       math     Phy     Math    Cp       Phy     Math      ||");
					printf("\n  ||------------------------------------------------------------------- ||");+
					printf("\n\nEnter Any Key...");
					getch();
					break;
				case 2:
					clrscr();
					printf("\n\n\n\n\n\n");
					printf("*****************************Personal Information************************");
					printf("\n=========================================================================");
					printf("\n	Name               = Birhade Sagar Kantilal");
					printf("\n	Address            = Shirpur");
					printf("\n	Qualification      = Computer Engineering(First Year)");
					printf("\n	Date Of Birth      = 14/11/2002");
					printf("\n	E-Mail             = spatil7249@gmail.con");
					printf("\n	Mobile No          = 0123456789");
					printf("\n	Sport              = Football(FC BARCELONA");
					printf("\n	Friends            = Rushikesh,Bhushan,Mayur");
					printf("\n	Film Star          = Not Yet");
					printf("\n	Fav Person         = Neymar.jr,Zayn Malik");
					printf("\n===========================================================================");
					printf("\n\nEnter Any Key...");
					getch();
					break;
				case 3:
					clrscr();
					printf("\n_______________________________________________________________________________");
					printf("\n\n                           ---**-- MARKSHEET --**----                          ");
					printf("\n_______________________________________________________________________________");
					printf("\n\nF.Y.BTech 31[SEM 2] (MAY-2022) EXAMINATION HELD IN AUGUST,2022.                ");
					printf("\nCollege	: R.C.Patel Institute Of Technology,Shirpur.");
					printf("\nSeat No.  : 211101099");
					printf("\nName      : Birhade Sagar Kantilal");
					printf("\nBranch	: Computer Engineering");
					printf("\n_______________________________________________________________________________");
					printf("\n\nSUBJECT CODE		SUBJECT NAME        INT     EXT     TOTAL     MAX");
					printf("\n_______________________________________________________________________________");
					printf("\n01                      MATH              60      30       90       100");
					printf("\n02                      PHYSICS           50      20       70       100");
					printf("\n03                      CHEMISTRY         70      10       80       100");
					printf("\n04                      ECS               60      20       80       100");
					printf("\n05                      GRAPHICS          40      30       70       100");
					printf("\n06                      CP                70      30       100      100");
					printf("\n_______________________________________________________________________________");
					printf("\n\nPass Exam			: SGPA:SEM-2:8.16(490/600)");
					printf("\nCGPA			        : 8.16(490/600)");
					printf("\nDATE			        : 5 JUNE 2022");
					printf("\nRESULT				: A- GRADE");
					printf("\n\nEnter Any Key...");
					getch();
					break;
				default:
					clrscr();
					printf("\nEnter valid input...\n");
					printf("\nEnter Any Key..");
					getch();
					break;
			}
			clrscr();
			printf("\nDo You Want To Continue Print Different Messeges Menu(Y/N) = ");
			scanf(" %c",&ch);
			}while(ch=='Y' || ch=='y');
			break;
		case 3:
			clrscr();
			do
			{
				clrscr();
				printf("\nConditional statements Programs Menu\n");
				printf("\nPress 1 for finding Greatest of 2 Numbers");
				printf("\nPress 2 for finding Greatest of 3 Numbers");
				printf("\nPress 3 to check given number is even or odd");
				printf("\nPress 4 to check wheather given triangle is valid or not");
				printf("\npress 5 for finding class of student");
				printf("\nPress 6 to check profit or loss");
				printf("\nPress 7 to check Type of Character");
				printf("\nPress 8 to check given character is vowel or consonent");
				printf("\nPress 9 to check given number is divisible by 5 and 11 or not");
				printf("\nPress 10 to check given year is Leap Year or not");
				printf("\nPress 11 to input week number and print corresponding day of week name");
				printf("\nPress 12 to Enter month number and print number of days in that month");
				printf("\nPress 13 to input amount from user and print minimum number of notes");
				printf("\nPress 14 to calculate total electricity bill");
				printf("\nPress 15 to input basic salary and print gross salary of an employee\n");
				printf("\n\nEnter Your Choice = ");
			 scanf("%d",&num);
			 switch(num)
			 {
				case 1:
					clrscr();
					printf("\nFor finding Greatest of 2 numbers\n");
					printf("\nEnter the first number = ");
					scanf("%d",&a);
					printf("\nEnter the second number = ");
					scanf("%d",&b);
					if(a==b)
						printf("\nBoth are same");
					else if(a>b)
						printf("\n%d is Greater",a);
					else
						printf("\n%d is Greater",b);
						printf("\n\nEnter Any Key...");
						getch();
						break;
				case 2:
					clrscr();
					printf("\nFor finding Greatest of 3 numbers\n");
					printf("\nEnter the first number = ");
					scanf("%d",&a);
					printf("\nEnter the second number = ");
					scanf("%d",&b) ;
					printf("\nEnter the third number = ");
					scanf("%d",&e);
					if(a==b && b==e)
						printf("\nAll are same");
					else if(a>b && a>e)
						printf("\n%d is greater",a);
					else if(b>a && b>e)
						printf("\n%d is greater",b);
					else
						printf("\n%d is greater",e);
					printf("\n\nEnter Any Key...");
					getch();
					break;
				case 3:
					clrscr();
					printf("\nTo check number is even or odd\n") ;
					printf("\nEnter the given number = ");
					scanf("%d",&num);
					if(num==0)
						printf("\nEnter valid input");
					else if(num%2==0)
						printf("\nEven");
					else
						printf("\nOdd");
					printf("\n\nEnter Any Key..");
					getch();
					break;
				case 4:
					clrscr();
					printf("\nTo check whether given triangle is valid or not");
					printf("\nEnter the side 1 = ");
					scanf("%d",&a);
					printf("\nEnter the side 2 = ");
					scanf("%d",&b);
					printf("\nEnter the side 3 = ");
					scanf("%d",&e);
					if(a<=0 || b<=0 || e<=0)
						printf("\nEnter valid inputs");
					else if(a+b>e && b+e>a && a+e>b)
						printf("\nThe triangle is valid");
					else
						printf("\nThe triangle is not valid");
					printf("\n\nEnter Any Key...");
					getch();
					break;
				case 5:
					clrscr();
					printf("\nFor finding class of student\n");
					printf("\nEnter marks of subject 1 = ");
					scanf("%d",&a);
					printf("\nEnter marks of subject 2 = ");
					scanf("\n%d",&b);
					printf("\nEnter marks of subject 3 = ");
					scanf("%d",&e);
					printf("Total = %d",a+b+e);
					num = (a+b+e)/3;
					printf("\nPercentage = %d",num);
					if(num>=70)
						printf("\nDistinction Class");
					else if(num>=60)
						printf("\nFirst Class");
					else if(num>=50)
						printf("\nSecond Class");
					else if(num>=40)
						printf("\nPass Class");
					else
						printf("\nFail!!!");
					printf("\n\nEnter Any Key...");
					getch();
					break;
				case 6:
					clrscr();
						printf("\nTo check Profit or Loss\n");
						printf("\nEnter selling price = ");
						scanf("%f",&c);
						printf("\nEnter cost price = ");
						scanf("%f",&d);
						if(c==d)
							printf("\nNeither profit nor loss");
						else if(c>d)
							printf("\nProfit!!!");
						else
							printf("\nLoss!!!");
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 7:
						clrscr();
						printf("\nTo chech type of character\n");
						printf("\nEnter any character = ");
						scanf(" %c",&ch);
						if(ch>='a' && ch<='z')
							printf("\nSmall Alphabate");
						else if(ch>='A' && ch<='Z')
							printf("\nCapital Alphabate");
						else if(ch>='0' && ch<='9')
							printf("\nNumber");
						else
							printf("\nSpecial Symbol");
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 8:
						clrscr();
						printf("\nTo check vowel or consonent\n");
						printf("\nEnter any character = ");
						scanf(" %c",&ch);
						if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch== 'u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
							printf("\nVowel");
						else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
							printf("\nConsonent");
						else
							printf("\nNot an Alphabate") ;
						printf("\n\nEnter Any key...");
						getch();
						break;
					case 9:
						clrscr();
						printf("\nTo check number is divisible by 5 and 11 or not\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						if(num<=0)
							printf("Enter valid input...");
						else if((num%5==0) && (num%11==0))
							printf("\nNumber is divisible by 5 and 11");
						else
							printf("\nNUmber is not divisible by 5 and 11");
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 10:
						clrscr();
						printf("\nTo check given year is leap year or not\n");
						printf("\nEnter the year = ");
						scanf("%d",&num);
						if( num % 400 == 0)
						{
						printf("\nThe given year %d is leap year",num);
						}
						else if( num % 100 == 0)
						{
						printf("\nThe given year %d is not a leap year",num);
						}
						else if( num % 4 == 0)
						{
						printf("\nThe given year %d is a leap year",num);
						}
						else
						{
						printf("\nThe given year %d is not a leap year");
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 11:
						clrscr();
						printf("\n\nProgram to print corresponding day of week\n");
						printf("\n\nEnter the week number = ");
						scanf("%d",&num);
						if(num<1 || num>7)
						printf("\nInvalid Week number");
						else
						{
						if(num==1)
						printf("\nMonday");
						else
						{
						if(num==2)
						printf("\nTuesday");
						else
						{
						if(num==3)
						printf("\nWednesday");
						else
						{
						if(num==4)
						printf("\nThursday");
						else
						{
						if(num==5)
							printf("\nFriday");
						else
						{
							if(num==6)
								printf("\nSaturday");
							else
								printf("\nSunday");
						}
					}
				}
			}
		}
	}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 12:
						clrscr();
						printf("\n\nProgram to calculate number of days in a month\n");
						printf("\n\nEnter the number of month = ");
						scanf("%d",&num);
						if(num==2)
						printf("\n28 or 29");
						else
						{
						if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12)
						printf("\n31");
						else
						{
						if(num==4 || num==6 || num== 9 || num==11)
						printf("\n30");
						else
						printf("\nInvalid month");
						}
						}
						printf("\n\Enter Any Key...");
						getch();
						break;
					case 13:
					clrscr();
					a = b = e = note20 = note10 = note5 = note2 = note1 = 0;
					printf("\n\nProgragm to clculate number of notes\n");
					printf("\n\nEnter the amount = ");
					scanf("%d",&num);
					if(num<=0)
					printf("\nInvalid Input");
					else
					{
						if(num>=500)
						{
							a = num/500;
							num = num - (a * 500);
						}
						if(num>=100)
						{
							b = num/100;
							num = num - (b * 100);
						}
						if(num>=50)
						{
							e = num/50;
							num = num - (e * 50);
						}
						if(num>=20)
						{
							note20 = num/20;
							num = num - (note20 * 20);
						}
						if(num>=10)
						{
							note10 = num/10;
							num = num - (note10 * 10);
						}
							if(num>=5)
						{
							note5 = num/5;
							num = num - (note5 * 5);
						}
						if(num>=2)
						{
							note2 = num/2;
							num = num - (note2 * 2);
						}
						if(num>=1)
						{
							note1 =  num/1;
							num = num - (note1 * 1);
						}
						printf("\nNote500 = %d\nNote100 = %d\nNote50  = %d\nNote20  = %d\nNote10  = %d\nNote5   = %d\nNote2   = %d\nNote1   = %d",a,b,e,note20,note10,note5,note2,note1);
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 14:
						clrscr();
						printf("\n\nProgram to calculate Electricity Bill\n");
						printf("\n\nEnter the Unit Charge = ");
						scanf("%d",&num);
						if(num<=0)
							printf("\nEnter valid input");
						else
						{
							if(num<=50)
								c = num * 0.50;
							else
							{
								if(num<=150)
									c =  25 + ((num-50) * 0.75);
								else
								{
									if(num<=250)
									c = 100 + ((num-150) * 1.20);
									else
									{
										c = 220 + ((num-250) * 1.50);
									}
								}
							}
						}
						d = c * 0.20;
						f = d + c;
						printf("\nTotal Electricity Bill = %0.2f",f);
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 15:
						clrscr();
						printf("\n\nProgram to calculate Gross Salary of Employee\n");
						printf("\n\nEnter the Basic Salary = ");
						scanf("%f",&c);
						if(c<0)
							printf("\nInvalid Input");
						else
						{
							if(c<=10000)
							{
								d = c * 0.20;
								g = c * 0.80;
							}
							else
							{
								if(c<=20000)
								{
									d = c * 0.25;
									g = c * 0.90;
								}
								else
								{
									d = c * 0.30;
									g = c * 0.95;
								}
							}
						}
						f = c + d + g;
						printf("Gross Salary = %0.2f",f);
						printf("\n\nEnter Any Key...");
						getch();
						break;
					default:
						clrscr();
						printf("\nEnter valid input...\n");
						printf("\nEnter Any Key..");
						getch();
						break;
			 }
			 clrscr();
			 printf("\nDo You Want To Continue Conditional statements program Menu(Y/N) = ");
			 scanf(" %c",&ch);
			}while(ch=='Y'|| ch=='y');
			break;
		case 4:
			clrscr();
			do
			{
				clrscr();
				printf("\nYou are in while Loop Programs Menu\n");
				printf("\nPress 1 for printing natural numbers in given Range");
				printf("\nPress 2 for printing natural numbers in given Range");
				printf("\nPress 3 for printing the table of given number");
				printf("\nPress 4 to Reverse the given number");
				printf("\nPress 5 to print the sum of each digit in a number");
				printf("\nPress 6 to check whether the number is Pallindrome or not");
				printf("\nPress 7 to check wheather given number is Armstrong or not");
				printf("\n\nEnter Your Choice = ");
				scanf("%d",&num);
				switch(num)
				{
					case 1:
						clrscr();
						printf("\nTo print Natural Numbers in given Range\n");
						printf("\nEnter the starting point = ");
						scanf("%d",&a);
						printf("\nEnter the ending point = ");
						scanf("%d",&b);
						while(a<=b)
						{
							printf("\t%d",a);
							a = a+1;
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 2:
						clrscr();
						printf("\nTo print Natural Numbers in given Range\n");
						printf("\nEnter the starting point = ");
						scanf("%d",&a);
						printf("\nEnter the ending point = ");
						scanf("%d",&b);
						while(a>=b)
						{
							printf("\t%d",a);
							a = a-1;
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 3:
						clrscr();
						printf("\nFor printing table of given number\n");
						printf("\nEnter any number = ");
						scanf("%d",&num);
						a = 1;
						while(a<=10)
						{
							printf("\n%d * %d = %d",num,a,num*a);
							a = a + 1;
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 4:
						clrscr();
						printf("\nFor printing the Reverse of number given\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						printf("\n\nReverse = ");
						while(num>0)
						{
							a = num%10;
							printf("%d",a);
							num = num/10;
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 5:
						clrscr();
						printf("\nFor printing the Sum of each digit in number\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						b = 0;
						while(num>0)
						{
							a = num%10;
							b = b + a;
							num = num/10;
						}
						printf("\n\nSum = %d",b);
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 6:
						clrscr();
						printf("\nProgram to check given number is Pallindrome or not\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						a = num;
						b = 0;
						while( num != 0 )
						{
							b = (b * 10) + ( num % 10);
							num = num / 10;
						}
						if(b == a)
						{
							printf("\nThe given number %d is pallindrome",a);
						}
						else
						{
							printf("\nThe given number is %d not pallindrome",a);
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 7:
						clrscr();
						printf("\nProgram to check given number is Armstrong or not\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						b = 0;
						e = num;
						while(num>0)
						{
							a = num%10;
							b = b + a * a * a;
							num = num/10;
						}
						if(b==e)
							printf("\nArmstrong");
						else
							printf("\nNot Armstrong");
						printf("\n\nEnter Any Key...");
						getch();
						break;

					default:
						clrscr();
						printf("\nEnter valid input...\n");
						printf("\nEnter Any Key..");
						getch();
						break;
				}
				clrscr();
				printf("\nDo You Want To Continue While Loop Programs Menu(Y/N) = ");
				scanf(" %c",&ch);
			}while(ch=='Y' || ch=='y');
			break;
		case 5:
			clrscr();
			do
			{
				clrscr();
				printf("\nYou are in For Loop Programs Menu\n");
				printf("\nPress 1 for printing natural numbers in given Range");
				printf("\nPress 2 for printing natural numbers in given Range");
				printf("\nPress 3 for printing the table of given number");
				printf("\nPress 4 to Reverse the given number");
				printf("\nPress 5 to print the sum of each digit in a number");
				printf("\nPress 6 to check whether the number is Pallindrome or not");
				printf("\nPress 7 to check wheather given number is Armstrong or not");
				printf("\n\nEnter Your Choice = ");
				scanf("%d",&num);
				switch(num)
				{
					case 1:
						clrscr();
						printf("\nTo print Natural Numbers in given Range\n");
						printf("\nEnter the starting point = ");
						scanf("%d",&a);
						printf("\nEnter the ending point = ");
						scanf("%d",&b);
						for(e=a;e<=b;e++)
						{
							printf("\t%d",e);
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 2:
						clrscr();
						printf("\nTo print Natural Numbers in given Range\n");
						printf("\nEnter the starting point = ");
						scanf("%d",&a);
						printf("\nEnter the ending point = ");
						scanf("%d",&b);
						for(e=a;e>=b;e--)
						{
							printf("\t%d",e);
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 3:
						clrscr();
						printf("\nFor printing table of given number\n");
						printf("\nEnter any number = ");
						scanf("%d",&num);
						a = 1;
						for(a=1;a<=10;a++)
						{
							printf("\n%d * %d = %d",num,a,num*a);
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 4:
						clrscr();
						printf("\nFor printing the Reverse of number given\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						printf("\n\nReverse = ");
						for(;num>0;)
						{
							a = num%10;
							printf("%d",a);
							num = num/10;
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 5:
						clrscr();
						printf("\nFor printing the Sum of each digit in number\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						b = 0;
						for(;num>0;)
						{
							a = num%10;
							b = b + a;
							num = num/10;
						}
						printf("\n\nSum = %d",b);
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 6:
						clrscr();
						printf("\nProgram to check given number is Pallindrome or not\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						a = num;
						b = 0;
						for(;num!=0;)
						{
							b = (b * 10) + ( num % 10);
							num = num / 10;
						}
						if(b == a)
						{
							printf("\nThe given number %d is pallindrome",a);
						}
						else
						{
							printf("\nThe given number is %d not pallindrome",a);
						}
						printf("\n\nEnter Any Key...");
						getch();
						break;
					case 7:
						clrscr();
						printf("\nProgram to check given number is Armstrong or not\n");
						printf("\nEnter the number = ");
						scanf("%d",&num);
						b = 0;
						e = num;
						for(;num>0;)
						{
							a = num%10;
							b = b + a * a * a;
							num = num/10;
						}
						if(b==e)
							printf("\nArmstrong");
						else
							printf("\nNot Armstrong");
						printf("\n\nEnter Any Key...");
						getch();
						break;

					default:
						clrscr();
						printf("\nEnter valid input...\n");
						printf("\nEnter Any Key..");
						getch();
						break;
				}
				clrscr();
				printf("\nDo You Want To Continue For Loop Programs Menu(Y/N) = ");
				scanf(" %c",&ch);
			}while(ch=='Y' || ch=='y');
			break;
		case 6:
			clrscr();
				printf("\n\nHi there...");
				printf("\n\nThe whole Program is based on Do_while Loop");
				break;
		case 7:
			clrscr();
			printf("\n\nQuiting...");
			printf("\n\nEnter Any Key...");
			getch();
			exit(3);
			break;

		default:
			clrscr();
			printf("\nEnter the valid Choice.....\n");
			break;
	}
	printf("\n\nDo You Want To Continue MAIN MENU(Y/N) = ");
	scanf(" %c",&ch);
	if(ch=='Y' || ch=='y');
	else
	{
		clrscr();
		printf("\n\nCODED BY = SAGAR KANTILAL BIRHADE\n");
		printf("\nQuiting.........\n");
		printf("\nEnter Any Key...");
	}
	}while(ch=='Y' || ch=='y');
	getch();
	return 0;
}