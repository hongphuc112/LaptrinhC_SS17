#include <stdio.h>
#include <string.h>
#include <ctype.h>

void addString(char *chuoi) {
    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);
}
void reverse(char *chuoi, char *reverseString) {
    int length = strlen(chuoi);
    for (int i = 0; i < length; i++) {
        reverseString[i] = chuoi[length - i - 1];
    }
    reverseString[length] = '\0';
    printf("Chuoi dao nguoc: %s", reverseString);
}
void count(char *chuoi) {
    int count = 0;
    int flag = 0;  
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != ' '){
            if (flag == 0) {
                count++;
                flag = 1;
            }
        } else {
            flag = 0;
        }
    }
    printf("So tu trong chuoi: %d", count);
}
void compare(char *chuoi1, char *chuoi2) {
    int length1 = strlen(chuoi1);
    int length2 = strlen(chuoi2);

    if (length1 < length2) {
        printf("Chuoi 1 ngan hon chuoi 2");
    } else if (length1 > length2) {
        printf("Chuoi 1 dai hon chuoi 2");
    } else {
        printf("Hai chuoi co do dai bang nhau");
    }
}
void capitalLetters(char *chuoi) {
    for (int i = 0; chuoi[i] != '\0'; i++) {
        chuoi[i] = toupper(chuoi[i]);
    }
    printf("Chuoi in hoa: %s", chuoi);
}
void connect(char *chuoi1, char *chuoi2) {
    strcat(chuoi1, chuoi2);
    printf("Chuoi sau khi them: %s", chuoi1);
}

int main() {
    int choose;
    char chuoi1[100], chuoi2[100], reverseString[100];
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choose);
        getchar();

        switch (choose) {
            case 1:{
            	addString(chuoi1);
				break;
			}
            case 2:{
            	reverse(chuoi1, reverseString);
				break;
			}
            case 3:{
            	count(chuoi1);
				break;
			}
            case 4:{
            	printf("Nhap chuoi khac: ");
                fgets(chuoi2, 100, stdin);
                compare(chuoi1, chuoi2);
				break;
			}
            case 5:{
            	capitalLetters(chuoi1);
				break;
			}
            case 6:{
            	printf("Nhap chuoi khac: ");
                fgets(chuoi2, 100, stdin);
                connect(chuoi1, chuoi2);
                break;
			}
            case 7:{
            	printf("Thoat chuong trinh");
				break;
			}
            default:{
            	printf("khong hop le");
				break;
			}
        }
    } while (choose != 7);
    return 0;
}
