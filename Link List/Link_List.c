#include<conio.h>
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
}
struct node *root=NULL;
void main(){
append();
append();
append();
append();
display();
add_began();
add_loc();
display();
del_began();
del_loc();
printf("Length of the link list is : %d",length());
swap();
display();
reverse();
display();
}

void append(){
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
printf("Enter the data :");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL){
root=temp;
}
else(){
struct node *p=root;
while(p->link 1=NULL){
p=p->link;
}
p->link=temp;
}

void display(){
struct node *p=root;
while(p != NULL){
printf("%d",p->data);
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
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
printf("Enter the location :");
scanf("%d",&a)
if(a<=lenght()+1){
struct node *p=root;
printf("Enter the data :");
scanf("%d",&temp->data);
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
q->link=NULL:
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

void reverse()}{
}



