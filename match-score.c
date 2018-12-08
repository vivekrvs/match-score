/* C- program to generate all possible ways to score n points in basketball match,
on assumptions that one can score 1 or 2 or 3 points at a time
*/
#include <stdio.h>
int sum(int n)
{
    int i,count,r;
    count = 0;
    for (i=1;i<=3;i++)
    {
        r = n-i;
        
        if (r > 0)
        {
        count = count + sum(r);
        }else if (r==0)
        {
        count = count +1 ;
        continue;
        } else 
        {
        return count;
        }
        
    }
    return count;
}
int main()
{
    int a,points;
    points = 5;
    a = sum(points);
    printf("Different way one can score %d points in the match is:%d",a,points);

    return 0;
}