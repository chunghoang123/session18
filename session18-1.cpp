#include<stdio.h>
int main(){
	 struct SinhVien{
	 	char name[100];
	 	int age;
	 	char phoneNumber[20];
	 };
	 struct SinhVien user = {"Hoang Van Chung",19,"0847140305"};
	printf("ho va ten: %s\n",user.name);
	printf("ho va ten: %d\n",user.age);
	printf("ho va ten: %s\n",user.phoneNumber);
	return 0;
}
