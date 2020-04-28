c ----- dennis ritchie----1972   
c- is a progrmming language
which is use to design and develop application,os,driver
media players.......

intru by dennis ritchie in 1972
	DEC PDP 11 Bell AT&T lab's USA

before c we have some languages

1. ALGOL60 (algaramic language) : 
	international commitee --- 1960

2. CPL (combined programming language ) :
	cambridge university and university of londan  -  1963

3. BCPL (basic combined programming language ) :
	martin richards from cambridge university in 1967

4. B : kenthomsen in 1970 on bell AT&T lab's USA
	it is first version of  UNIX operating system


feature of 'c'
-----------------

1. programming language
2. structured oriented programming language 
3. functional oriented programming language
4. procedure oriented programming language
5. compiler based language
6. middle level language
7. mother language
8. portable language
9. simple 
10. easy to learn

keywords
-------------

in 'c' there are 32 keywords

datatypes      : unsigned, signed, short, int, long, float, double, char  (8)
conditional
statements	    : if, else, switch, case, break, continue, goto, default (8)

loop
statements    : while, do, for (3)

functions      : void, return, auto, register, extern, static  (6)

structures/
unions	  : struct, union, enum   (3)

special keys : sizeof, typedef, native, volatile   (4)

create and run process of program
--------------------------------------------

for this process we can follow 7 steps

1. header files
2. main function
3. block
4. declaration 
5. initialization
6. condition
7. statements

1. header files

also called as library functions
a group of functions is called header file
in 'c' header files are 14.

header file always starts with

#include<file_name.h>
like : #include<stdio.h>
         #include<conio.h>.......
in above header files 

# 	: is called pre-procedure symbol
inlcude	: it used to opy the condition from c-library to text editor.
stdio.h	: standard input and output header file

it consist 	printf(), 
	scanf(), 
	putchar(), 
	getchar(), 
	puts(), 
	gets() statements.

in above statements 

printf(), putchar(), puts() are output statements.
scanf(), getchar(), gets() are input statements.

syntax :
----------
printf("format specifier", variable_name);
scanf("format specifier", &variable_name);

character handlers
putchar(variable_name);
variable_name=getchar();

strings handlers
puts(variable_name);
variable_name=gets();

conio.h : console input and output headeer file.

clrscr(), getch(), getche(), gotoxy(), wherex(), wherey(), 
textcolor(), textbackground(), delline(), kbhit()

clrscr()  : used to clear the privious program outputs on output screen. 
getch()  : used to hold the output screen.

2. main function

i.  program execution process will be starts here only.
ii. every progrm should have a function i.e main()
iii. without main() function invalid program

declaration

return_type function_name(parameters)

void main()	---> without return values.
int main() ----> with return values.

Note : main() function does not have  parameters.

3. block 
{
	---------;
	---------;
	---------;
}
within block we can write no of instr,condi,state,....

4. declaration
---------------

syntax
======
	datatype variable_name;
	eg : int number;
		 float fraction;
		 char n;
 
variable_name : it is a name of data stored memory in the system.
it is user defined.

rules to define the variables
------------------------------

1. no length limit.
2. starting numbers not allowed
3. b/w spaces not allowed
4. allowed characters
	a-z,A-Z,0-9,_
5. keywords not allowed

types of variables
------------------
there are 2 types 

1. local variables
2. global variables

1. local variables

which variables are declared inside function or block
those are called local variables.

2. global variables.

which variables are declared outside of the function or block
those are called global variables.

datatype	memory	format_specifier
=====================================
unsigned	2(bits)		%u
short int	2(bits)		%sd
int 		2(bits)		%d
long int	4 (bits)	%ld
float		4 (bits)	%f
double		8 (bits)	%lf
long float	10 (bits)	%Lf
char 		1 (bit)		%c	
-------------------------------------

initialization
--------------
syntax
	variable_name=value;
	eg : number=123;
		 fraction=12.54;
		 n='a';
types of initialization
-----------------------
1. compile time : value declared in the program.
2. run time		: value declared on output screen.

constant datatypes
-------------------

1. integer(int) : it consist without decimal point values.
	eg: 123,234,9087,....
	range : -32.768 to + 32.767
Note :	
if you want morethan this range you can use long int datatype.

2. float : it consist with decimal point values, but
		after decimal it will display 6 digits only.
	eg : 12.546087, 19.000000,......

3. character(char) :
	it consist alphabets, digits and symbols but any one only
	within sigle quotes.
	eg : 'a','9','@',.....

escape characters
------------------

\n	new line
\t	h tab
\v	v tab
\a	alert
\b	back space
\f	form feed
\r	carriage return
\0	null character
\?	?
\"	"
\'	'
\\	\

commant lines
-------------
1. single line
	//-----------------
2. multi line
	/*-----------
	-------------
	-------------
	-----------*/

ascii values
-------------

ascii : american standard code for information interchange.

total === 256
count === 0-255

characters		ascii values
----------------------------
A-Z				65-90
a-z				97-122
0-9				48-57
-----------------------------

operators
---------

in c-langauge operator are 7 types

1. arithmetic operators
2. assignment operators
3. conditional operators
4. relational operators
5. inc & dic operators
6. bitwise operators
7. operator precedense
-------------------------

1. arithmetic operators
	arithmetic operators are 5
	
	i.   addition 		+
	ii.  subtraciton	-
	iii. multiplication	*
	iv.  division		/
	v.   modulose		% (remainder)

WAP ADDITION OF TWO NUMERS ..?
#include<stdio.h>
int main()
{
	int fn,sn,add;
	
	printf("enter the numbers");
	scanf("%d%d",&fn,&sn);
	
	add=fn+sn;
	
	//printf("Additoin : %d",add);
	//printf("first number : %d\nsecond number : %d\naddition : %d",fn,sn,add);
	printf("first number\tsecond number\taddition\n%d\t\t%d\t\t%d",fn,sn,add);

	return 0;
}

WAP AVERAGE OF THREE NUMBERS..?

#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;
	
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	avg=(a+b+c)/3;
	
	printf("Average : %f",avg);
	
	return 0;
}
WAP FIND STUDET SCORE(TOTAL & PERCENTAGE)..?

#include<stdio.h>
int main()
{
	int t,h,e,m,sc,so,total;
	float per;
	
	printf("enter the subject marks");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&sc,&so);
	
	total=t+h+e+m+sc+so;
	per=total/6;
	
	printf("Total Marks : %d\nPercentage: %f",total,per);
	
	return 0;
}

WAP TO FIND AREA OF RECTANGULER..?

#include<stdio.h>
int main()
{
	float area,l,b;
	
	printf("enter the l & b value");
	scanf("%f%f",&l,&b);
	
	area=l*b;
	
	printf("Area of rec : %f",area);
	
	return 0;
}

WAP TO FIND NO OF YEARS,MONTHS,WEEKS AND DAYS FROM GIVEN DAYS?

#include<stdio.h>
int main()
{
	int days,weeks,months,years;
	
	printf("enter the days");
	scanf("%d",&days);
	
	years=days/365;
	days=days%365;
	
	months=days/30;
	days=days%30;
	
	weeks=days/7;
	days=days%7;
	
	printf("Years : %d\nMonths : %d\nWeeks : %d\nDays : %d",years,months,weeks,days);
	
	return 0;
}

WAP ON ALL ARITHMETIC OPERATORS ..?
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	
	printf("Addition : %d",a+b);
	printf("\nsubtraction : %d",a-b);
	printf("\nMultiplication : %d",a*b);
	printf("\nDivision : %d",a/b);
	printf("\nremainder : %d",a%b);
	
	return 0;
}
H/W
1. SIMPLE INTEREST
2. RIGHT DIGIT OF GIVEN NUMBER
3. CONVERT C TO F
4. AREA CIRCLE
5. CONVERT M/S TO KM/H

Assignment operators
-----------------------
symbol		example		action
-------------------------------

+=		a+=b(a=a+b)		put a+b value into a
-=		a-=b(a=a-b)		put a-b value into a
*=		a*=b(a=a*b)		put a*b value into a
/=		a/=b(a=a/b)		put a/b value into a
%=		a%=b(a=a%b)		put a%b value into a
--------------------------------

WAP SWAP PROGRAM WITHOUT THIRD VARIABLE..?

SWAP : INTERNAL EXCHANGE OF VARIABLE VALUES.
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
				10	  20	
	a=a+b;		10+20=30--a
	b=a-b;		30-20=10--b
	a=a-b;		30-10=20--a
	
	printf("after swap\n%d\t%d",a,b);
	
	return 0;
}

WAP SWAP PROGRAM WITH THIRD VARIABLE..?

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	c=a;		
	a=b;		
	b=c;		
	
	printf("after swap\n%d\t%d",a,b);
	
	return 0;
}

Conditional operators
---------------------

also called as ternary operators (?:)

	syntax :
		(condition)? state1 : state2 ;
	
	if condition is true then statement 1 will be executed,
	if condition is false then statement 2 will be executed.
	
WAP PROGRAM TO FIND MAXIMUM OF TWO NUMBERS..?

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
					
	(a>b)?printf("%d is maximum",a):printf("%d is maximum",b);
	
	return 0;
}

WAP TO CHECK GIVEN NUMBER IS EVEN OR ODD..?
 
#include<stdio.h>
int main()
{
	int a;
	
	printf("enter the number");
	scanf("%d",&a);
					
	(a%2==0)?printf("even number"):printf("odd number");
	
	return 0;
}

Relational Operators
--------------------

<
<=
>
>=
==
!=

those are returns boolean type(true(1)/false(0));
WAP PROGRAM ON ALL RELATIONAL OPERATORS.

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
					
	printf("a<b = %d",a<b);
	printf("\na<=b = %d",a<=b);
	printf("\na>b = %d",a>b);
	printf("\na>=b = %d",a>=b);
	printf("\na==b = %d",a==b);
	printf("\na!=b = %d",a!=b);
	
	return 0;
}

Inc & Dic Operators
=====================

add one value to initial value inc (++)
sub one value from initial value dic (--)

	there are type of inc & dic operators
	
		x=10
		++
	pre		post
	++x;	x++;
	1+10	10+1
		11
		
		--
	pre		post
	--x;	x--;
	1-10	10-1
		9
con		IXV		YV		FXV
-----------------------------
y=++x;	10		11		11
y=x++;	10		10		11
y=--x;	10		9		9
y=x--;	10		10		9
------------------------------

Bitwise operators
------------------

&&	and
||	or
~	not

c1	c2	c1&&c2	c1||c2	~C1
----------------------------
0	0	0		0		1
0	1	0		1		1
1	0	0		1		0
1	1	1		1		0
-----------------------------

OPERATOR PRECEDENCE
-------------------


1. [ ],{ },( )
2.	+,--
3. *,/,%	T TO R
4. +,-

=20*(3/7-2)*3%4
=20*(0-2)*3%4
=20-2*3%4
=20-6%4
=20-2
=18

WAP TO PRINT CHARACTER WITH ASCII VALUE..?

#include<stdio.h>
int main()
{
	char a;
	
	printf("enter the character");
	scanf("%c",&a);
					
	printf("\ncharacter : %c\nascii value :  %d",a,a);
	
	return 0;
}

WAP PROGRM TO FIND MEMORY OF DATATYPE..?
#include<stdio.h>
int main()
{
	printf("memory of integer : %d",sizeof(int));
	printf("\nmemory of float : %d",sizeof(float));
	printf("\nmemory of character : %d",sizeof(char));
	return 0;
}

CONDITIONAL STATEMENTS
======================

1. simple if
2. if else
3. else if ladder
4. nestard if
5. switch case
------------------

1. simple if
=============

syntax
------
	if(condition)
		{
			statements;
		}
if condition is true execute the statements 
otherwise nothing to execute.


2. if else
----------
syntax
------
	if(condition)
		{
			statements;
		}
	else
		{
			statements;
		}
if condition is true execute the if block statements 
otherwise execute the else block statements.

WAP TO FIND MAXIMUM OF TWO NUMBERS..?

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	
	if(a>b)
		{
			printf("%d is maximum",a);
		}
	else
		{
			printf("%d is maximum",b);
		}
	return 0;
}

WAP TO FIND RESULT STATUS OF STUDENT..?
#include<stdio.h>
int main()
{
	int t,h,e,m,sc,so;
	
	printf("enter the sbject marks");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&sc,&so);
	
	if(t>=35&&h>=35&&e>=35&&m>=35&&so>=35&&so>=35)
		{
			printf("Result Status : PASS ");
		}
	else
		{
			printf("Result Status : FAIL");
		}
	return 0;
}

WAP TO CHECK GIVEN CHARACTER VOWEL OR CONSONANT..?

#include<stdio.h>
int main()
{
	char n;
	
	printf("enter the character");
	scanf("%c",&n);
	
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
		{
			printf("Vowel ");
		}
	else
		{
			printf("Consonant");
		}
	return 0;
} 

else if ladder
--------------

syntax
	
	if(condition)
	{
		statements;
	}
	else if(condition)
	{
		statements;
	}
	else
	{
		statements;
	}
WAP TO FIND MAXIMUM OF THREE NUMBERS..?

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b&&a>c)
		{
			printf("%d is maximum",a);
		}
	else if(b>a&&b>c)
		{
			printf("%d is maximum",b);
		}
	else if(c>a&&c>b)
		{
			printf("%d is maximum",c);
		}
	else
		{
			printf("all are equal");
		}
	return 0;
}

WAP TO CHECK CHARACTER CASE(ALPHABET,DIGIT,SYMBOL)..?
#include<stdio.h>
int main()
{
	char n;
	
	printf("enter the character");
	scanf("%c",&n);
	
	if((n>='A'&&n<='Z')||(n>='a'&&n<='z'))
		{
			printf("An Alphabet");
		}
	else if(n>='0'&&n<='9')
		{
			printf("A Digit");
		}
	else
		{
			printf("A Symbol");
		}
	return 0;
}

WAP TO PRINT PROGRASS REPORT OF A STUDENT..?

#include<stdio.h>
int main()
{
	int id,t,h,e,m,sc,so,total;
	char name[30];
	float per;
	
	printf("enter the id and name");
	scanf("%d%s",&id,&name);
	printf("enter the subject marks");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&sc,&so);
	
	total=t+h+e+m+sc+so;
	per=total/6;
	
	printf("--Student Prograss Report--");
	printf("\nStudent Id : %d",id);
	printf("\nStudent Name : %s",name);
	printf("\nTotal Marks : %d",total);
	printf("\nPercentage : %f",per);
	if(t>=35&&h>=35&&e>=35&&m>=35&&sc>=35&&so>=35)
		{
			printf("\nResult Status : PASS ");
		}
	else
		{
			printf("\nResult Status : FAIL");
		}
	if(per>=75)
		{
			printf("\nGrade Is : A");
		}
	else if(per>=60)
		{
			printf("\nGrade Is : B");
		}
	else if(per>=50)
		{
			printf("\nGrade Is : C");
		}
	else if(per>=35)
		{
			printf("\nGrade Is : D");
		}
	else
		{
			printf("\nNot Quelified");
		}
	return 0;
}

WAP TO PERFORM ARITHMETIC OPERATION BY GIVEN INPUT..?

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	printf("----------------");
	printf("\n|1. Addition	|");
	printf("\n|2. Subtraction	|");
	printf("\n|3. Multiplication	|");
	printf("\n|4. Division	|");
	printf("\n|5. Remainder	|");
	printf("\n----------------");
	
	printf("\nenter operation");
	scanf("%d",&c);
	if(c==1)
		{
			printf("\nAddition : %d",a+b);
		}
	else if(c==2)
		{
			printf("\nSubtraction : %d",a-b);
		}
	else if(c==3)
		{
			printf("\nMultiplication : %d",a*b);
		}
	else if(c==4)
		{
			printf("\nDivision : %d",a/b);
		}
	else if(c==5)
		{
			printf("\nRemainder : %d",a%b);
		}
	else
		{
			printf("\nInvalid Operation");
		}
	return 0;
}

WAP TO CONVERT DIGIT TO TEXT..?

PRINT ELECTRICITY BILL ..?

#include<stdio.h>
int main()
{
	int meterno;
	char name[30];
	float pvs,prs,chrgd,amount,bill,schrg,sper;
	
	printf("enter the meter no and name");
	scanf("%d%s",&meterno,&name);
	
	printf("\nenter the present previous units");
	scanf("%f%f",&prs,&pvs);

	printf("enter service charge percentage");
	scanf("%f",&sper);

	chrgd=prs-pvs;
		
	if(chrgd>0&&chrgd<=100)
		{
			amount=chrgd*2.25;
		}
	else if(chrgd>100&&chrgd<=200)
		{
			amount=chrgd*3.5;
		}
	else if(chrgd>200&&chrgd<=300)
		{
			amount=chrgd*4.75;
		}
	else 
		{
			amount=chrgd*6;
		}
		
	schrg=amount*sper/100;
	bill=amount+schrg;
	printf("--electricity bill--");
	printf("\nMeter NO : %d\nName : %s",meterno,name);
	printf("\ncharged untis : %.2f",chrgd);
	printf("\namount : %.2f\nService Charge : %.2f",amount,schrg);
	printf("\nFinal Bill : %.2f",bill);
	return 0;
}

nestard if
----------

if ( condition)
	{
		statements;
		if(condition)
			{
				statements;
			}
		else
			{
				statements;
			}
	}
else
	{
		statements;
	}
	
example :
#include<stdio.h>
int main()
{
	char n;
	
	printf("enter the character");
	scanf("%c",&n);
	
	if((n>='A'&&n<='Z')||(n>='a'&&n<='z'))
		{
			printf("An Alphabet");
			if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
			{	
			printf("\nVowel ");
			}
			else
			{
			printf("\nConsonant");
			}
		}
	else if(n>='0'&&n<='9')
		{
			printf("A Digit");
			if(n%2==0)
				{
					printf("\n even");
				}
			else
				{
					printf("\nodd");
				}
		}
	else
		{
			printf("A Symbol");
		}
	return 0;
}

example 2 :
#include<stdio.h>
int main()
{
	int id;
	char name[30],branch;
	
	printf("enter the id and name");
	scanf("%d%s",&id,&name);
	fflush(stdin);
	printf("enter the branch first letter");
	scanf("%c",&branch);
	
	if(branch=='E'||branch=='e')
		{
			printf("you selected to EEE Branch");
			if(id<=40)
			{	
			printf("\nA-section ");
			}
			else
			{
			printf("\nB-section");
			}
		}
	else if(branch=='C'||branch=='c')
		{
			printf("you selected to CSE Branch");
			if(id<=40)
			{	
			printf("\nA-section ");
			}
			else
			{
			printf("\nB-section");
			}
		}
	else
		{
			printf("\nnot quelified to any branch");
		}
	return 0;
}

switch case
------------
	syntax
	======
	
	initialize;
	switch(option)
	{
		case 1:
			statements;
			break;
		case 2:
			statements;
			break;
			|
			|
		case n:
			statements;
			break;
		default :
			statements;
	}
example :
#include<stdio.h>
int main()
{
	int n;
	
	printf("enter the digit");
	scanf("%d",&n);
	
	switch(n)
	{
		case 0:
			printf("\nZero");
			break;
		case 1:
			printf("\nOne");
			break;
		case 2:
			printf("\nTwo");
			break;
		case 3:
			printf("\nThree");
			break;
		case 4:
			printf("\nFour");
			break;
		case 5:
			printf("\nFive");
			break;
		case 6:
			printf("\nSix");
			break;
		default:
			printf("\ninvalid digit");
	}
	return 0;
}

loop statements
---------------

1. while
	syntax :
		initialize;
		while(condition)
		{
			statements;
			update;
		}
WAP TO PRINT 1 TO 10 NUMBERS..?
#include<stdio.h>
int main()
{
	int i;
	i=1;
	while(i<=10)
		{
			printf("%d\t",i);
			i++;
		}
	return 0;
}
WAP TO NUTURAL NUMBERS UPTO GIVEN RANGE..?
#include<stdio.h>
int main()
{
	int i,range;
	i=1;
	printf("enter the range");
	scanf("%d",&range);
	while(i<=range)
		{
			printf("%d\t",i);
			i++;
		}
	return 0;
}
WAP TO PRINT EVEN NUMBER B/W RANGES..?
#include<stdio.h>
int main()
{
	int lb,ub;

	printf("enter the ranges");
	scanf("%d%d",&lb,&ub);
	while(lb<=ub)
		{
			if(lb%2==0)
			printf("%d\t",lb);
			lb++;
		}
	return 0;
}
WAP TO PRINT MULTIPLICATION TABLE OF GIVEN NUMBER..?
#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=10)
		{
			printf("%d * %d = %d\n",n,i,n*i);
			i++;
		}
	return 0;
}

WAP TO PRINT CHARACTERS WITH ASCII VALUES UPTO GIVEN RANGE..?
#include<stdio.h>
int main()
{
	char i,n;
	i='A';
	printf("enter the range");
	scanf("%c",&n);
	printf("character\tascii value\n");
	while(i<=n)
		{
			printf("%c\t\t%d\n",i,i);
			i++;
		}
	return 0;
}
WAP TO PRINT REVERSE OF GIVEN NUMBER..?
#include<stdio.h>
int main()
{
	int x,n,rev;
	rev=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
		{
			x=n%10;
			n=n/10;
			rev=rev*10+x;
		}
		printf("reverse number : %d",rev);
	return 0;
}
WAP TO CHECK GIVEN NUMBER PALANDROME OR NOT..?
#include<stdio.h>
int main()
{
	int x,n,rev,a;
	rev=0;
	printf("enter the number");
	scanf("%d",&n);
	a=n;
	while(n!=0)
		{
			x=n%10;
			n=n/10;
			rev=rev*10+x;
		}
		printf("reverse number : %d",rev);
	if(a==rev)
		printf("\npalandrome number");
	else
		printf("\nnot palandrome number");
	return 0;
}
WAP TO DIGITS SUM OF GIVEN NUMBER..?
#include<stdio.h>
int main()
{
	int x,n,sum;
	sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
		{
			x=n%10;
			n=n/10;
			sum=sum+x;
		}
		printf("digits sum of number : %d",sum);
	return 0;
}
WAP TO CHECK GIVEN NUMBER ARMSTRONG OR NOT..?
#include<stdio.h>
int main()
{
	int x,n,sum,a;
	sum=0;
	printf("enter the number");
	scanf("%d",&n);
	a=n;
	while(n!=0)
		{
			x=n%10;
			n=n/10;
			sum=sum+x*x*x;
		}
		printf("cubes digits sum of number : %d",sum);
	if(a==sum)
		printf("\narmstrong number");
	else
		printf("\nnot armstrong number");
	return 0;
}
WAP TO PRINT FIBBONACCI SERIES..?
#include<stdio.h>
int main()
{
	int a,b,c,n;
	a=-1;b=1;c=0;
	printf("enter the range");
	scanf("%d",&n);
	while(c<=n)
		{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
		}
	return 0;
}

WAP TO FIND FACTORIAL OF THE NUMBER..?

2. do-while
	syntax
	initialize;
	do
	{
		statements;
		update;
	}while(condition);
print 1 to 10 NUMBERS..?

#include<stdio.h>
int main()
{
	int i;
	i=1;
	do
		{
		printf("%d\t",i);
		i++;
		}while(i<=10);
	return 0;
}

example 2:
#include<stdio.h>
int main()
{
	int id,marks;
	char name[30],option;
	float fee;
	do
	{
	printf("enter the id and name");
	scanf("%d%s",&id,&name);
	printf("enter the fee and marks");
	scanf("%f%d",&fee,&marks);
	
	printf("Fee Details");
	printf("\nId Number : %d\nName : %s",id,name);
	printf("\nMarks : %d\nFee : %.2f",marks,fee);
	
	fflush(stdin);
	printf("\ndo you want continue[y/n]");
	scanf("%c",&option);
	}while(option=='y'||option=='Y');
	return 0;
}
	
3. for

syntax
======

for(initialize;condition;update)
	{
		statements;
	}

WAP TO CHECK GIVEN NUMBER PRIME OR NOT..?
#include<stdio.h>
int main()
{
	int n,fc,i;
	fc=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				fc++;
			printf("\nfactor is : %d",i);
			}
		}
		printf("\nno of factors : %d",fc);
	if(fc==2)
		printf("\nprime number");
	else
		printf("\nnot prime number");
	return 0;
}

jumping statements
------------------

1. break 	: applicable to switch and loop statements.
	if. condition is true it is terminates the execution.
		
2. continue	: applicable to loop statements.
if. condition is true skip the statement and promote to next loop.
example : 
	#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
		{
			if(i==5)
			//break;
			continue;
			printf("%d\n",i);
		}
	return 0;
}
3. goto		: applicable to switch statements.
		depending on labels.
		
	example :
		#include<stdio.h>
int main()
{
	int rank;
	printf("enter the rank");
	scanf("%d",&rank);
	switch(rank)
	{
		case 1:
			printf("A-Grade");
			goto l1;
		case 2:
			printf("B-Grade");
			goto l2;
		case 3:
			printf("C-Grade");
			goto l3;
		l1:
			printf("\nExecellent");
			break;
		l2:
			printf("\nGood");
			break;
		l3:
			printf("\nSatisfied");
			break;
		default :
			printf("\nnot qualified");
	}
		return 0;
}

ARRAYS
------
a group of same datatype elements is called an array.

arrays works based on index number it will starts from
0 to n-1(n is no of element in the array)

array declaration
------------------

syntax
datatype array_name[size];
ex : int n[5];

n[0]=86=n[i]
n[1]=76=n[i]
n[2]=91=n[i]
n[3]=35=n[i]
n[4]=57=n[i]

types of arrays
---------------

1. One Dimentional arrays
	those are contain only one row or one column.
	1*n or n*1
	int n[10]; 
2. Two/Multi Dimentional arrays
	those are contain more than one rows and one columns.
	
	m*n or n*m
	int n[5][5];

example 1 : print array elements..?
#include<stdio.h>
int main()
{
	int n[100],i,size;
	
	printf("enter the no of elements");
	scanf("%d",&size);
	
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		}
		
	printf("array elements\n");
	for(i=0;i<size;i++)
		{
		printf("%d\n",n[i]);
		}
	return 0;
}
example 2 : print even elements from array elements..?
#include<stdio.h>
int main()
{
	int n[100],i,size;
	printf("enter the no of elements");
	scanf("%d",&size);
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		}
	printf("even elements\n");
	for(i=0;i<size;i++)
		{
			if(n[i]%2==0)
			printf("%d\n",n[i]);
		}
	return 0;
}
example 3: find sum of array elements..?
#include<stdio.h>
int main()
{
	int n[100],i,size,sum=0;
	printf("enter the no of elements");
	scanf("%d",&size);
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		sum=sum+n[i];
		}
	printf("sum of array elements %d",sum);
	return 0;
}
example 4: find sum of even and odd elements..?
#include<stdio.h>
int main()
{
	int n[100],i,size,esum,osum;
	printf("enter the no of elements");
	scanf("%d",&size);
	esum=osum=0;
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		}
	for(i=0;i<size;i++)
		{
			if(n[i]%2==0)
			    esum=esum+n[i];
			else
				osum=osum+n[i];
		}
	printf("sum of even elements %d",esum);
	printf("\nsum of odd elements %d",osum);
return 0;
}
exmple 5 : find maximum and minimum elements in array elements.?
#include<stdio.h>
int main()
{
	int n[100],i,size,max,min;
	printf("enter the no of elements");
	scanf("%d",&size);
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		}
	max=min=n[0];	
	for(i=1;i<size;i++)
		{
			if(n[i]>max)
			    max=n[i];
			else if(n[i]<min)
				min=n[i];
		}
	printf("maximum element %d",max);
	printf("\nminimum element %d",min);
	return 0;
}
example 6: print reverse of array elements..?
#include<stdio.h>
int main()
{
	int n[100],i,size,temp,last;
	printf("enter the no of elements");
	scanf("%d",&size);
	last=size-1;
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		}
	for(i=0;i<size/2;i++)
		{
			temp=n[i];
			n[i]=n[last];
			n[last]=temp;
			last--;
		}
	printf("reverse of  elements\n");
	for(i=0;i<size;i++)
		{	
		printf("%d\n",n[i]);
		}
	return 0;
}
exmple 7 : search of array element..?
#include<stdio.h>
int main()
{
	int n[100],i,size,temp;
	
	printf("enter the no of elements");
	scanf("%d",&size);
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		}
	printf("enter the element to search");
	scanf("%d",&temp);
		
	for(i=0;i<size;i++)
		{	
			if(n[i]==temp)
				{
				printf("element found");
				break;
				}		
		}
		exit(0);
				printf("\nelement not found");
	return 0;
}
example 8 : sorting of array elements..?
#include<stdio.h>
int main()
{
	int n[100],i,j,size,temp;
	
	printf("enter the no of elements");
	scanf("%d",&size);
	printf("enter the %d elements",size);
	for(i=0;i<size;i++)
		{	
		scanf("%d",&n[i]);
		}
		
	for(i=0;i<size;i++)
		{
		for(j=i+1;j<size;j++)	
			{
			if(n[i]>n[j])
				{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
				}		
			}
		}
	printf("after sorting\n");
	for(i=0;i<size;i++)
		{	
		printf("%d\n",n[i]);
		}
	return 0;
}

WAP TO PRINT MATRIX AND TROSPOSE MATRIX..?
#include<stdio.h>
int main()
{
	int n[10][10],i,j,r,c;
	
	printf("enter the no of rows");
	scanf("%d",&r);
	printf("enter the no of cols");
	scanf("%d",&c);
	printf("enter the %d elements",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{	
		scanf("%d",&n[i][j]);
		}
	printf("Result Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		printf("%3d",n[i][j]);
		}
		printf("\n");
	}
	printf("Transpose Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		printf("%3d",n[j][i]);
		}
		printf("\n");
	}

	return 0;
}

WAP TO ADDITION OF TWO MATRIXES..?
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],add[10][10],i,j,r,c;
	
	printf("enter the no of rows");
	scanf("%d",&r);
	printf("enter the no of cols");
	scanf("%d",&c);
	printf("enter the %d elements for first matrix",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{	
		scanf("%d",&a[i][j]);
		}
	printf("enter the %d elements for second matrix",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{	
		scanf("%d",&b[i][j]);
		}	
	printf("Result Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		add[i][j]=a[i][j]+b[i][j];
		printf("%3d",add[i][j]);
		}
		printf("\n");
	}
return 0;
}
WAP TO MULTIPLICATION OF TWO MATRIX..?
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;
	
	printf("enter the no of rows");
	scanf("%d",&r);
	printf("enter the no of cols");
	scanf("%d",&c);
	printf("enter the %d elements for first matrix",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{	
		scanf("%d",&a[i][j]);
		}
	printf("enter the %d elements for second matrix",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{	
		scanf("%d",&b[i][j]);
		}	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		for(k=mul[i][j]=0;k<r;k++)
		
		mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("Result Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		printf("%3d",mul[i][j]);
		}
		printf("\n");
	}
return 0;
}
WAP TO SUM OF DAIGONAL ELEMENTS OF ARRAY..?
#include<stdio.h>
int main()
{
	int n[10][10],i,j,r,c,sum=0;
	
	printf("enter the no of rows");
	scanf("%d",&r);
	printf("enter the no of cols");
	scanf("%d",&c);
	printf("enter the %d elements",r*c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{	
		scanf("%d",&n[i][j]);
		}
	printf("Result Matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		printf("%3d",n[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		if(i==j)	
		sum=sum+n[i][j];
		}
	}
	printf("\nsum of daigonal elements : %d",sum);

	return 0;
}

FUNCTIONS
=========

3. function calling
	synatx
	functio_name(values/ref variables);
we can implement the functions in 4 ways

1. no parameters and no return values.
eg : 
#include<stdio.h>
void ts18as01();
void ts18as02();
void ts18as03();

void ts18as01()
	{
		printf("Name : Aditya\nRoll No : ta18as01\nCollege : srm");
	}
void ts18as02()
	{
		printf("\n\nName : Harsha\nRoll No : ta18as02\nCollege : nnjr");
	}
void ts18as03()
	{
		printf("\n\nName : Pushpa\nRoll No : ta18as03\nCollege : brcw");
	}
int main()
{
	ts18as01();
	ts18as02();
	ts18as03();
	return 0;
}
2. parameters and no return values.
eg :
#include<stdio.h>
void add(int a, int b);
void reverse(int n);
void evenodd(int num);

void add(int a, int b)
	{
		int c;
		c=a+b;
		printf("addition : %d",c);
	}
void reverse(int n)
	{
		int rev=0,x;
		while(n!=0)
			{
				x=n%10;
				n=n/10;
				rev=rev*10+x;
			}
		printf("\nreverse number : %d",rev);
	}
void evenodd(int num)
	{
		if(num%2==0)
			printf("\neven number");
		else
			printf("\nodd number");
	}
/*call by value
int main()
{
	add(12,23);
	reverse(1234);
	evenodd(123);
	return 0;
}*/
//call by ref
int main()
{
	int a,b,c,d;
	printf("enter the values for addition");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("\nenter the number to print reverse");
	scanf("%d",&c);
	reverse(c);
	printf("\neenter the value to find even or odd");
	scanf("%d",&d);
	evenodd(d);
	return 0;
}
3. no parameters and return values.
eg :
#include<stdio.h>
int integer();
float fraction();
char character();

int integer()
	{
		return 10;
	}

float fraction()
	{
		return 12.5;
	}
char character()
	{
		return 'a';
	}
int main()
{
	int x;
	float y;
	char z;
	x=integer();	printf("integer returns %d",x);
	y=fraction();	printf("\nfraction returns %f",y);
	z=character();	printf("\ncharacter returns %c",z);
	return 0;
}

4. parameters and return values.

#include<stdio.h>
int reverse(int n);
float area_circle(float r);
float area_rec(float l, float b);
int palindrome(int m);
int armstrong(int n);
int prime(int n);

int reverse(int n)
	{
		int rev=0,x;
		while(n!=0)
		{
			x=n%10;
			n=n/10;
			rev=rev*10+x;
		}
		return rev;
	}
	
float area_circle(float r)
	{
		return 3.14*r*r;
	}
float area_rec(float l, float b)
	{
		float area;
		area=l*b;
		return area;
	}
int palindrome(int m)
	{
		int rev=0,x;
		int a=m;
		while(m!=0)
		{
			x=m%10;
			m=m/10;
			rev=rev*10+x;
		}
		if(a==rev)
			{
				return 1;
			}
		else
			{
				return 0;
			}
	}
int armstrong(int n)
	{
		int sum=0,x,a;
		while(n!=0)
		{
			x=n%10;
			n=n/10;
			sum=sum+x*x*x;
		}
		if(a==sum)
		{
			printf("\narmstrong number");
		}
		else
		{
			printf("\nnot armstrong number");
		}
		return 1;
	}
int prime(int n)
	{
		int fc,i;
		for(i=1;i<=n;i++)	
			{
				if(n%i==0)
				fc++;
			}
			if(fc==2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
	}

int main()
{
	int rv,pn,an,pm,option,aa,ab,ac,ad;
	float arc,arr,ba,bb,bc;
	char ch;
	do
	{
	printf("--select the option--");
	printf("\n| 1. Reverse Number|");
	printf("\n| 2. Area Of Circle|");
	printf("\n| 3. Area Of Rectan|");
	printf("\n| 4. Check Palindrome|");
	printf("\n| 5. Check Armstrong|");
	printf("\n| 6. Check Prime Number|");
	printf("\n---------------------");
	printf("\nenter the option");
	scanf("%d",&option);
	switch(option)
	{
	case 1:
			printf("enter the number");
			scanf("%d",&aa);
			rv=reverse(aa); 
			printf("\nReverse Number : %d",rv);
			break;
	case 2:
			printf("enter the radius");
			scanf("%f",&ba);
    		arc=area_circle(ba);
    		printf("\narea of circle : %.2f",arc);
			break;
	case 3:
			printf("enter the numbers");
			scanf("%f%f",&bb,&bc);
			arr= area_rec(bb,bc);
			printf("\narea of rec : %.2f",arr);
			break;
    case 4:
    		printf("enter the number");
			scanf("%d",&ab);
			pn=palindrome(ab);
    		if(pn==1)
			  printf("\npalindrome number");
			else
			  printf("\nnot palindrome number");
    		break;
    case 5:
    		printf("enter the number");
			scanf("%d",&ac);
			an=armstrong(ac);
    		break;
	case 6:
			printf("enter the number");
			scanf("%d",&ad);
			pm=prime(ad);
			if(pm==1)
			  printf("\nprime number");
			else
		      printf("\nnot prime number");
			break;
	default:
			printf("invalid option");
	}
fflush(stdin);
printf("\nDo you want continue[y/n]");
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
	return 0;
}

3. recursion function

a function call itself is known as recursive functions.

syntax
======
	return_type function_name(paramters)
		{
			function_name(parameters);
			{
				body of the function;
			}
		}

example 1: wap to digits sum of the numbers..?
#include<stdio.h>

int digitsum(int n);

int digitsum(int n)
{
	if(n>0)
	return n+digitsum(n-1);
	else
	return n;
}

int main()
{
	int ans;
	printf("enter the number");
	scanf("%d",&ans);
	printf("\ndigits sum of numer : %d",digitsum(ans));
	return 0;
}
wap to find factorial of number using recursive functions.
#include<stdio.h>

int factorial(int n);

int factorial(int n)
{
	if(n>0)
	   return n*factorial(n-1);
	else
	   return 1;
}

int main()
{
	int ans;
	printf("enter the number");
	scanf("%d",&ans);
	printf("\ndigits sum of numer : %d",factorial(ans));
	return 0;
}

structures and unions
======================

it is a user defined datatype, a group of declarations
is called strcture/union.

to implement the structures we are using struct keyword.
to implement the unions we are using union keyword.

syntax

struct structure_name
	{
		declare 1;
		declare 2;
		declare 3;
		|
		|
		declare n;
	};
struct structure_name object_declaration
	{
		body of the structure;
	}
	
example 1:
#include<stdio.h>
int main()
{
	struct shop
	{
		int id,dscper;
		char name[40];
		float price,disc,total;
	}m;
	printf("enter the id");
	scanf("%d",&m.id);
	printf("enter the name");
	scanf("%s",&m.name);
	printf("enter the price");
	scanf("%f",&m.price);
	printf("enter the discout percentage");
	scanf("%d",&m.dscper);
	
	m.disc=m.price*m.dscper/100;
	m.total=m.price-m.disc;
	
	printf("id : %d\nName : %s",m.id,m.name);
	printf("\nprice : %.2f\ndiscount : %.2f",m.price,m.disc);
	printf("\ntotal amount : %.2f",m.total);
	
	return 0;
}
example 2 :
#include<stdio.h>
int main()
{
	struct shop
	{
		int id,dscper;
		char name[40];
		float price,disc,total;
	};
	struct shop m1,m2,m3;
	{
	printf("enter the id");
	scanf("%d",&m1.id);
	printf("enter the name");
	scanf("%s",&m1.name);
	printf("enter the price");
	scanf("%f",&m1.price);
	printf("enter the discout percentage");
	scanf("%d",&m1.dscper);
	
	printf("enter the id");
	scanf("%d",&m2.id);
	printf("enter the name");
	scanf("%s",&m2.name);
	printf("enter the price");
	scanf("%f",&m2.price);
	printf("enter the discout percentage");
	scanf("%d",&m2.dscper);
	
	printf("enter the id");
	scanf("%d",&m3.id);
	printf("enter the name");
	scanf("%s",&m3.name);
	printf("enter the price");
	scanf("%f",&m3.price);
	printf("enter the discout percentage");
	scanf("%d",&m3.dscper);
	
	m1.disc=m1.price*m1.dscper/100;
	m1.total=m1.price-m1.disc;

	m2.disc=m2.price*m2.dscper/100;
	m2.total=m2.price-m2.disc;
	
	m3.disc=m3.price*m3.dscper/100;
	m3.total=m3.price-m3.disc;	
	
	printf("id : %d\nName : %s",m1.id,m1.name);
	printf("\nprice : %.2f\ndiscount : %.2f",m1.price,m1.disc);
	printf("\ntotal amount : %.2f",m1.total);
	
	printf("\n\n\nid : %d\nName : %s",m2.id,m2.name);
	printf("\nprice : %.2f\ndiscount : %.2f",m2.price,m2.disc);
	printf("\ntotal amount : %.2f",m2.total);
	
	printf("\n\n\nid : %d\nName : %s",m3.id,m3.name);
	printf("\nprice : %.2f\ndiscount : %.2f",m3.price,m3.disc);
	printf("\ntotal amount : %.2f",m3.total);
	}
	return 0;
}
example 3:
#include<stdio.h>
int main()
{
	struct student
	{
		int id,marks;
		char name[50];
	};
	struct student s[100];
	int i,size;
	printf("enter the no of objects");
	scanf("%d",&size);
	printf("enter the %d objects information\n",size);
	for(i=1;i<=size;i++)
	{
		printf("enter the id");
		scanf("%d",&s[i].id);
		printf("enter the name");
		scanf("%s",&s[i].name);
		printf("enter the marks");
		scanf("%d",&s[i].marks);
	}
	printf("%d students information\n",size);
	for(i=1;i<=size;i++)
	{
		printf("%d\t%s\t%d\n",s[i].id,s[i].name,s[i].marks);
	}
	return 0;
}

FILE HANDLING
----------------------

what is the file ?
----------------------
file is a collection of the bytes/information that is stored on secondary storage devices.
example : hard disk,floppy disk,.....

types of files
------------------
1. Stream Oriented data/text files (ASCII)
	text file are contain ASCII codes of alphabets,digits and symbols.
	
2. System Oriented data/binary files
	binary files contain collection of bytes(0's & 1's). binary files are compiled version of text files.

file operations
--------------------
they are 5 operations
1. create a file
2. open a file
3. reading data from a file
4. writing data in a file
5. closing a file
---------------------

steps for Processing a file
-------------------------------------
--> declare a file pointer variable.
--> open a file using fopen() function
--> process the file using suitable functions
--> close the file using fclose() function
--------------------------------------

i) declare a file
    syntax : datatype file_name;
	 FILE *fp;

ii) open a file using fopen() function
     fp=fopen (“filename”, "mode”);

iii) close the file using fclose() function
syntax : int fclose(FILE *fp);

MODE OF OPERATIONS :
---------------------------------
There are 3 modes in opening a file.

 it can be opened for reading or writing or appending the texts. 
--------------------------------------------------------------------------------------
r – Opens a file in read mode and sets pointer to the first character in the file. 
      It returns null if file does not exist.
w – Opens a file in write mode. It returns null if file could not be opened. 
      If file exists, data are overwritten.
a – Opens a file in append mode.  It returns null if file couldn’t be opened.

wap to write the data into file..?
#include<stdio.h>
int main()
{
	int id,marks;
	char name[40];
	FILE *fp;
	fp=fopen("sstech.txt","w");
	printf("enter the id");
	scanf("%d",&id);
	printf("enter the name");
	scanf("%s",&name);
	printf("enter the marks");
	scanf("%d",&marks);
	
	fprintf(fp,"Std Id : %d\nStd Name : %s\nMarks : %d",id,name,marks);
	fclose(fp);
	return 0;
}
wap to read the data from file...?
# include <stdio.h>
int main( )
{
         FILE *fp ;
         char fdata[50] ;
         fp = fopen( "sstech.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file" ) ;
                 return 1;
         }
       while( fgets ( fdata, 150, fp ) != NULL )
         printf( "%s" , fdata ) ;
        
         fclose(fp) ;
         return 0;
}

pointers
========

storage the addres of vaiable into another variable

pointers are indicated with *.
int a,*p;
p=&a;

eg : 
#include<stdio.h>
int main()
{
	int a,*p;
	
	p=&a;
	printf("enter the value");
	scanf("%d",&a);
	
	printf("value of a : %d",a);
	printf("\nvalue of *p : %d",*p);
	printf("\nAddress Of a : %u",&a);
	printf("\nAddress Of *p : %u",p);
	
	return 0;
}

eg: 
#include<stdio.h>
int main()
{
	int a,b,c,*p,*q,i;
	
	p=&a;
	q=&b;
	
	printf("enter the values");
	scanf("%d%d",&a,&b);
	
	c=*p+*q;
	printf("addition : %d",c);
	(*p>*q)?printf("\n%d is maximum",*p):printf("\n%d is maximum",*q);
	if(*p<*q)
	{
		printf("\n%d is minimum",*p);
	}
	else
	{
		printf("\n%d is minimum\n",*q);
	}
	
	for(i=*p;i<=*q;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
	return 0;
}

header files
===========

it contain a group of predefined functions

like : 
#include<stdio.h>
	it contain printf(),scanf(),putchar(),
	getchar(),puts(),gets() functions
eg :
#include<stdio.h>
int main()
{
	int n;
	char x;
	char y[30];
	
	printf("welcome to header files");
	scanf("%d",&n);
	printf("hello you entered a number %d",n);
	printf("enter the character");
	x=getchar();
	putchar(x);
	printf("enter the name");
	y=gets();
	puts(y);
	
	return 0;
}

#include<conio.h>
Conio.h functions
===============
clrscr();
	--- this function clears the output screen and move the cursor to upper left hand corner of screen. 
delline();
	--- this function deletes the line containing the cursor and move all lines below it one line up. 
getch();
	--- this function prompts the user to press a character and that character is not printed on screen,
getche();
 	---this function prompts the user to press a character and that character is printed on screen. 
gotoxy();
	--- this function places cursor at a desired location on screen i.e. we can change cursor position using gotoxy function.
	--- Declaration : void gotoxy( int x, int y);
 
kbhit();
	--- this function is used to determine if a key has been pressed or not. To use kbhit function in your program you should 	    include the header file "conio.h". If a key has been pressed then it returns a non zero value otherwise returns zero. 
                 --- Declaration : int kbhit();

wherex();
	--- this function return current horizontal cursor position.
	--- Declaration :- int wherex();
 
wherey();
	--- this function return current vertical cursor position.
	--- Declaration :- int wherey();
 
textcolor();
	--- this function is used to change the color of drawing text in c programs.
	--- Declaration :- void textcolor(int color);
	--- where color is an integer variable. 
For example 
	0 means BLACK color, 
	1 means BLUE, 
	2 means GREEN and soon. 
You cana lso use write appropriate color instead of integer. For example you can write textcolor(YELLOW); to change text color to 		YELLOW. But use colors in capital letters only.
 
textbackground();
	--- this  function is used to change of current background color in text mode.  
	--- Declaration : void textbackground(int color);

clrscr() function
#include<stdio.h>
#include<conio.h>
	 
int main()
{
   printf("Press any key to clear the screen.\n"); 
getch();
clrscr();
printf("This appears after clearing the screen.\n");
  printf("Press any key to exit...\n");
	 
  getch();
  return 0;
}
getche() function
#include<stdio.h>
#include<conio.h>
void main()
{
printf("Waiting for a character to be pressed from the keyboard to exit.");

getche();
}

delline() function
------------------
#include<stdio.h>
#include<conio.h>
void main()
{
printf("This line will be deleted when you press a key.");
getch();
delline();
printf("\nLine deleted successfully.");
	 
getch();
}

gotoxy() function
-----------------
#include <stdio.h>
#include <conio.h>
void main()
{
   int x, y;
   x = 10;
   y = 10;
   gotoxy(x, y);
   printf("C program to change cursor position.");
   getch();
}
textcolor(),textbackground() functions
======================================
#include<stdio.h>
#include<conio.h>
 
main()
{
   textcolor(RED+BLINK);
   textbackground(RED);
   cprintf("C programming");
 	getch();
   return 0;
}

wherex() and wherey() functions
===============================
#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y;
  printf("Hello");
   x = wherex();
   y=wherey();
  printf("Horizontal cursor position  = %d\n",x);
  printf("v cursor position  = %d\n",y);
  getch();
}

kbhit() function
---------------
#include <stdio.h>
#include <conio.h>
void main()
{
while (!kbhit())
printf("You haven't pressed a key.\n");
return 0;
}
#incude<math.h>
Math.h functions
==============
	--- You can use functions of math.h in your c programs to calculating absolute value of a number, calculating logarithms and 	     using trigonometric functions to calculate sine, cosine of an angle.
abs();
example:
#include <stdio.h>
//#include<conio.h>
#include <math.h>
 int main()
{
  int n, result;
  printf("Enter an integer \n");
  scanf("%d", &n);
  result = abs(n);
  printf("Absolute value of %d = %d\n", n, result);
  return 0;
}
	--- abs is not a function but is a macro and is used for calculating absolute value of a number.
ceil();
	--- Ceil function is used to round up a number i.e. it returns the smallest number which is greater than argument passed to it.

floor();
	--- Floor function returns the greatest integer not greater than x. For example if the input is 2.25 then output will be 2.00.
example:
#include <stdio.h>
#include <math.h>
#include<conio.h> 
int main()
{
  double n, result,r2;
   //clrscr();
  printf("Enter a number to round it up\n");
  scanf("%lf", &n);
  result = ceil(n);
  r2=floor(n);
  printf("Original number =  %.2lf\n", n);
  printf("Number rounded up = %.2lf\n", result);
 printf("Number rounded down = %.2lf\n", r2);
 return 0;
}
cos();
	--- Cos function returns cosine of an angle(in radian).
	--- 1 radian = 57.2958(approximately).
sin();
	--- Sin function returns sine of an angle(in radian).
example:
#include <stdio.h>
#include <math.h>
int main()
{
double resultc,results, x = 1.0471;
resultc = cos(x);
results=sin(x);
printf("cos(%.4lf) = %.2lf\n", x, resultc);
printf("sin(%.4lf) = %.2lf\n", x, results);
return 0;
}
log();
	--- log function returns natural logarithm (base is e) of a number, where e is the exponential number.
log10();
	--- log10 function returns common logarithm (base is 10) of a number.
example:
#include <stdio.h>
#include <math.h>
int main()
{
double n, resultl,resultlt;
printf("Enter a number to  log (base is e)\n");
scanf("%lf", &n);
resultl = log(n);
resultlt = log10(n);
printf("Natural log of %.2lf = %lf\n", n, resultl);
printf("\n log10 of %.2lf = %lf\n", n, resultlt);
return 0;
}
pow();
	--- pow function returns x raise to the power y.
example:
#include <stdio.h>
#include <math.h>
int main()
{
double c, d, result;
printf("Enter c and d to calculate c^d\n");
scanf("%lf%lf", &c, &d);
result = pow(c, d);
printf("%.2lf raised to %.2lf = %.2lf\n", c, d, result);
return 0;
}
pow10();
	--- pow function returns x raise to the power 10. 
example:
#include <stdio.h>
	#include <math.h>
	 int main()
	{
	   int x = 3, result;
	    result = pow10(x);
	    printf("Ten raised to %d is %d\n", x, result);
	    return 0;
	}
sqrt();	
	--- sqrt function returns square root of a number.
example :
#include <stdio.h>
#include <math.h>
int main()
{
double n, result;
printf("Enter a number it's square root\n");
scanf("%lf", &n);
result = sqrt(n);	 
printf("Square root of %.2lf = %.2lf\n", n, result);
return 0;
}

#include<dos.h>
dos.h functions
=============
	--- dos.h header file of c language contains functions for handling interrupts, producing sound, date and time functions etc. 
	     It is borland specific and works in turbo c compiler.
delay();
	--- delay function is used to suspend execution of a program for a particular time. 
	--- Declaration :- void delay(unsigned int);
	--- Here unsigned int is the number of milliseconds ( remember 1 second = 1000 milliseconds ). 
sleep();
	--- Sleep function delays program execution for a given number of seconds.
example:
#include<stdio.h>
#include<dos.h>
int main()
{
printf("This c program will exit in 10 seconds.\n");
delay(10000); 
//sleep(10);                        
return 0;
}
getdate();
	--- getdate function is used to print (find) the current system date.
gettime();
	--- gettime function is used to print (find) current system time. 
example :
#include<stdio.h>
#include<dos.h>
int main()
{
   struct date d;
   struct time t;
   getdate(&d);
 	gettime(&t);
printf("Current system date is %d/%d/%d\n",d.da_day,d.da_mon,d.da_year);
printf("Current system time is %d : %d :%d\n",t.ti_hours,t.ti_min,t.ti_sec);	 
	   return 0;
}

setdate();

	--- setdate function is used to change system date.
example:
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 struct date d;
 printf("Enter the new date ( day, month and year ) as integers ");
scanf("%d%d%d",&d.da_day,&d.da_mon,&d.da_year);
	 
setdate(&d);
	 
printf("Current system date is %d/%d/%d\n",d.da_day,d.da_mon,d.da_year);
	 
getch();
}
sound();
	--- Sound function produces the sound of a specified frequency. Used for adding music to c program,
nosound();
	--- nosound function turn off the PC speaker.
example :
#include<dos.h>
 int main()
{
 int a;
 for ( a = 200 ; a <= 1000 ; a = a + 100 )
{
 sound(a);
 delay(5000);
}
nosound();
return 0;
}

#include<ctype.h>
“ctype.h” header file functions.
==========================
Functions			            Description				                    syntax
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
isalpha()		checks whether character is alphabetic or not		           int isalpha ( int x );
example:
#include<stdio.h>
#include<ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c", &ch);
   if(isalpha(ch))
      printf ( "\nEntered character is alphabetic" );
   else
      printf ( "\nEntered character is not alphabetic" );
   return 0;
   //getch();
}
isdigit()		Checks whether character is digit or not			           int isdigit ( int x );
example:
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c",&ch);
   if(isdigit(ch))
      printf ( "\nEntered character is digit");
   else
      printf ( "\nEntered character is not digit");
   //getch();
   return 0;
}
isalnum()		Checks whether character is alphanumeric or not		           int isalnum ( int x );
example:
#include <stdio.h>
//#include <conio.h>
#include <ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c", &ch);
   if(isalnum(ch))
      printf ( "\nEntered character is alphanumeric" ) ;
   else
      printf ( "\nEntered character is
	  alphanumeric" ) ;
	//getch();
	return 0;
}
isspace()		Checks whether character is space or not			           int isspace( int x );

exaample:
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c",&ch);
   if(isspace(ch))
      printf("\nEntered character is space");
   else
      printf("\nEntered character is not space");
   //getch();
   return 0;
}
islower()		Checks whether character is lower case or not		           int islower( int x );
example:
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c",&ch);
	if(isalpha(ch))
	{
  	 if(islower(ch))
  	   printf ( "\nEntered character is lower case character");
     else if(isupper(ch))
   	   printf ( "\nEntered character is upper case character");
     else
     printf("\nEntered character is not lower case character");
    }
    else
    printf("not an alphabet");
   //getch();
   return 0;
}
isupper()		Checks whether character is upper case or not		           int isupper ( int x );
example:
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c",&ch);
   if(isupper(ch))
      printf ("\nEntered character is uppercase character");
   else
      printf("\nEntered character is not uppercase character");
   //getch();
   return 0;
}
isxdigit()		Checks whether character is hexadecimal or not		           int isxdigit ( int x );
example :
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c",&ch);
   if(isxdigit(ch))
      printf("\nEntered character is hexadecimal");
   else
      printf("\nEntered character is not hexadecimal");
   //getch();
   return 0;
}
iscntrl()		Checks whether character is a control character or not	           int iscntrl ( int x );
example:
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch[10] ="abc\axyz";
   int i;
   //clrscr();
   i = 0;
   while(1)
   {
      if(iscntrl(ch[i]))
      {
	  printf ( "control character is found at "
		    "%dth position\n", i+1);
	 break;
      }
      i++;
   }
   return 0;
   //getch();
}	

isprint()		Checks whether character is a printable character or not	           int isprint ( int x );
example:
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   int i;
   char string[50] ="chandujavatrainer\noracle";
   //clrscr();
   i = 0;
   while(1)
   {
      if(isprint(string[i]))
      {
	 putchar(string[i]);
	 i++;
      }
      else break;
   }
   return 0;
   //getch();
}
ispunct()		Checks whether character is a punctuation or not		           int ispunct ( int x );
example
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch ;
   //clrscr();
   
   printf("enter the character");
   scanf("%c",&ch);
   if(ispunct(ch))
      printf ( "Character is a punctuation character");
   else
      printf ( "\nCharacter is not a punctuation character");
   return 0;
   //getch();
}
isgraph()		Checks whether character is a graphical character or not	           int isgraph ( int x );
example:
#include <stdio.h>
#include <ctype.h>
int main()
{
  int i;
  printf("All graphic characters in C programming are: \n");
  for (i=0;i<=127;++i)
   {
       if (isgraph(i)!=0)
           printf("%c ",i);
   }
  return 0;
}
tolower()		Checks whether character is alphabetic & converts to lower case         int tolower ( int x );
toupper()		Checks whether character is alphabetic & converts to upper case        int toupper ( int x );
example :
	
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
int main()
{
   char ch;
   //clrscr();
   printf("Enter any character\n");
   scanf("%c",&ch);
   if(isalpha(ch))
   {
   	printf ( "\nEntered character is converted into "
	    "upper character : %c\n",toupper(ch));
      printf ( "\nEntered character is converted into "
	       "lower character : %c\n",tolower(ch));
   }
   else
      printf("Entered character is not an alphabetic");
   //getch();
   return 0;
}
#include<stdlib.h>
       Type Casting 
=================
it is used to modify a variable from one datatype to another datatype.
New data type should be mentioned before the variable name or value in brackets which to be "Typecast".

Example

7/5 alone will produce integer value as 1.
So, type cast is done before division to retain float value (1.4).

#include <stdio.h>
int main ()
{
    float x;
    x = (float) 7/5;
    printf("%f",x);
}
Note: It is best practice to convert lower data type to higher data type to avoid data loss.
Data will be truncated when higher data type is converted to lower.

For example:- if float is converted to int, data which is present after decimal point will be lost.

TYPECAST FUNCTIONS
=====================
“stdlib.h” header file supports functions. 

Typecast function		Description				syntax
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
       atof()		        Converts string data type to float data type	double atof (const char* string);
       atoi()		        Converts string data type to int data type	int atoi (const char * str);
       atol()		        Converts string data type to long data type	long int atol ( const char * str );
       itoa()	  	        Converts int data type to string data type 	char * itoa ( int value, char * str, int base );
       ltoa()		        Converts long data type to string data type        char *ltoa(long N, char *str, int base);
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
atof() example
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10] = "3.14";
    float pi = atof(a);
    printf("Value of pi = %f\n", pi);
    return 0;
}
atoi()example 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10] = "100";
    int value = atoi(a);
    printf("Value = %d\n", value);
    return 0;
}
atol() example

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[20] = "100000";
    long value = atol(a);
    printf("Value = %ld\n", value);
    return 0;
}
itoa() example
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a=27325;
    char buffer[20];
    itoa(a,buffer,2);   			// here 2 means binary
    printf("Binary value = %s\n", buffer);
    itoa(a,buffer,10);   			// here 10 means decimal
    printf("Decimal value = %s\n", buffer);
    itoa(a,buffer,16);   			// here 16 means Hexadecimal
    printf("Hexadecimal value = %s\n", buffer);
    return 0;
}

ltoa() exmple
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    long a=100000;
    char buffer[20];
    ltoa(a,buffer,2);   			// here 2 means binary
    printf("Binary value = %s\n", buffer);
    ltoa(a,buffer,10);   			// here 10 means decimal
    printf("Decimal value = %s\n", buffer);
    ltoa(a,buffer,16);   			// here 16 means Hexadecimal
    printf("Hexadecimal value = %s\n", buffer);
    return 0;
}

#include<string.h>
 String Handling
=============
a group(collection) of characters is called a string .
ex : "hello", "welcome",.....
	
STRING DECLARETION
====================
syntax 
---------
	datatype string_name[size];
	here size is no of characters in the string.

char string[20] = {‘c’, ’h’, ‘a’, ‘n’, ‘d’, ‘u’, ‘j’, ‘a’, ‘v’, ’a’, ‘t’, ‘r’, ‘a’, ‘i’,‘n’, ‘e’, ‘r’};
		(or)
char string[20] = “chandujavatrainer”;
		(or)
char string []    = “chandujavatrainer”;



ex 1: write a program print name and age..?

#include <stdio.h>
int main ()
{
   char string[20] = "sstech.com";
   int age=18;
   printf("The string is : %s \nage : %d", string,age );
   return 0;
}

===================================
STRING FUNCTIONS
===================================
String.h header file supports all the string functions.

String functions		Description
===================================
strcat ( )		Concatenates the two strings.

strncat ( )		Appends a portion of string to another
example:
#include <stdio.h>
#include <string.h>
int main( )
{
   char source[ ] = "in c language";
   char target[ ]= "string functions";

   printf("\nSource string = %s", source ) ;
   printf("\nTarget string = %s", target ) ;

   //strcat(target, source );
   strncat(target, source,6 );
   printf("\nAfter strcat()\n%s",target );
}

strcpy ( )		Copies the data from one string into another string
strncpy ( )		Copies given number of characters of one string to another string
strset ( )		Sets all character in a string to given character
strnset ( )		It sets the portion of characters in a string to given character

example :
#include <stdio.h>
#include <string.h>
int main( )
{
   char source[ ] = "strings in c" ;
   char target[20]="strings" ;
   printf ( "\nsource string = %s", source ) ;
   printf ( "\ntarget string = %s", target ) ;
   //strcpy ( target, source ) ;
   //printf ( "\nafter copied target string\n %s", target ) ;
   //strncpy ( target, source ,4) ;
   //printf ( "\nafter copied target string\n %s", target ) ;
   
   printf ( "\n%s", strset(target,'*' ) );
   //printf ( "\n%s", strnset(target,'*',4 ) );
   return 0;
}


strlen ( )		Gives the length of the string
strlwr ( )		Converts string to lowercase
strupr ( )		Converts string to uppercase
strrev ( )		Reverses the given string
example:
#include <stdio.h>
#include <string.h>
int main( )
{
    int len;
    char name[]="chandujavatrainer" ;
    
	len = strlen(name) ;
    printf ( "\string length  = %d \n" , len ) ;
    
    printf("\n %s",strupr(name));
    
	printf("\n %s",strlwr(name));
    
	printf("\n %s",strrev(name));
	return 0;
}

strcmp ( )		Returns 0 if twostring same.
		Returns 1 (<0, if strl<str2). 
		Returns -1 (>0if str1>str2)

strcmpi ( )		Same as strcmp() but this function negotiates case.“A” and “a” are treated as same.
example :
#include <stdio.h>
#include <string.h>
int main( )
{
   char str1[ ] = "java" ;
   char str2[ ] = "oracle" ;
   int i, j, k;
   //i = strcmp ( str1, str2 ) ;
   //j = strcmp ( str2, str1 ) ;
   //k = strcmp ( str1, "java" ) ;
	i = strcmpi ( str1, str2 ) ;
   j = strcmpi ( str2, str1 ) ;
   k = strcmpi ( str1, "java" ) ;
   printf ( "\n%d \n%d \n%d", i, j, k ) ;
   return 0;
}


strchr ( )		Returns pointer to first occurrence of char in str1
strrchr ( )		last occurrence of given character in a string is found
example :
#include <stdio.h>
#include <string.h>
int main ()
{
  char string[55] ="This is a string for testing";
  char *p,*p1;
  p = strchr (string,'i');
  p1 = strrchr (string,'i');
printf ("Character i is found at position %d\n",p-string+1);
printf ("Character i is found at position %d\n",p1-string+1);
   return 0;
}
strdup ( )		Duplicates the string
example
#include <stdio.h>
#include <string.h>
int main()
{
    char *p1 = "Welcome";
    char *p2;
    p2 = strdup(p1);

    printf("Duplicated string is : %s", p2);
    return 0;
}
strtok ( )		Tokenizing given string using delimiter
example
#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="hai,how,are,you..?,welcome:to:java:class";
  char *p;
  p = strtok (string,",:");
  while (p!= NULL)
  {
    printf ("%s\n",p);
    p = strtok (NULL, ",:");
  }
  return 0;
}
========================================
