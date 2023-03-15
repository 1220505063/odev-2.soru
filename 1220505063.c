#include <stdio.h>

int enbuyukeleman(int dizi[], int boyut) {
    int enbuyuk = dizi[0];
    for (int i = 1; i < boyut; i++) {
        if (dizi[i] > enbuyuk) {
            enbuyuk = dizi[i];
        }
    }
    return enbuyuk;
}

int main() {
    int dizi[] = {21, 13 ,37 ,65 ,43};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int enbuyuk = enbuyukeleman(dizi, boyut);
    printf("En Buyuk Eleman: %d", enbuyuk);
    return 0;
}