#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhVien1;
    strcpy(sinhVien1.name, "Nguyen Tien Loc");
    sinhVien1.age=18;
    strcpy(sinhVien1.phoneNumber, "0982563826");
    printf("Ten: %s\n", sinhVien1.name);
    printf("Tuoi: %d\n", sinhVien1.age);
    printf("SDT: %s", sinhVien1.phoneNumber);
    return 0;
}
