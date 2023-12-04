#include <stdio.h>
#include <stdlib.h>

int main() {
    float no1, no2, no3, result;
    char opr1, opr2;

    printf("Masukkan perhitungan aritmatika 3 angka (format contoh: 1+4*3): ");
    scanf("%f %c %f %c %f", &no1, &opr1, &no2, &opr2, &no3);

    // prioritas operator
    if (opr2 == '*' || opr2 == '/') {
        // Hitung dengan operator prioritas tinggi dahulu
        if (opr2 == '*') {
            no2 = no2 * no3;
        } else {
            no2 = no2 / no3;
        }
        // Hitung sisa
        if (opr1 == '+') {
            result = no1 + no2;
        } else {
            result = no1 - no2;
        }
    } else {
        //  opr1 adalah '*' atau '/'
        if (opr1 == '*') {
            no1 = no1 * no2;
        } else if (opr1 == '/') {
            no1 = no1 / no2;
        } else {
            // opr1 adalah '+' atau '-'
            if (opr2 == '+') {
                no2 = no2 + no3;
            } else {
                no2 = no2 - no3;
            }
            // Hitung sisa 
            if (opr1 == '+') {
                result = no1 + no2;
            } else {
                result = no1 - no2;
            }

            printf("Hasil: %.2f\n", result);
            return 0;
        }
        // Hitung sisa 
        if (opr2 == '+') {
            result = no1 + no3;
        } else {
            result = no1 - no3;
        }
    }
    printf("Hasil: %.2f\n", result);
    return 0;
}
