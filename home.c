#include<stdio.h>
int main() 
{int maths ,phy,chem,eng,comp,marks;
char name[50];
 int roll,sum;
    float percentage;
    
 printf("---GRADE CALCULATOR---\n");

printf("enter your name:");
    scanf(" %s",&name);

    printf("enter your roll no:");
    scanf(" %d",&roll);
printf("enter your maths marks(0-100):");
scanf("%d",&maths);

printf("enter your physics marks(0-100):");
scanf("%d",&phy);

printf("enter your chemistry marks(0-100):");
scanf("%d",&chem);

printf("enter your english marks(0-100):");
    scanf(" %d",&eng);
printf("enter your computer marks(0-100):");
    scanf(" %d",&comp);
    if (maths<0|| maths>100 ||phy<0||phy>100 || chem<0 ||chem>100 ||eng<0||eng>100||comp<0||comp>100)
    printf("\n invalid marks! each must be between 0 to 100\n");
    
sum=phy+maths+eng+chem+comp;
printf("---------PROGRESS--------\n");
percentage=(sum/500.0)*100;



printf("your percentage is:%.2f%%\n",percentage);
printf( "\n========== REPORT CARD ==========");
printf("\nName :%s",name);
printf("\nRoll no:%d" ,roll);
printf("\n---------------------------------------------\n");
printf("Maths:%d/100 \n",maths);
printf("Physics:%d/100\n",phy);
printf("Chemistry:%d/100\n",chem);
printf("English:%d/100\n",eng);
printf("Computer:%d/100\n",comp);
printf("---------------------------------------------\n");
printf("Total:%d/500\n",sum);
printf("Percentage:%2f%%\n",percentage);

if (percentage<0|| percentage>100)
{
    printf("marks should be between 0 and 100 \n");
}
if (percentage>=95)
{printf("GRADE A");
printf("\n REMARK  :EXECELLENT");}

else if (percentage>=75)
{printf("GRADE B");
printf("\n REMARK  : VERY GOOD");
}
else if (percentage>50)
{ printf("GRADE C");
printf("\n REMARK  : KEEP IMPROVING");}
else 
{ printf("FAILED");
printf("\nBETTER LUCK NEXT TIME");}

printf("\n=================================");


return 0;
}