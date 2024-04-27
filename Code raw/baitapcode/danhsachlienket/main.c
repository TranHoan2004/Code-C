#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct sinhVien
{
    char hoten[100];
    char gioitinh[100];
    int namsinh;
    float dtb;
}sinhVien;

typedef struct node
{
    sinhVien sv;
    struct node *next;
}node;

void in(node* head) {
    if(head==NULL) {
        printf("Danh sach sinh vien rong.");
        return;
    }
    int stt=0;
    printf("%-5s%-20s%-10s%-10s%-10s\n","STT","Ho Ten","Gioi Tinh","Nam Sinh","DTB");
    while(head!=NULL) {
        printf("%-5d%-20s%-10s%-10d%-10.2f\n",stt++,head->sv.hoten,head->sv.gioitinh,head->sv.namsinh,head->sv.dtb);
        head=head->next;
    }
}

node* makeNode(sinhVien sv)
{
    node* newNode=(node*)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void addfirst(node** head, sinhVien sv) {
    node* newNode=makeNode(sv);
    newNode->next=*head;
    *head=newNode;
    return;
}

void addlast(node **head,sinhVien sv)
{
    node *newNode=makeNode(sv);
    if(head==NULL)
    {
        *head=newNode;
        return;
    }
    node *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void scan(sinhVien* sv) {
    fflush(stdin); // Xóa b? d?m tru?c khi nh?p chu?i
    printf("ho ten:");
    fgets(sv->hoten,50,stdin);
    sv->hoten[strcspn(sv->hoten,"\n")]=0;
    printf("gioi tinh:");
    fgets(sv->gioitinh,50,stdin);
    sv->gioitinh[strcspn(sv->gioitinh,"\n")]=0;
    printf("nam sinh:");
    while(scanf("%d",&sv->namsinh)!=1) {
        printf("Nhap sai! Nhap lai nam sinh:");
        fflush(stdin);
    }
    printf("diem trung binh:");
    while(scanf("%f",&sv->dtb)!=1) {
        printf("Nhap sai! Nhap lai diem trung binh:");
        fflush(stdin);
    }
}

int main() {
    node* head=NULL;
    sinhVien sv;
    while(1)
    {
        printf("1.them sinh vien vao dau.\n");
        printf("2.them sinh vien vao cuoi.\n");
        printf("3.in danh sach.\n");
        printf("4.thoat.\n");
        printf("moi nhap lua chon:");
        int choice;
        scanf("%d",&choice);
        system("cls");
        if(choice==4) break;
        else if(choice==1)
        {
            scan(&sv);
            addfirst(&head,sv);
            system("cls");
        }
        else if(choice==2)
        {
            scan(&sv);
            addlast(&head,sv);
            system("cls");
            fflush(stdin);
        }
        else if(choice==3)
        {
            in(head);
        }
        else printf("NHAP SAI!\nMOI NHAP LAI!\n");
    }
    return 0;
}
