#include <math.h>
#include <stdio.h>
#include <string.h>

int method1Counter =0;
int method2Counter =0;
int method3Counter =0;

void fastest()
{
    if(method1Counter<method2Counter && method1Counter<method3Counter)
    {
        printf("The fastest method is Euclid's Algorithm\n");
    }
    else if(method2Counter<method1Counter && method2Counter<method3Counter)
    {
        printf("The fastest method is Conscecutive Integer Checking Algorithm\n");
    }
    else if(method3Counter<method1Counter && method3Counter<method2Counter)
    {
        printf("The fastest method is Sieve of Eratosthenes algorithm \n");
    }
    else
    {
        printf("NONE\n");
    }

    void resetCounter()
    {
        method1Counter =0;
        method2Counter =0;
        method3Counter =0;
    }

    int GCD1(int x, int y)
    {
        int remainder = 0;
        while(y!=0)
        {
            method1Counter++;
            remainder = x%y;
            x = y;
            y = remainder;
        }
        return x;
    }

    int GCD2(int x, int y)
    {
        method2Counter++;
        int t = x<y?x:y;
        while(t>0)
        {
            method2Counter++;
            if(x%t==0 && y%t==0)
            {
                method2Counter++;
                return t;
            }
            else
            t--;
        }
    }

    int primefactors(int num, int arr[])
    {
        int Count, i=2 ndx = 0,j;
        method3Counter++;
        while(i<=sqrt(num))
        {
            method3Counter++;
            Count=0;
              if(num%i==0)
              {
                  method3Counter++;
                  j=1;
                  while(j<=i)
                  {
                      if(i%j==0)
                      {
                          method3Counter++;
                          Count++;
                      }
                      j++;
                      method3Counter++;
                  }
                  if(Count==2)
                  {
                      arr[ndx] = i;
                      method3Counter++;
                      ndx++;
                  }
              }
              i++;
        }
        return ndx;
    }
}

int GCD3(int x, int y)
{
    int arr_x[100], arr_y[100];
    int a=primefactors(x,arr_x), b=primefactors(y,arr_y);
    method3Counter++;
    int prod = 1;
    for(int i=0;i<a;i++)
      for(int j=0;j<b;j++)
        if(arr_x[i]==arr_y[j])
        {
            method3Counter++;
            prod = prod*arr_x[i];
            arr_y[j] = 0;
            break;
        }
        return prod;
}

int main()
{
    int x,y;
    printf("\t\t\t\t\tTime\ttaken\tBy\t\t\n");
    printf("\t\t\t|---------------------------|\n");
    printf("S.No\tInput\t\tEuclid's Algorithm\tConscecutive Integer method\tSieve of Eratosthenes algorithm\tResult\t\tFastest\n\n");

    x = 52312;
    y = 23123;
    int result = GCD1(x,y);
    GCD2(x,y);
    GCD3(x,y);
    printf("1\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",x,method1Counter,method2Counter,method3Counter,result);
    fastest();
    printf("\n");
    resetCounter();

    x = 128;
    y = 42412;
    result = GCD1(x,y);
    GCD2(x,y);
    GCD3(x,y);
    printf("2\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",x,method1Counter,method2Counter,method3Counter,result);
    fastest();
    printf("\n");
    resetCounter();

    y = 128;
    x = 42412;
    result = GCD1(x,y);
    GCD2(x,y);
    GCD3(x,y);
    printf("3\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",x,method1Counter,method2Counter,method3Counter,result);
    fastest();
    printf("\n");
    resetCounter();

    x = 14;
    y = 19;
    result = GCD1(x,y);
    GCD2(x,y);
    GCD3(x,y);
    printf("4\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",x,method1Counter,method2Counter,method3Counter,result);
    fastest();
    printf("\n");
    resetCounter();

    y = 43212;
    x= 43212;
    result = GCD1(x,y);
    GCD2(x,y);
    GCD3(x,y);
    printf("5\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",x,method1Counter,method2Counter,method3Counter,result);
    fastest();
    printf("\n");
    resetCounter();
    return 0;
}
    