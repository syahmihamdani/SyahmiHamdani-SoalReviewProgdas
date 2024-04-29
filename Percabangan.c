//Nama: Syahmi Hamdani
//NPM: 2306220532

#include <stdio.h>

int main(void){

    int nilai;

    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);

    switch(nilai){
        case 85 ... 100:
            printf("A");
            break;
        case 80 ... 84:
            printf("A-");
            break;
        case 75 ... 79:
            printf("B+");
            break;
        case 70 ... 74:
            printf("B");
            break;
        case 65 ... 69:
            printf("B-");
            break;
        case 60 ... 64:
            printf("C+");
            break;
        case 55 ... 59:
            printf("C");
            break;
        case 50 ... 54:
            printf("C-");
            break;
        case 40 ... 49:
            printf("D");
            break;
        case 0 ... 39:
            printf("E");
            break;
        default:
            printf("Nilai tidak valid");
            break;
    }

    return 0;
}