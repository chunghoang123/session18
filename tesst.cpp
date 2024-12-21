#include<stdio.h>
#include<string.h>
int main(){
	struct Dish {
	int id;
	char name[100];
	double price;
	};
	struct Dish menu[100]= {
		{ 1,"pho bo(dac biet)",60},
		{ 2,"pho ga",40},
		{ 3,"pho vit",35},
		{ 4,"pho ngan",45},
		{ 5,"pho trau",50},
	};
	int choice;
	int menuLength=5;
	do{
		printf("menu\n");
		printf("1. In ra cac phan tu co trong menu mon an theo rang 1.menber.value\n");
		printf("2. Them mot phan tu vao vi tri chi dinh\n");
		printf("3. Sua mot phan tu o vi tri chi dinh\n");
		printf("4. Xoa mot phan tu o vi tri chi dinh\n");
		printf("5. Sap xep cac phan tu (khi lua chon menu cha thi ra menu con)()giam dan theo price\n");
		printf("6. Tim kiem phan tu theo name nhap vao(tim kiem tuyen tinh)\n");
		printf("7. Thoat\n");
		printf("moi nhap tu 1-7: ");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1:{
				printf("menu quan:\n");
				for(int i=0;i<menuLength;i++){
					printf("id: %d; ten: %s; gia: %.2f\n",menu[i].id,menu[i].name,menu[i].price);
				}
				break;
			}
			case 2:{
				int pos;
				struct Dish newMenu;
				printf("menu\n");
				for(int i=0;i<menuLength;i++){
					printf("id: %d; ten: %s; gia: %.2f\n",menu[i].id,menu[i].name,menu[i].price);
				}
				printf("moi nhap vi tri them mon moi: ");
				scanf("%d",&pos);
				getchar();
				if(pos<1||pos>menuLength+1){
					printf("vi tri ko hop len");
					break;
				}else{
					printf("moi nhap mon an moi: \n");
					fgets(newMenu.name, sizeof(newMenu.name), stdin);
					newMenu.name[strcspn(newMenu.name,"\n")]='\0';
					printf("moi nhap gia tien mon an moi: ");
					scanf("%lf",&newMenu.price);
					getchar();
					newMenu.id=menuLength+1;
					for(int i=menuLength;i>=pos;i--){
						menu[i]=menu[i-1];
					}
					menu[pos-1]=newMenu;
					menuLength++;
					printf("menu sau khi them\n");
					for(int i=0;i<menuLength;i++){
						printf("id: %d; ten: %s; gia: %.2f\n",menu[i].id,menu[i].name,menu[i].price);
					}	
				}			
				break;
			case 3:{
				int suaId;
				printf("moi chon ID muon sua: ");
				scanf("%d",&suaId);
				getchar();
				if(suaId < 1|| suaId > menuLength){
					printf("sai Id");
				}else{
					printf("moi nhap ten cho mon: \n");
					fgets(menu[suaId-1].name, sizeof(menu[suaId-1].name), stdin);
					menu[suaId-1].name[strcspn(menu[suaId-1].name,"\n")]='\0';
					printf("moi nhap gia tien mon an : ");
					scanf("%lf",&menu[suaId-1].price);
					printf("menu sau khi sua\n");
					for(int i=0;i<menuLength;i++){
						printf("id: %d; ten: %s; gia: %.2f\n",menu[i].id,menu[i].name,menu[i].price);
					}
				}
				
				break;
				}
			case 4:{
				printf("moi chon vi tri can xoa(0-%d): ",menuLength-1);
				scanf("%d",&pos);
				getchar();
				if(pos>1&&pos>=menuLength+1){
					printf("sai vi tri");
				}else{
					
					for(int i=pos;i<menuLength-1;i++){
						menu[i]=menu[i+1];
					}
					menuLength--;
					printf("menu sau khi xoa \n");
					for(int i=0;i<menuLength;i++){
					printf("id: %d; ten: %s; gia: %.2f\n",menu[i].id,menu[i].name,menu[i].price);
					}
				}
				break;
				}
			case 5:{
				for(int i=0;i<menuLength-1;i++){
					for(int j=i+1;j<menuLength;j++){
						if(menu[i].price<menu[j].price){
							struct Dish temp=menu[i];
							menu[i]=menu[j];
							menu[j]=temp;
						}
					}
				}
				printf("menu sau khi sap xep\n");
					for(int i=0;i<menuLength;i++){
					printf("id: %d; ten: %s; gia: %.2f\n",menu[i].id,menu[i].name,menu[i].price);
					}
				break;
				}
			case 6:{
				char tkName[100];
				printf("moi nhap ten mon can tim: \n");
				fgets(tkName, sizeof(tkName), stdin);
				tkName[strcspn(tkName,"\n")]='\0';
				int count=0;
				for(int i=0;i<menuLength;i++){
					if(strcmp(menu[i].name,tkName)==0){
						printf("id: %d; ten: %s; gia: %.2f\n",menu[i].id,menu[i].name,menu[i].price);
						count=1;
						break;
					}
				}
				if(!count){
					printf("khong tim thay mon ");
				}
				break;
				}
			case 7:{
				printf("thoat chuong trinh\n");
				break;
				default:{
					printf("sai lua chon");
					break;
				}
				
				break;
				}
			}
		}
	}while(choice!=7);
	
	
	
	return 0;
}

