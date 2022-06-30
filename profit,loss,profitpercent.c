#include<stdio.h>
main()
{
	int sp,cp,p,l;
	printf("enter two values");
	scanf("%d%d",&sp,&cp);
	p=sp-cp;
	l=cp-sp;
	float pp=(p*100)/cp;
	printf("p=%d,l=%d,pp=%f",p,l,pp);
}
