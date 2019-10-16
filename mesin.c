// Library
#include "header.h"

// Prosedur proses
void readFile(char fileName[], char c, char s[]){

    // Mendeklarasi variabel n dan m sebagai jumlah data dengan nol
    n = 0;
    m = 0;
    
    // Status found karakter yang dimaksud
    int found;

    // Temporary var
    char temp[maxsize];

    // Membuat tipe data FILE 
    FILE *fdata;

    // Membuka file dengan mode read
    fdata = fopen(fileName, "r");

    // Jika tidak ada nama file dalam direktori
    if(fdata == NULL){
        printf("Tidak ada file dalam direktori.\n");
    }

    // Jika ada file yang dimaksud dalam direktori
    else {

        // Proses membaca file
        do{
            // Membaca file
            fscanf(fdata, "%s", &str);
            strcpy(temp, str);

            // Jika memilih menu pertama
            if(menu == 1){

                // Inisialisasi
                found = 0;

                // Proses mencari karakter
                for(i = 0; i < strlen(temp); i++){
                    if(temp[i] == c){
                        found = 1;
                    }
                }

                // Jika ditemukan, maka jumlah bertamabah
                if(found == 1){
                    m = m + 1;
                }
            }

            // Jika memilih menu kedua
            else if(menu == 2){

                // Komparasi
                if(strcmp(temp, s) == 0){
                    m = m + 1;
                }
            }

            // Jika memilih menu ketiga
            else if(menu == 3){

                // Proses mencari huruf vokal
                for(i = 0; i < strlen(temp); i++){
                    if((temp[i] == 'a') || (temp[i] == 'A') || (temp[i] == 'i') || (temp[i] == 'I') || (temp[i] == 'u') || (temp[i] == 'U') || (temp[i] == 'e') || (temp[i] == 'E') || (temp[i] == 'o') || (temp[i]) == 'O'){
                        m = m + 1;
                    }
                }
            }

            // Jika memilih menu keempat
            else {

                // Proses mencari huruf konsonan
                for(i = 0; i < strlen(temp); i++){
                    if((temp[i] != 'a') && (temp[i] != 'A') && (temp[i] != 'i') && (temp[i] != 'I') && (temp[i] != 'u') && (temp[i] != 'U') && (temp[i] != 'e') && (temp[i] != 'E') && (temp[i] != 'o') && (temp[i]) != 'O'){
                        m = m + 1;
                    }
                }
            }


            n = n + 1;
        }
        // Loop selama belum enf of file
        while(fgetc(fdata) != EOF);
        
        // Output menu pertama
        if(menu == 1){
            printf("Jumlah kata yang mengandung karakter '%c' : %d\n", c, m);
        }
        // Output menu kedua
        else if(menu == 2){
            printf("Jumlah kata masukan dalam file : %d\n", m);
        }
        // Output menu ketiga
        else if(menu == 3){
            printf("Jumlah huruf vokal dalam file : %d\n", m);
        }
        // Output menu keempat
        else {
            printf("Jumlah huruf konsonan dalam file : %d\n", m);
        }

        // Output jumlah kata
        printf("Jumlah Kata : %d\n", n);
    }

    // Menutup file
    fclose(fdata);
}