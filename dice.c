#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
	char *ptr;
	int	d, n = strtol(argv[1], &ptr, 10);
	
	//dodaj warunki TU

    srand(time(NULL));

    for(int i=0;i<n;i++){
        d = rand() % 6 + 1;
        printf("%d ",d);
    }
	printf("\n");
}
