#include<stdio.h>
void merge(int a[],int b[],int n1,int n2)
{   int i;
    int x=0;
    int c[n1+n2];
    // copy first array in c
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    // copy second array in c
    for(i=n1;i<n1+n2;i++)
    {   
        c[i]=b[x];
        x++;
    }
    // print merged array c
     printf(".................The Merged Array is.....................\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\t",c[i]);
    }

}

int main()
{  int i,n1,n2,a[100],b[100];
printf("Enter the size of arrays n1 and n2=");
scanf("%d%d",&n1,&n2);


// for array 1
    printf("Enter the Elements in first arrray:\n");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&a[i]);
    }
    
// for array 2
 printf("Enter the Elements in second arrray:\n");
for(i=0;i<n2;i++)
    {
    scanf("%d",&b[i]);
    }

// pass the input in function(MERGE) 
merge(a,b,n1,n2); 

}
