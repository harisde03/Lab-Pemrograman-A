#include<stdio.h>
#include<string.h>
#include<ctype.h>

// Model Tesla Meggunakan Typedef Struct
typedef struct m {
    char *nama;
    int harga;
    int pesan;
} Model;

// Function Prototypes
void TampilkanModel(Model * data);
void TampilkanPesan(Model * data);
void BeliModel(Model * data, int * beli);
int  Pembayaran(Model * data);
void Enterer();

int main() {
    // Deklarasi Struct Model Tesla dan Pemberian Data
    Model tesla[5];
    tesla[0].nama  = "Model S 2021";
    tesla[0].harga =  81190;
    tesla[1].nama  = "Model 3 2021";
    tesla[1].harga =  38690;
    tesla[2].nama  = "Model X 2021";
    tesla[2].harga =  91190;
    tesla[3].nama  = "Model Y 2021";
    tesla[3].harga =  41190;
    tesla[4].nama  = "Cybertruck 2022";
    tesla[4].harga =  39900;

    // Deklarasi Pesanan Tesla dari 0 Untuk Semuanya.
    for (int i = 0; i <= 5; i++) tesla[i].pesan = 0;

    int pilihan = 0, beli = 0;

    printf("Selamat Datang di Dealer Resmi TESLA!\n");
    
    // Penggunaan do while untuk pengecekan input.
    do {
        printf("\nSilahkan Pilih Salah Satu Menu di Bawah:\n");
        if (!beli) {
            printf("1. Lihat Model dan Harga\n");
            printf("2. Pilih Model dan Beli\n");
            printf("3. Keluar\n");
        } else {
            printf("1. Lihat Pesanan\n");
            printf("2. Pilih Model dan Tambah\n");
            printf("3. Masuk Ke Pembayaran\n");
        }

        do {
            printf("PILIH: ");
            scanf(" %d", &pilihan);
            if (pilihan < 1 || pilihan > 3) {
                printf("Pilihan Salah. Harap Pilih Ulang.\n");
            }
        } while (pilihan < 1 || pilihan > 3);

        if (pilihan == 1 && !beli) {
            TampilkanModel(tesla);
            Enterer();
        } else if (pilihan == 1 && beli) {
            TampilkanPesan(tesla);
            Enterer();
        }
        if (pilihan == 2) BeliModel(tesla, &beli);
        if (pilihan == 3 && beli) Pembayaran(tesla);
    } while (pilihan != 3);

    // Ucapan Terima Kasih apabila Membeli.
    if (beli) {
        printf("\nTerima Kasih Sudah Membeli Tesla di Tempat Kami!\n");
        printf("Selamat Berkendara!\n");
    }
    else {
        printf("\nTerima Kasih Sudah Mampir di Tempat Kami.\n");
    }

    Enterer();

    return 0;
}

// Fungsi Untuk Menampilkan Semua Model Tanpa Pesanan
void TampilkanModel(Model * data) {
    printf("\n+----+------------------+---------+\n");
    printf("| No | Nama Model Tesla |  Harga  |\n");
    printf("+----+------------------+---------+\n");

    // Pengulangan Untuk Setiap Model Tesla dari Struct Model
    for (int i = 0; i < 5; i++) {
        printf("| %d. | %s\t| $ %5d |\n", i+1, data[i].nama, data[i].harga);
    }

    printf("+----+------------------+---------+\n");
}

// Fungsi Untuk Menampilkan Semua Model Dengan Pesanan
void TampilkanPesan(Model * data) {
    printf("\n+----+------------------+---------+---------+\n");
    printf("| No | Nama Model Tesla |  Harga  | Pesanan |\n");
    printf("+----+------------------+---------+---------+\n");

    // Pengulangan Untuk Setiap Model Tesla dari Struct Model
    for (int i = 0; i < 5; i++) {
        printf("| %d. | %s\t| $ %5d | %2d Unit |\n", i+1 , data[i].nama, data[i].harga, data[i].pesan);
    }

    printf("+----+------------------+---------+---------+\n");
}

// Fungsi Untuk Masuk Menu Pembelian
void BeliModel(Model * data, int * beli) {
    int model, jumlah, konfirmasi;
    char pilih;
    TampilkanModel(data);

    // Penggunaan do while untuk pengecekan input.
    do {
        model  = 5;
        jumlah = 0;

        printf("Pilih Nomor 6 Untuk Kembali\n");

        do {
            printf("Pilih Nomor Model yang Ingin Anda Beli: ");
            scanf(" %d", &model);
            model--;
            if (model < 0 || model > 5) printf("Maaf, Input Anda Salah. Mohon Dicoba Lagi.\n");
        } while (model < 0 || model > 5);

        if (model == 5) break;

        do {
            printf("\nAnda Memilih %s.\n", data[model].nama);
            if (data[model].pesan > 0) {
                printf("Jumlah Unit yang Akan Diganti         : ");
                scanf(" %d", &jumlah);
                if (jumlah == 0) break;
            } else {
                printf("Jumlah Unit yang Ingin Anda Beli      : ");
                scanf(" %d", &jumlah);
                if (jumlah <  1) printf("Maaf, Input Minimal 1. Mohon Dicoba Lagi.\n");
                if (jumlah > 99) printf("Maaf, Permintaan Anda Melebihi Stok Yang Kami Punya.\n");
            }
            if (jumlah > 3 && jumlah <= 99) {
                printf("Apakah anda yakin ingin membeli lebih dari 3 unit?\n");
                printf("Apabila Benar, Harap Ketik Ulang\nJumlah Unit yang Ingin Anda Beli[%2d]  : ", jumlah);
                scanf(" %d", &konfirmasi);
                if (konfirmasi == jumlah) break;
                else {
                    printf("Harap Input Dengan Benar.\n");
                    jumlah = 0;
                    continue;
                }
            }
        } while (jumlah < 1 || jumlah > 99);

        // Melakukan perubahan pada pesanan sesuai nomor model.
        data[model].pesan = jumlah;

        // Menampilkan Tabel Pesanan.
        TampilkanPesan(data);

        // Konfirmasi apabila ada perubahan.
        do {
            printf("Ingin Menambah Model Lain? [y/n]: ");
            scanf(" %c", &pilih);
            pilih = tolower(pilih);
            if (pilih != 'y' && pilih != 'n') printf("Harap Masukkan 'y' Untuk Yes atau 'n' Untuk No.\n");
        } while (pilih != 'y' && pilih != 'n');

    } while (pilih != 'n');

    *beli = 5;

    // Pengecekan apabila user membeli dengan melihat pesanan per model.
    for (int i = 0; i < 5; i++) {
        if (data[i].pesan == 0) *beli -= 1;
    }
}

// Fungsi Untuk Masuk Menu Pembayaran
int Pembayaran(Model * data) {
    int biaya_total = 0, biaya_sisa, uang;
    char pembeli[25];

    // Pengecekan Biaya Total dari jumlah pesanan per model.
    for (int i = 0; i < 5; i++) {
        if (data[i].pesan == 0) continue;
        biaya_total += data[i].harga * data[i].pesan;
    }

    biaya_sisa = biaya_total;

    // Meminta Input Uang dalam USD.
    printf("\nTotal Belanjaan        : $ %d\n", biaya_total);
    printf("Masukkan Uang Anda     : $ ");
    scanf(" %d", &uang);

    // Meminta Input Tambahan apabila kurang.
    biaya_sisa -= uang;
    while (biaya_sisa > 0) {
        printf("Uang Anda Kurang       : $ %d\n", biaya_sisa);
        printf("Masukkan Uang Tambahan : $ ");
        scanf(" %d", &uang);
        biaya_sisa -= uang;
    }

    // Cetak kembalian apabila ada.
    if (biaya_sisa < 0) {
        printf("Kembalian Anda         : $ %d\n", biaya_sisa * -1);
    } else if (biaya_sisa == 0) {
        printf("Uang Anda Sudah Pas!\n");
    }

    Enterer();

    // Meminta nama untuk cetak kuitansi. (sebenarnya batas 25 huruf)
    printf("Mohon Input Nama Anda  : ");
    scanf(" %[^\n]s", pembeli);

    printf("\n+----+--------------------------------------------------+\n");
    printf("| Tc |                K U I T A N S I                   |\n");
    printf("|----+--------------------------------------------------+\n");
    printf("|    | Nomor : 59                                       |\n");
    printf("|    | Sudah Terima Dari : %s", pembeli);

    // Logika Penempatan Tutup Tabel sesuai panjang nama.
    if (strlen(pembeli) > 20)
        printf("\t|\n");
    else if (strlen(pembeli) > 12)
        printf("\t\t|\n");
    else if (strlen(pembeli) > 4)
        printf("\t\t\t|\n");
    else
        printf("\t\t\t\t|\n");

    printf("|    | Uang Sebesar      : $ %d\t\t\t|\n"    , biaya_total);
    printf("|    | Untuk Pembayaran  :                              |\n");

    // Mencetak setiap pesanan per model.
    for (int i = 0; i < 5; i++) {
        if (data[i].pesan == 0) continue;
        printf("|    | + %2d Unit %s   \t\t\t|\n", data[i].pesan, data[i].nama);
    }

    printf("+----+--------------------------------------------------+\n");

    Enterer();

    return 0;
}

// Fungsi Untuk Konfirmasi dengan menekan [Enter].
void Enterer() {
    printf("\nTekan ENTER Untuk Melanjutkan...");
    while(getchar() != '\n');
    getchar();
}

