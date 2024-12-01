#include<stdio.h>

int main(){

	int size,luachon,vitri,nhapso,n;
	int arr[100];		
	printf("MENU\n");
	printf("1.nhap vao mang\n");
	printf("2.hien thi mang\n");
	printf("3.them phan tu\n");
	printf("4.sua phan tu\n");
	printf("5.xoa phan tu\n");
	printf("6.thoat\n");
	scanf("%d",&luachon);
	switch(luachon){
		case 1:
		printf("nhap phan tu cua mang: ");
		scanf("%d",&size);
		for(int i=0;i<size;i++){
			printf("arr[%d]: ",i);
			scanf("%d",&arr[i]);
		} 
		break;
		case 2: 
		for(int i=0;i<size;i++){
			printf(" %d ",arr[i]);
		}
		break;	
		case 3:
		printf("nhap gia tri muon them: ");
		scanf("%d",&nhapso);
		printf("vi tri them: ");
		scanf("%d",&vitri);
		for(int i=size;i>vitri;i--){
			arr[i]=arr[i-1];
		}
		arr[vitri]=nhapso;
		for(int i=0;i<size+1;i++){
			printf(" %d ",arr[i]);
		}
		break;
        case 4:
		printf("nhap gia tri muon sua: ");
		scanf("%d",&nhapso);
		printf("nhap vi tri can sua: ");
		scanf("%d",&vitri);
		arr[vitri]=nhapso;
		for(int i=0;i<size+1;i++){
			printf(" %d ",arr[i]);
		}
		break;
		case 5:
		printf("nhap vi tri can xoa: ");
		scanf("%d",&vitri);
		for(int i=vitri;i<size;i++){
			arr[i]=arr[i+1];
		}
		for(int i=0;i<size-1;i++){
			printf(" %d ",arr[i]);
		}
		break;
		case 6:
		printf("\nKet thu chuong trinh");
		break;					
		}
	return 0;
}
