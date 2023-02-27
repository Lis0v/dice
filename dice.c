#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
	int n, d;
	char *ptr;

	if(argc==1)
		n = 5;
	else
		n = strtol(argv[1], &ptr, 10);

    srand(time(NULL));

    for(int i=0;i<n;i++){
        d = rand() % 6 + 1;
        printf("%d ",d);
    }
	printf("\n");
}
