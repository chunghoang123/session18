#include<stdio.h>
#include<string.h>
int main(){
	 struct SinhVien{
	 	char name[100];
	 	int age;
	 	char phoneNumber[20];
	 };
	 struct SinhVien user[5];
	 for(int i=0 ; i<5 ; i++){
	 	printf("nhap thong tin cho sinh vien thu %d:\n",i+1);
		printf("nhap ho va ten: ");
		getchar();
		fgets(user[i].name,sizeof(user[i].name),stdin);
		user[i].name[strcspn(user[i].name, "\n")]='\0';
		printf("nhap tuoi: ");
		scanf("%d",&user[i].age);
		printf("nhap so dt: ");
		getchar();
		fgets(user[i].phoneNumber,sizeof(user[i].phoneNumber),stdin);
		user[i].phoneNumber[strcspn(user[i].phoneNumber, "\n")]='\0';	 
	 }
	 printf("\n");
	 for(int i=0;i<5;i++){
	 	printf("sinh vien thu: %d\n",i+1);
	 	printf("ho va ten: %s\n",user[i].name);
	 	printf("tuoi: %d\n",user[i].age);
	 	printf("so dien thoai: %s\n",user[i].phoneNumber);
	 }
	return 0;
}
