#include<stdio.h>
int add(int a,int b)
{return a+b;
}
int sub(int a,int b)
{return a-b;
}
int mul(int a,int b)
{return a*b;
}
int div(int a,int b)
{return a/b;
}
int mod(int a,int b)
{return a/b;
}
void print(int c)
{
printf("%d",c)
}
int main()
{
int a,b,r;
int n;
printf("Enter the two numbers:");
scaf("%d %d",&a,&b);
printf("Enter your choice:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Modulo");switch(n)
{
case 1: r=add(a,b); print(r);
case 2: r=sub(a,b); print(r);
case 3: r=mul(a,b); print(r);
case 4: r=div(a,b); print(r);
case 5: r=mod(a,b); print(r);



}
}
