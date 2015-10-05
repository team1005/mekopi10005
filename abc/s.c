#include <stdio.h>

struct A
{
	int x,y;
	char c;
};

static void printa(struct A a)
{
	printf("%d:x = %d, y = %d\n",__LINE__,a.x,a.y);
	a.x = 999;
}

static void printa_p(struct A *a)
{
	printf("%d:x = %d, y = %d\n",__LINE__,a->x,a->y);
//	a->x = 999;
}

int main()
{
	struct A a[5];

	printf("size = %d\n",sizeof(int));
	printf("size = %d\n",sizeof(long));
	printf("size = %d\n",sizeof(long long));
	printf("size = %d\n",sizeof(struct A));
	printf("size = %d\n",sizeof(a));

	int i;
	for(i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		a[i].x = 100*i;
		a[i].y = 200*i;

		printa_p(&a[i]);
		printa_p(a + i);
	}


//	printa(a);
//	printa_p(&a);
//	printa_p(&a);
	
	return 0;
}
