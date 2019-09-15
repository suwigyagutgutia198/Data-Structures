#include<stdio.h>
#include<stdlib.h>
void append();
void display();
void add_began();
void add_loc();
void del_began();
void del_loc();
int length();
void swap();
void reverse();
struct node{
int data;
struct node *link;
};
struct node *root=NULL;



/*
void main(){
append();
append();
append();
append();
display();
printf("Enter at begining. \n");
add_began();
printf("\n");
display();
add_loc();
display();
printf("\n");
printf("Delete at begining. \n");
del_began();
printf("\n");
display();
del_loc();
printf("\n");
display;
printf("\n");
printf("Length of the link list is : %d",length());
printf("\n");
display();
printf("\n");
swap();
display();
reverse();
printf("\n");
display();
printf("\n");
}
*/
int main()      //main() starts
{
        int choice;
        while(1){
                printf("\n***SINGLE LINKED LIST OPERATIONS:****\n");
                printf("\n                MENU                             \n");
                printf("---------------------------------------\n");
                printf("\n 1.Append     \n");
                printf("\n 2.Display    \n");
                printf("\n 3.Insert at the beginning    \n");
                printf("\n 4.Swap  \n");
                printf("\n 5.Insert at specified position       \n");
                printf("\n 6.Delete from beginning      \n");
                printf("\n 7.Reverse       \n");
                printf("\n 8.Delete from specified position     \n");
                printf("\n 9.Exit       \n");
                printf("\n--------------------------------------\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        append();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        add_began();
                                        break;
                        case 4:
                                        swap();
                                        break;
                        case 5:
                                        add_loc();
                                        break;
                        case 6:
                                        del_began();
                                        break;
                        case 7:
                                        reverse();
                                        break;
                        case 8:
                                        del_loc();
                                        break;
                        case 9:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }//end of switch()
        }
        return 0;
}//end of main()

void append(){
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
printf("Enter the data :");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL){
root=temp;
}
else{
struct node *p=root;
while(p->link !=NULL){
p=p->link;
}
p->link=temp;
}
}

void display(){
struct node *p=root;
while(p != NULL){
printf("%d ==>",p->data);
p=p->link;
}
}

void add_began(){
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
printf("Enter the data :");
scanf("%d",&temp->data);
temp->link=root;
root=temp;
}
int length(){
int c=0;
struct node *p=root;
while(p !=NULL){
c++;
p=p->link;
}
return c;
}
void add_loc(){
int a,i=1;
struct node *temp,*p=root;
temp = (struct node*)malloc(sizeof(struct node));
printf("Enter the location :");
scanf("%d",&a);
printf("Enter the data :");
scanf("%d",&temp->data);
if(a<=length()){
while(i<a-1){
p=p->link;
i++;
}
temp->link=p->link;
p->link=temp;
}
else{
printf("Location does not exist.");
}
}

void del_began(){
struct node *temp=root;
root=root->link;
temp->link=NULL;
free(temp);
}

void del_loc(){
int i=1,a;
struct node *p=root,*q;
printf("Enter the loc to delete :");
scanf("%d",&a);
if(a<=length()){
while(i<a-1){
p=p->link;
i++;
}
q=p->link;
p->link=q->link;
q->link=NULL;
free(q);
}
else{
printf("Location does not exist.");
}
}

void swap(){
struct node *p,*q,*r;
int a;
printf("Enter the loc to swap :");
scanf("%d",&a);
if(a>=length()){
printf("Location incorrect.");
}
else{
int i=1;
p=root;
while(i<a-1){
p=p->link;
i++;
}
q=p->link;
r=q->link;
q->link=r->link;
r->link=p->link;
p->link=r;
}
}

void reverse(){
    struct node *p=root,*q=root;
    int i=1,j=length(),k,d=0;
    while(i<j){
        k=1;
        q=root;
        while(k<=j-1){
            q=q->link;
            k++;
        }
        d=p->data;
        p->data=q->data;
        q->data=d;
        i++;
        j--;
        p=p->link;
    }


}





