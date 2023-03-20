#include <stdio.h>
#include <stdlib.h>


    void loading() {
    int i;
    char animation[8] = { 'F', 'U', 'C', 'K' , 'B', 'U' , 'E', 'T' };
    printf("Loading \n ");
    for(i=0; i<24; i++) {
        printf("%c \t",animation[i%8]);
        fflush(stdout);
        usleep(150000);
        printf("\b");
    }
}

int main() {
    loading();
    printf("\n BUET Fucked You Successfully!\n");
    return 0;
}
