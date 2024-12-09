#include <stdio.h>
long long tinhGiaiThua(int n) {
    long long giaiThua = 1;
    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
        return -1;
    }
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;  
    }
    return giaiThua;
}
int main() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    long long result = tinhGiaiThua(num); 
    if (result != -1) {
        printf("Giai thua cua %d la: %lld\n", num, result);
    }
    return 0;
}

