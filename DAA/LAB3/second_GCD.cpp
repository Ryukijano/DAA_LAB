#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int method1Counter = 0;
int method2Counter = 0;
int method3Counter = 0;

void resetCounter()
{
    method1Counter = 0;
    method2Counter = 0;
    method3Counter = 0;
} 

int method1(int a, int b) 
{
    if(a==0)
    { 
    method1Counter++;
    return b;
    }
    else
    {
        method1Counter++;
        return method1(b%a,a);
    } 
}

int method2(int a,int b) 
{
   int i =0,big,small,flag=1;
   if(a>b){big= a;small=b;}
   else {big=b;small=a;}
   for(i=1;i<=small;i++)
   {
       method2Counter++;
       if(b%i ==0 && a%i ==0)
       {
           method2Counter++;flag=i;
       }
   }
   return flag;
}

// bool method3(int num) 
// {
//     if (num < 2) 
//     {
//         method3Counter++;
//         return false;
//     }
//     if (num == 2) 
//     {
//         method3Counter++;
//         return true;
//     }
//     int count = 0;
//     for (int i=2;i<num/2;++i) 
//     {
//     if (num % i == 0) 
//     {
//         count++;
//         method3Counter++;
//         break;
//     }
//     else
//         method3Counter++;
//     }
//     if(count > 0)
//         return false;
//     else
//         return true;
// }

int main() 
{
printf("Enter numbers to find gcd of\n");
int x,y;
scanf("%d%d",&x,&y);
// printf("\t\tTime\tTaken\tBy\t\t\n");
// printf("S.No\tInput\tAlgo-1\tAlgo-2\tAlgo-3\tResult\t\tFastest\n\n");

// char result[10];
// for(int i = 0;i<10;i++)
{
    int res = method1(x,y);
    int res2= method2(x,y);
//   //  method2(arr[i]);
//     //method3(arr[i]);
//     //if (method1Counter < method2Counter && method1Counter < method3Counter)
//     //strcpy(result,"algo-1");
//     ///else if (method2Counter < method3Counter )
//     //strcpy(result,"algo-2");
//     //else
//     ///strcpy(result,"algo-3");
//     printf("%d\t%d\t%d\t%d\t%d\t%s\t%s\n",i+1,method1Counter,method2Counter,method3Counter,res,result);
    printf("%d \t %d",res,method1Counter);
    printf("\n%d \t %d",res2,method2Counter);
    resetCounter();
}
}