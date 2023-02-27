#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n;

    for(int i=0;i<5;i++){
        n = rand() % 6 + 1;
        printf("%d ",n);
    }
		printf("\n");
    // dziaa
}
