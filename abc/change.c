#include <stdio.h>

int main (){
	int c;
	while((c = getchar()) != EOF){
		if( (c == 'a') || (c == 'c') || (c == 'i')){
			putchar(c + ('A' - 'a'));
		}else{
			putchar(c);
		}
	}
	return 0;
}
