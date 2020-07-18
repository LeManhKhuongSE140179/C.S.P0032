/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: DELL
 *
 * Created on May 20, 2020, 1:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int NhapN() {
    int result = 0;
    char string[100];
    char* buffer;
    do {
        printf("Input a number: ");
        scanf("%s", &string);
        result = (int) strtol(string, &buffer, 10);
        if (result == 0)
            printf("Nhap sai. Moi nhap lai \n");
    } while (result == 0);
    return result;
}

int TinhTong(int n) {
    int s = 0;
    while (n != 0) {
        s = s + abs(n % 10);
        n = n / 10;
    }
    return s;
}

int main(int argc, char** argv) {
    do {
        int n = NhapN();
        printf("Tong cac so tu nhien la: %d", TinhTong(n));
        getchar();
        printf("\nNhap phim bat ki de tiep tuc\n");
    } while (getchar() != 27);
    return 0;
}