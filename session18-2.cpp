#include<stdio.h>
#include<string.h>
int main(){
	 struct SinhVien{
	 	char name[100];
	 	int age;
	 	char phoneNumber[20];
	 };
	 struct SinhVien user; 
	printf("moi ho va ten: ");
	fgets(user.name,sizeof(user.name),stdin);
	printf("moi nhap tuoi: ");
	scanf("%d",&user.age);
	printf("moi nhap so dt: ");
	scanf("%s",&user.phoneNumber);
	printf("ho va ten: %s\n",user.name);
	printf("ho va ten: %d\n",user.age);
	printf("ho va ten: %s\n",user.phoneNumber);
	return 0;
}
