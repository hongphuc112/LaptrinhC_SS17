#include <stdio.h>

void menu() {
    printf("\n--------------------MENU---------------------\n");
    printf("1. Nhap vao so phan tu va tung phan tu\n");
    printf("2. Hien thi cac phan tu trong mang\n");
    printf("3. Tinh do dai mang\n");
    printf("4. Tinh tong cac phan tu trong mang\n");
    printf("5. Hien thi phan tu lon nhat\n");
    printf("6. Thoat\n");
}

void addItem(int arr[100], int *m) {
    printf("Moi ban nhap so phan tu: ");
    scanf("%d", m);  
    for (int i = 0; i < *m; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

void showItem(int arr[100], int m) {
    printf("So phan tu hien tai la:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");
}

void arraySize(int m) {
    printf("Do dai mang la: %d\n", m);
}

void sumArray(int arr[100], int m) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang: %d\n", sum);
}

void maxArray(int arr[100], int m) {
    int max = arr[0];
    for (int i = 1; i < m; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n", max);
}

int main() {
    int arr[100];
    int choose;
    int m = 0; 
    do {
        menu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        switch (choose) {
            case 1:
                addItem(arr, &m);  
                break;
            case 2:
                showItem(arr, m);
                break;
            case 3:
                arraySize(m);  
                break;
            case 4:
                sumArray(arr, m);  
                break;
            case 5:
                maxArray(arr, m);  
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Khong hop le! Vui long chon lai.\n");
        }
    } while (choose != 6);

    return 0;
}

