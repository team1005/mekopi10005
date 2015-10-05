#include <stdio.h>

int main(){
	int a =12345678;
	printf("Hi!\n");
	printf("a = %d,%x\n",a,a);
	short *p = &a;
	printf("p=%x\n",*p);
	p++;
	printf("p=%x\n",*p);
	*p=100;
	printf("a = %d,%x\n",a,a);
	printf("a[0] = %x\n",p[0]);

	return 0;
}
