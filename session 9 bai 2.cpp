#include<stdio.h>
   int main(){
   	int i,n,index,Value;
   	int arr[100];
   	printf("hay nhap so luong phan tu: ");
   	scanf("%d", &n);
   	if ( n>100 || n<0) {
   		printf("phan tu khong hop le\n");
   	}
	printf("nhap phan tu cua mang: \n");
	for (int i = 0; i<n; i++){
		printf("Phan tu %d: ", i);
		scanf("%d", &arr[i]);
	}
	printf("nhap vi tri can sua: ", n - 1);
    scanf("%d", &index);
    while (index < 0 || index >= n) {
        printf("vi tri khong hop le,nhap lai: ");
        scanf("%d",&index);
    }
	printf("nhap gia tri moi: ");
    scanf("%d", &Value);
    arr[index] = Value;
	printf("mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}

