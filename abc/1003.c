#include <stdio.h>

int main (){
	int c,d;

	while((c = getchar()) != EOF){
		
		if(c == ' '&&c != d){
			printf("\n");
		}
		
		if(c != ' '){
			if((c < '0'||c > '9')&&(d > '0'&&d < '9')&&c != '\n'){
				printf("\n");
			}
			putchar(c);
		}
		
		d = c;
	}
	return 0;
}
