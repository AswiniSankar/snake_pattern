/*
ip:5
op:
              1  2  3  4  5
          10  9  8  7  6
       11 12 13 14 15
    20 19 18 17 16
 21 22 23 24 25

#include<stdio.h>
int main()
{
 int n,i,j,a[20][20],temp,count=0,temp1;
 scanf("%d",&n);
 temp=1;
 for(i=0;i<n;i++)
 {
  count=0;
   temp1=temp;
 for(j=0;j<(n*2-1);j++)
  { if((i+j)<=n-2||(i+j)>(n*2-2))
       printf("   ");
  
    else
   {
     if(count!=n)
    {
    if(i%2==0)
    {a[i][j]=temp;
    temp++;
    count++;
    printf("%3d",a[i][j]);
   }
   else
   {
    a[i][j]=temp;
    temp--;
    count++;
    printf("%3d",a[i][j]);
   }
    }
  
   if(count==n)
    break;
  }
  if(n%2==0)
   {if(temp1==(n*n)-(n-1))
    break;}
   else
    {
     if(temp1==(n*n))
     break;
    }
  }
  //printf("--%d--",temp);
  if(i%2==0)
  temp=temp1+(2*n-1);
  else
    temp=temp1+1;
 printf("\n");
 }
 
 printf("\n");
 return 0;
}*/

#include<stdio.h>
int main()
{
 int n,i,j,temp,count=0,temp1;
 scanf("%d",&n);
 temp=1;
 for(i=0;i<n;i++)
 {
  count=0;
   temp1=temp;
 for(j=0;j<(n*2-1);j++)
  { if((i+j)<=n-2||(i+j)>(n*2-2))
       printf("   ");
  
    else
   {
     if(count!=n)
    {
    if(i%2==0)
    {printf("%3d",temp);
    temp++;
    count++;
    
   }
   else
   {
    printf("%3d",temp);
    temp--;
    count++;
   
   }
    }
  
   if(count==n)
    break;
  }
  if(n%2==0)
   {if(temp1==(n*n)-(n-1))
    break;}
   else
    {
     if(temp1==(n*n))
     break;
    }
  }
  //printf("--%d--",temp);
  if(i%2==0)
  temp=temp1+(2*n-1);
  else
    temp=temp1+1;
 printf("\n");
 }
 
 printf("\n");
 return 0;
}


