#include <stdio.h>

int main(){
	int arr[100];
	int size,vitri,thaythe;
	
	printf("nhap so luong phan tu: ");
	scanf("%d",&size);
	while(size>100||size<0){
		printf("khong hop le, nhap lai: ");
		scanf("%d",&size);
	}
	for(int i=0;i<=size-1;i++){
		printf("phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n nhap gia tri muon them : ");
	scanf("%d",&thaythe);
	printf("nhap vi tri ban muon them : ",size);
	scanf("%d",&vitri);
	while(vitri<0 || vitri > size){
		printf("vi tri khong hop le, nhap lai vi tri: ");
		scanf("%d",&vitri);
	}
	for(int i=size;i>vitri;i--){
		arr[i]=arr[i-1];
	}
	arr[vitri]=thaythe;
	printf("mang sau khi them phan tu: ");
	for(int i=0;i<size+1;i++){
		printf(" %d ",arr[i]);
	}
	return 0;
}
