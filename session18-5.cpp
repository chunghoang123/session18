#include<stdio.h>
#include<string.h>
struct Student{
	int id;
	char name[100];
	int age;
	char phone[20];
};
void printStudent(Student student[],int length){
	printf("danh sach sv\n");
	for(int i=0;i<length;i++){
		printf("id: %d-ten: %s-tuoi: %d-dt: %s\n",student[i].id,student[i].name,student[i].age,student[i].phone);
	}
}
int main(){
	int checkId;
	struct Student student[50]={
		{1,"van a",19,"1234567898"},
		{2,"van b",19,"1234567898"},
		{3,"van c",19,"1234567898"},
		{4,"van d",19,"1234567898"},
		{5,"van e",19,"1234567898"},
	};
	int count=5;
	printf("moi nhap id can tim: ");
	scanf("%d",&checkId);
	int index =-1;
	for(int i=0;i<count;i++){
		if(student[i].id ==checkId){
			index=i;
			break;
		}
	}
	if(index==-1){
		printf("ko tim thay id %d",checkId);
	}else{
		printf("tim thay sv ID: %d ,%s, %d, %s",student[index].id,student[index].name,student[index].age,student[index].phone);
		printf("\nnhap ten moi: ");
		getchar();
		fgets(student[index].name,sizeof(student[index].name),stdin);
		student[index].name[strcspn(student[index].name,"\n")] = '\0';
		printf("\nmoi nhap tuoi moi: ");
		scanf("%d",&student[index].age);
	}
	printStudent(student, count);
	return 0;
}

