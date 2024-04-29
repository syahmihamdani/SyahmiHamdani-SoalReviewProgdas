//Nama: Syahmi Hamdani
//NPM: 2306220532

#include <stdio.h>
#include <math.h>

float fungsiF(float x, float y){
    float hasil;

    hasil = (pow(x, 2) * pow(y, 2)) + ((x + y) / (x * y));

    return hasil;
}

int main(void){
    float x, y;

    printf("Masukkan nilai x: ");
    scanf("%f", &x);
    printf("Masukkan nilai y: ");
    scanf("%f", &y);
    printf("Hasil dari f(%.5g, %.5g) adalah %.2f", x, y, fungsiF(x, y));

    return 0;
}