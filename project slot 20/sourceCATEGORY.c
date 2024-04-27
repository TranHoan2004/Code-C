#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "category.h"
void normalgoods() {
	    // Khai bao và khoi tao du lieu sach
    char tenSach[][50] = {"Lap trinh tu A-Z", "Cam nang cuoc song", "Ehehehehe"};
    int maSoSach[] = {123, 456, 789};
    int soThuTu[] = {1, 2, 3};
    int soSach = sizeof(tenSach) / sizeof(tenSach[0]);

    // In bang sach
    printf("\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so           Ten san pham binh thuong\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < soSach; i++) {
        printf("%-6d%-18d%s\n", soThuTu[i], maSoSach[i], tenSach[i]);
    }
    printf("-----------------------------------------\n");
}
void edevices() {
	    // Khai bao và khoi tao du lieu sach
    char tenSach[][50] = {"Smartphones", "Tablet", "Laptop"};
    int maSoSach[] = {441, 442, 443};
    int soThuTu[] = {1, 2, 3};
    int soSach = sizeof(tenSach) / sizeof(tenSach[0]);

    // In bang sách
    printf("Category of electronic devices\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so            Ten thiet bi\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < soSach; i++) {
        printf("%-6d%-18d%s\n", soThuTu[i], maSoSach[i], tenSach[i]);
    }
    printf("-----------------------------------------\n");
} 
void stationery() {
		    // Khai bao và khoi tao du lieu sach
    char tenSach[][50] = {"Pencils", "Pens", "Rulers"};
    int maSoSach[] = {221, 222, 223};
    int soThuTu[] = {1, 2, 3};
    int soSach = sizeof(tenSach) / sizeof(tenSach[0]);

    // In bang sach
    printf("Category of stationery:\n");
    printf("-----------------------------------------\n");
    printf("STT   Ma so            Ten van phong pham\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < soSach; i++) {
        printf("%-6d%-18d%s\n", soThuTu[i], maSoSach[i], tenSach[i]);
    }
    printf("-----------------------------------------\n");
}

