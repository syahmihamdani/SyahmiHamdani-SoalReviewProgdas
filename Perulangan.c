//Nama: Syahmi Hamdani
//NPM: 2306220532

#include <stdio.h>

int main(void){
    int tinggi, i, j;

    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &tinggi);

    for(i=0;i<tinggi;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}