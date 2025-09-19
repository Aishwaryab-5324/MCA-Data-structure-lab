#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int set1[10],set2[10],s1,s2,uni[20],inter[20],diff[20],i,ch;
   clrscr();
   printf("enter no of elemets in 1st set:");
   scanf("%d",&s1);
   printf("enter the elements in 1st set(onlu 0s ans 1s):");
   for(i=0;i<s1;i++)
   {
    scanf("%d",&set1[i]);
    }
    printf("\n enter no of elements in the 2nd set:");
    scanf("%d",&s2);
    printf("enter the elements in the 2nd set(only 0s and 1s)");
    for(i=0;i<s2;i++)
    {
    scanf("%d",&set2[i]);
    }
    printf("\n 1.UNION");
    printf("\n 2.INTERSECTION");
    printf("\n 3.DIFFERENCE");
    printf("\n 4.EXIT");
    while(1)
    {
    printf("\n enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1://UNION
	     if(s1==s2)
	     {
	     printf("\n elements after union operation:");
	     for(i=0;i<s1;i++)
	     {
	     uni[i]=set1[i]|set2[i];
	     printf("%d",uni[i]);
	     }
	     }
	     else
	     {
	       printf("set union not possible as sets are of diferent size\n");
	       }
	       break;
     case 2://INTERSECTION
	    if(s1==s2)
	    {
	    printf("\n elements after intersection operation:");
	    for(i=0;i<s1;i++)
	    {
	    inter[i]=set1[i]&set2[i];
	    printf("%d",inter[i]);
	    }
	    }
	    else
	    {
	    printf("set inetrsection not possible as sets are of different size\n");
	    }
	    break;
     case 3://DIFFERENCE
	    if(s1==s2)
	    {
	    printf("\n elements after diference operation:");
	    for(i=0;i<s1;i++)
	    {
	    diff[i]=set1[i]&~set2[i];
	    printf("%d",diff[i]);
	    }
	    }
	    else{
	    printf("set difference not possible as set are of difference size\n");
	    }
	    break;
     case 4:exit(0);
	    break;
     default:
	    printf("\n wrong choice please select a valid choice");
	    break;
	    }
     }
}













