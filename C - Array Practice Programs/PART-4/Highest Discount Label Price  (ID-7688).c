/*Highest Discount Label Price

The program must accept label price and discounted price as two arrays of size N as the input respectively. The program must print the
label price of the item which has the highest discount percentage as the output. If two or more label price has the same highest discount
then consider the first label price as the output.

Boundary Condition(s):
1 <= N <= 1000

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).
The third line contains N integers separated by space(s).

Output Format:
The first line contains the label price.

Example Input/Output 1:
Input:
5
100 50 120 200 240
90 45 100 150 200

Output:
200

Explanation:
The label price is 100 and the discounted price is 90. Here the discount is 10%.
The label price is 50 and the discounted price is 45. Here the discount is 10%.
The label price is 120 and the discounted price is 100. Here the discount is 16.67%.
The label price is 200 and the discounted price is 150. Here the discount is 25%.
The label price is 240 and the discounted price is 200. Here the discount is 16.67%.
Here the highest discount is 25% and their label price is 200.
Hence the output is 200

Example Input/Output 2:
Input:
4
900 1200 500 200
545 660 250 120 

Output:
500       */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,ans;
scanf("%d ",&n);
float m=0;
int a[n],b[n];
for(int i=0;i<n;i++)
{
    scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
    scanf("%d ",&b[i]);
}
for(int i=0;i<n;i++)
{
    float dis=((float)(a[i]-b[i])/(float)a[i])*100.0;
    if(m<dis)
    {
        m=dis;
        ans=a[i];
    }
}
printf("%d ",ans);
}
