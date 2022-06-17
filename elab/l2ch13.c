// #include <stdio.h>
// #include <math.h>
// int main()
// {int a,b,c,d,n;
// float p,p1;
// scanf("%d %d %d",&a,&b,&n);
//     p = pow(2,n/2);
// if(n%2==0){
// 	 c = a*p;
// 	 d = b*p;
// 	 c>d?printf("%d",c/d):printf("%d",d/c);

// }
// else{
//  p1 = p/2;
// 	 c = a*p;
// 	 d = b*p1;
// 	  c>d?printf("%d",c/d):printf("%d",d/c);
   
// }
// 	return 0;
// }




#include <stdio.h> 
int main()
{
int a,b,c,d,n;
scanf("%d %d %d",&a,&b,&n);
c=a;
d=b;
for(int i=1;i<=n;i++)
{
if(i%2==1) c=c*2;
else d=d*2;
}
if(c>=d) printf("%d",c/d);
else printf("%d",d/c);
return 0;
}


