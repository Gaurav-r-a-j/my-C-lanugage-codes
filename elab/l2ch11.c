#include <stdio.h>
int main()
{int n,k,x,y;
int x1,x2,x3,x4,y1,y2,y3,y4;
scanf("%d %d %d %d",&n,&k,&x,&y);
x1=x+n-x;
y1=y+n-x;
x2=y1;
y2=x1;
x3=x2-x2;
y3=y2-x2;
x4=y3;
y4=x3;
if(x1==y1)
printf("%d %d",x1,y1);
else
{ if(k%4==1) printf("%d %d",x1,y1);
else if (k%4==2) printf("%d %d",x2,y2);
else if (k%4==3) printf("%d %d",x3,y3);
else {printf("%d %d",x4,y4);}
}
return 0;
    
}