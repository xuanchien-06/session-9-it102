#include<stdio.h>
   int main(){
   	int currentlength = 0;
   	int n,value, addindex;
   	int max = 100;
   	
   	printf("nhap so luong mang: ");
   	scanf("%d", &n);
   	if(n>max || n<0){
   		printf("khong hop le, nhap lai: ");
   	
	   }
	printf("nhap cac phan tu cua mang:\n");
	int arr[max];
    for (int i = 0; i < n; i++) {
        printf("phan tu thu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    currentlength = n;
	printf("nhap gia tri muon chen: \n");
	scanf("%d", &value);
	printf("Hay nhap vi tri chen : \n");
	scanf("%d", &addindex);
	if (addindex >= currentlength) {
        arr[addindex] = value;
        currentlength = addindex + 1;
    } else {
        for (int i = currentlength; i > addindex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addindex] = value;
        currentlength++;
    }
     printf("Mang sau khi chen:\n");
    for (int i = 0; i < currentlength; i++) {
        printf("%d ", arr[i]);
    }
    
	return 0;
}

