#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "danhmuc.h"
int danhmuc() {
	    // Khai bao và khoi tao du lieu sach
    printf("Category of normal goods.\n");
    char tenSach[][50] = {"Lap trinh tu A-Z", "Cam nang cuoc song", "Ehehehehe"};
    char maSoSach[][10] = {"123", "456", "789"};
    int soThuTu[] = {1, 2, 3};
    int soSach = sizeof(tenSach) / sizeof(tenSach[0]);

    // In bang sach
    printf("\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so           Ten san pham binh thuong\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < soSach; i++) {
        printf("%-6d%-18s%s\n", soThuTu[i], maSoSach[i], tenSach[i]);
    }
    printf("-----------------------------------------\n");


    char TenSach[][50] = {"Smartphones", "Tablet", "Laptop"};
    char MaSoSach[][10]= {"441", "442", "443"};
    int SoThuTu[] = {1, 2, 3};
    int SoSach = sizeof(TenSach) / sizeof(TenSach[0]);

    // In bang sách
    printf("Category of electronic devices\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so            Ten thiet bi\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < soSach; i++) {
        printf("%-6d%-18s%s\n", SoThuTu[i], MaSoSach[i], TenSach[i]);
    }
    printf("-----------------------------------------\n");


    char t[][50] = {"Pencils", "Pens", "Rulers"};
    char m[][10] = {"221", "222", "223"};
    int s[] = {1, 2, 3};
    int k = sizeof(t) / sizeof(t[0]);

    // In bang sach
    printf("Category of stationery:\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so            Ten van phong pham\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < k; i++) {
        printf("%-6d%-18s%s\n", s[i], m[i], t[i]);
    }
    printf("-----------------------------------------\n");
}
