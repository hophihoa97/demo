#include<stdio.h>
#include <stdlib.h>
int main(void){
	int a[100];
	int n;
        printf("so phan tu cua mang: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
                printf("Gia tri phan tu a[%d]=", i);
                scanf("%d", &a[i]);
        }
}
