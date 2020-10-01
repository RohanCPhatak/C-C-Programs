#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[30],x[3],y[3],str2[30]=" ",d[3],s[3],t[3],st,ed;
	int a,i;
	clrscr();
	printf("\nEnter a string:");
	scanf("%s",str1);
	printf("\nEnter starting character:");
	flushall();
	scanf("%c",&st);
	printf("\nEnter ending character:");
	flushall();
	scanf("%c",&ed);
	x[0]=s[0]=s[1]=st;
	x[1]=s[2]='\0';
	y[0]=d[0]=d[1]=ed;
	d[2]=y[1]='\0';
	strcat(str2,x);
	for(i=0;i<strlen(str1);i++)
	{
	t[0]=str1[i];
	t[1]='\0';
	if(t[0]==st)
		strcat(str2,s);
	else if(t[0]==ed)
		strcat(str2,d);
	else
		strcat(str2,t);
	}
	strcat(str2,y);
	printf("After stuffing:%s",str2);
	getch();
}