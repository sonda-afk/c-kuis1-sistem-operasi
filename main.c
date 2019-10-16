// Library
#include "header.h"

// Driver Code
int main(){

    // String nama file
    char fileName[100];

    // Var untuk menampung masukan
    char c;
    char s[maxsize];

    // Status menu
    int stat = 1;

    // Input nama file
    printf("Silahkan input nama file : ");
    scanf("%s", &fileName);


    while(stat == 1){

        // Menu
        printf("Pilih Menu :\n");
        printf("1. Mencari jumlah kata berdasarkan karakter masukan\n");
        printf("2. Mencari jumlah kata berdasarkan kata masukan\n");
        printf("3. Mencari jumlah huruf vokal\n");
        printf("4. Mencari jumlah huruf konsonan\n");
        printf("5. Exit\n");
        scanf("%d", &menu);

        printf("\n====================\n\n");

        // Jika memilih menu pertama
        if(menu == 1){
        
            // Input karakter yang dicari
            printf("Input karakter : ");
            scanf(" %c", &c);
            printf("\n");

            // Proses
            readFile(fileName, c, s);
            
            printf("\n====================\n\n");    
        }

        // Jika memilih menu kedua
        else if(menu == 2){

            // Input kata yang dicari
            printf("Input kata : ");
            scanf("%s", &s);
            printf("\n");

            // Proses
            readFile(fileName, c, s);
            
            printf("\n====================\n\n");
        }

        // Jika memilih menu ketiga
        else if(menu == 3){
            
            printf("\n");

            // Proses
            readFile(fileName, c, s);
            
            printf("\n====================\n\n");
        }

        // Jika memilih menu keempat
        else if(menu == 4){

            printf("\n");

            // Proses
            readFile(fileName, c, s);
            
            printf("\n====================\n\n");
        }

        // Jika memilih menu kelima
        else if(menu == 5){

            // Keluar
            stat = 0;
        }
    }
    
    return 0;
}