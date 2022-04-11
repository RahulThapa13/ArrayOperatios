#include<stdio.h>
main()
{  
    int a[20],b[20],i,j;
    int count=1;
    int x,n;
printf("Enter the size of array");
scanf("%d",&n);

printf("Enter the array element !!");
    for(int i=0;i<n; i++)
{ 
    scanf("%d",&a[i]);
}

for(int i=0;i<n; i++)
{ 
 b[i]=-1;   
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

for(int i=0;i<n; i++)
{   
count=1;

 for(int j=i+1;j<n; j++)
{ 
    if(a[i]==a[j])
    {
count++;
b[j]=0;
    }   
   
}
 if(b[i]!=0)
    {
        b[i]=count;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


printf("duplicate  number\t");
for(int i=0;i<n; i++)
{ 
 if(b[i]>1)
 {
     printf("%d   ",a[i]);
 }   
}

printf("Unquee number\t");
for(int i=0;i<n; i++)
{ 
 if(b[i]==1)
 {
     printf("%d    ",a[i]);
 }   
}


}
