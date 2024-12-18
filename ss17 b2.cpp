#include<stdio.h>
#include<string.h>
#include<ctype.h>
void addString(char *chuoi);
void showString(char *chuoi);
void countWord(char *chuoi);
void countDigits(char *chuoi);
void specialCharacters(char *chuoi);
int main(){
    int choose;
    char chuoi[100];
    do {
        printf("\n--------------------MENU--------------------\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        fflush(stdin);
        switch (choose) {
            case 1:{
            	addString(chuoi);
				break;
			}
            case 2:{
            	showString(chuoi);
				break;
			}
            case 3:{
            	countWord(chuoi);
				break;
			}
            case 4:{
            	countDigits(chuoi);
				break;
			}
            case 5:{
            	specialCharacters(chuoi);
				break;
			}
            case 6:{
            	printf("Thoat chuong trinh");
				break;
			}
            default:{
            	printf("khong hop le.");
				break;
			}
        }
    } while (choose != 6);

    return 0;
}
void addString(char *chuoi) {
    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);
}
void showString(char *chuoi) {
    printf("%s", chuoi);
}
void countWord(char *chuoi) {
    int count = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            count++;
        }
    }
    printf("So luong chu cai: %d", count);
}
void countDigits(char *chuoi) {
    int count = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isdigit(chuoi[i])) {
            count++;
        }
    }
    printf("So luong chu so: %d", count);
}
void specialCharacters(char *chuoi) {
    int count = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (isalnum(chuoi[i]) == 0 && isspace(chuoi[i]) == 0) {
            count++;
        }
    }
    printf("So luong ky tu dac biet: %d", count);
}
