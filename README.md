# ArrayOperatios
array operation 4/11/2022
#include<stdio.h>

// function for printing array !!
void print(int a[],int n)
{
    for( int i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
}
//sum function
void sum(int a[],int n)
{
    int sum=0;
     for( int i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("\nSum of array is %d",sum);
}

// count function
void count(int a[],int n)
{
   int  counter=0;
     for( int i=0;i<n;i++)
{
    counter++;
}
printf("\nTotal of array is %d",counter);
}

// count even and odd number in array !!
void count_even_odd(int a[],int n)
{    int counter_even=0, counter_odd=0;
     for( int i=0;i<n;i++)
{
   if(a[i]%2==0)
   counter_even++;
   else
   counter_odd++;
}
printf("\nTotal Even number is %d\nTotal Odd number is %d",counter_even,counter_odd);
}

//sum of even number and odd number
void seo(int a[],int n)
{
    int sum1, sum2;
    sum1=sum2=0;

     for( int i=0;i<n;i++)
{
    if(a[i]%2==0)
    sum1=sum1+a[i];
    else
    sum2=sum2+a[i];
}

printf("\nSum of Even Numbers is %d\nsum of Odd Numbers is %d",sum1,sum2);
      
}
// print alternate element
void alternate(int a[],int n)
{

    for( int i=0;i<n;i=i+2)
{
    printf("\n%d\t",a[i]);
}
}
//reverse the order
void reverse(int a[],int n)
{
    
    for( int i=n-1;i>=0;i--)
{
    printf("%d ",a[i]);

}
}

// sequiencial search in array
void search(int a[],int n)
{
    int key,pos,flag=0;

    printf("Enter the number which you want find in array=");
    scanf("%d",&key);
    for(int i=0;i<n;i=i+2)
{
  if(a[i]==key)
  {
      flag++;
      pos=i+1;
  }
}
printf("Postion of %d is %d",key,pos);
}


// main functions
int main()



{   
     int a[100],i,n;
printf("Enter aray size=");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


print(a,n);
sum(a,n);
count(a,n);
count_even_odd(a,n);
seo(a,n);
alternate(a,n); 
reverse(a,n);
search(a,n);
return 0;

}
