#include <stdio.h>

int main(){
	int arr[100];
	int size,vitri;
	printf("nhap so luong mang: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("nhap gia tri %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n vi tri muon xoa: ");
	scanf("%d",&vitri);
	while(vitri<0 || vitri > size){
		printf("vi tri khong hop le, nhap lai: ");
		scanf("%d",&vitri);
	}
	for(int i=vitri;i<size;i++){
		arr[i]=arr[i+1];
	}
	printf("cac gia tri sau khi xoa: ");
	for(int i=0;i<size-1;i++){
		printf(" %d ",arr[i]);
	}
	return 0;
}

