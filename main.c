#include <stdio.h>

int main(){
    int Input;
    int Pinjam;
    char Buku[20][20];
    printf("Kamu mau apa : \n1. Pinjam Buku\n2. Lihat apa yang sudah Dipinjam\nPilihan : ");
    scanf("%d", &Input);

    if (Input == 1){
        printf("Berapa barang yang ingin di pinjam : "); 
        scanf(" %d", &Pinjam);

        for (int i = 1; i <= Pinjam; i++){
            printf("Buku ke-%d : ", i);
            scanf(" %s", &Buku[i]);
         }
    
    } else if (Input == 2){
         for (int j = 1; j <= Pinjam; j++){
            printf("\nBuku ke-%d : %s", j, Buku[j]);
         }
    } else {
        while (Input != 1 && Input != 2){
            printf("Input salah! Coba lagi : ");
            scanf("%d ", &Input);
        }
        
    }
   

}