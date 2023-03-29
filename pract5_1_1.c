#include<stdio.h>

struct rectangle
{
    float h,w,ans;

}r;

void input()
{
    printf("enter a height :");
    scanf("%f",&r.h);
    printf("enter a width :");
    scanf("%f",&r.w);
}

void answer()
{
    r.ans= r.h*r.w;
    printf("%f",r.ans);
}


int main()
{
    input();
    answer();
    printf("\n Id : 22DCE046");
}
