#include<stdio.h> 

int main() {

    int mang[] = {1, 2, 3, 4, 5,6,7};  
    int do_dai = sizeof(mang) / sizeof(mang[0]); 
    printf("Các phan tu trong mang la:\n");
    for (int i = 0; i < do_dai; i++) {
        printf("%d\n", mang[i]);
    }
    printf("Do dai cua mang la: %d\n", do_dai);

    return 0;
}
