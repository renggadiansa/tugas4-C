#include <stdio.h>

int main() {
//    float suhu_celcius, suhu_fahrenheit;
//
//    printf("Masukkan suhu dalam Celcius: ");
//    scanf("%f", &suhu_celcius);
//
//    suhu_fahrenheit = suhu_celcius * 1.8 + 32;
//
//    printf("Suhu dalam Fahrenheit: %.2f\n", suhu_fahrenheit);



//    float gaji_pokok, masa_kerja, tunjangan_istri_suami, tunjangan_anak;
//    int jumlah_anak, masuk_kerja;
//
//    float thr, pajak, bantuan_transport, polis_asuransi, total_pendapatan;
//
//    printf("Masukkan gaji pokok: ");
//    scanf("%f", &gaji_pokok);
//
//    printf("Masukkan masa kerja (tahun): ");
//    scanf("%f", &masa_kerja);
//
//    printf("Apakah memiliki istri atau suami? (1 untuk ya, 0 untuk tidak): ");
//    scanf("%f", &tunjangan_istri_suami);
//
//    printf("Masukkan jumlah anak: ");
//    scanf("%d", &jumlah_anak);
//
//    printf("Masukkan jumlah hari masuk kerja: ");
//    scanf("%d", &masuk_kerja);
//
//    tunjangan_anak = 0.05 * gaji_pokok * jumlah_anak;
//
//    thr = 5000 * masa_kerja;
//
//    pajak = 0.15 * (gaji_pokok + tunjangan_istri_suami + tunjangan_anak);
//
//    bantuan_transport = 3000 * masuk_kerja;
//
//    total_pendapatan = gaji_pokok + tunjangan_istri_suami + tunjangan_anak + thr - pajak + bantuan_transport - 20000;
//
//    printf("Total pendapatan bulanan adalah: %.2f\n", total_pendapatan);


    int jumlah_tiket, jumlah_paket, sisa_tiket, bayar;

    printf("Masukkan Jumlah Tiket : ");

    scanf("%d",&jumlah_tiket);

    jumlah_paket = jumlah_tiket / 3;
    sisa_tiket = jumlah_tiket % 3;

    bayar = jumlah_paket * 100000 + sisa_tiket * 50000;

    printf("\n Total Pembayaran : Rp. %d", bayar);


    float x, result;

    printf("\nMasukkan nilai x: ");
    scanf("%f", &x);

    result = 3 * x * x - 5 * x + 6;

    printf("Hasil evaluasi polynomial: %.2f\n", result);
    return 0;
}
