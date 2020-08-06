#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	char name[20];
	char phone[20];
	char group[5];
	char lastdate[20];
	struct node* next;
}*head;
struct user {
	char username[20];
	char password[20];
};
struct user u[100];

int n = 0;
void start();
void SignIn();
void SignUp();
void about();
void exitapp();
void menu();
void add();
void view();
void edit();
void delete();
void search();

int main() {
	head = NULL;
	printf("\t\t\t\t\t---------------------------Welcome To The Blood Donor Management System---------------------------\n\n");
	printf("Please SignUp First To Enter In The System\n\n");
	start();
	return 0;
}
void start() {
    int a=0;
	int c;
	printf("\t1.SignIn     2.SignUp     3.Exit\n");
	scanf("%d",&c);
	switch (c)
	{
	case 1: SignIn();
		break;
	case 2: SignUp();
		break;
	case 3: exitapp();
		break;

	default:
	    {
	        printf("\n\nInvalid Entry\n\n");
	        a=1;
	    }
	}
	printf("______________________________________________________________________________\n\n");
	if (a==1) start();

}

void exitapp() {

	printf("** THANK YOU **\n\n");
	exit(0);
}

void SignIn() {

	int i,s=0;
	char uname[20];
	char pword[20];
	printf("Enter Login Data\n");
	printf("username: ");
	scanf("%s",&uname);
	for (i=0;i<n;i++) {
		if(strcmp(uname,u[i].username)==0) {
              s=1;
              printf("password: ");
              scanf("%s",&pword);

              if(strcmp(pword,u[i].password)==0) {
                 printf("Login Successful!\n\n");
                 printf("______________________________________________________________________________\n\n");
                 menu();
                }
              else{
                 printf("Password Incorrect\n\n");
                 printf("______________________________________________________________________________\n\n");
                 start();
                 exit(0);
                }
            }
        }
        if(s!=1)
        {
            printf("\nInvalid Username");
            printf("\n\n");
            printf("______________________________________________________________________________\n\n");
            start();
            printf("\n\n");
        }
}


void SignUp() {

    char a[20],p[20];
	printf("Enter New Username To Register\n\n");
	printf("Username: ");
	scanf("%s",&a);
	strcpy(u[n].username,a);
    printf("\nEnter New  Password To Register\n\n");
	printf("Password: ");
	scanf("%s",&p);
	strcpy(u[n].password,p);
	n++;
	printf("\nSignUp Successfull!\n\n");
	printf("______________________________________________________________________________\n\n");
	start();
}

void menu()
{
    int c;
	printf("\t1.Add list   2.View list   3.Search   4.Edit   5.Delete   6.Logout\n");
	scanf("%d",&c);
	switch (c)
	{
	case 1: add();
		break;
	case 2: view();
		break;
	case 3: search();
		break;
	case 4: edit();
		break;
	case 5: delete();
		break;
	case 6: start();
		break;

	default:
		printf("\nInvalid Entry\n");
		printf("\n\n");
		printf("______________________________________________________________________________\n\n");
		menu();
		printf("\n\n");
	}
}

void add() {
	char na[20],ph[20],gr[5],da[20];
	struct node *p,*no;
	p = head;
	no = (struct node*)malloc(sizeof(struct node));
	printf("Enter New Contact's Data\n\n");

	printf("Name: ");
	scanf("%s",&na);
    strcpy( no->name,na);

	printf("\nPhone No: ");
	scanf("%s",&ph);
	strcpy(no->phone,ph);

	printf("\nGroup: ");
	scanf("%s",&gr);
    strcpy(no->group,gr);

	printf("\nLastdate: ");
	scanf("%s",&da);
    strcpy(no->lastdate,da);
	no->next = NULL;

	if (head == NULL) {head = no;}

	else {
		while (p->next != NULL)
        {p = p->next;}
        p->next = no;
	}
	printf("\n\nRecord Saved\n\n");
	printf("______________________________________________________________________________\n\n");
	menu();
}

void view() {

    int b=0;
	struct node *p;
	p = head;
	if (p == NULL)
        printf("List is Empty\n");

    while(p != NULL) {
            b++;
            printf("\nDisplaying data for No: %d\n",b);
			printf("Name: %s",p->name);
			printf("\n");
			printf("Phone: %s",p->phone);
			printf("\n");
			printf("Group: %s",p->group);
			printf("\n");
			printf("Lastdate: %s",p->lastdate);
            p=p->next;
		}
	printf("\n\n");
	printf("______________________________________________________________________________\n\n");
	menu();
	printf("\n\n");
}
void search() {

    int f=0;
    char name[20];
	struct node *p;
	p = head;
	if (p == NULL)printf("List is Empty\n");
	else {
		printf("Enter a Name to Search: ");
		scanf("%s",&name);
		while (p != NULL) {
			if(strcmp(name,p->name)==0){
			    f=1;
			    printf("Enter Name has been found!\n");
                printf("Name: %s\n",p->name);
                printf("Phone: %s\n",p->phone);
                printf("Group: %s\n",p->group);
                printf("Lastdate: %s\n",p->lastdate);
				break;
			}
			else {
                p = p->next;
			}
		}
		if (f !=1) printf("Did Not Match");
		}
		printf("\n\n");
		printf("______________________________________________________________________________\n\n");
        menu();
        printf("\n\n");
}

void delete() {

    int f=0;
	char name[20];
	struct node *p,*toDelete,*temp;
	p = head;
	if (p == NULL)printf("List is Empty\n");
	else {
		printf("Enter a Name to Delete: ");
		scanf("%s",&name);
		if(strcmp(name,head->name)==0){
			toDelete = head;
			head = head->next;
			free(toDelete);
			printf("Deleted Successfully\n");
			f=1;
			exit(0);
		}
		else{       while (p->next != NULL) {
                    temp=p->next;
                    if(strcmp(name,temp->name)==0){
                        toDelete = temp;
                        temp = temp->next;
                        free(toDelete);
                        printf("Deleted Successfully\n");
                        f=1;
                        break;
                    }
                    p=p->next;
            }
		}
		if(f!=1) printf("\nName Not found\n");
	}
    printf("\n\n");
    printf("______________________________________________________________________________\n\n");
	menu();
	printf("\n\n");
}

void edit() {
	char name[20],na[20],ph[20],gr[5],da[20];
	int e=0;
	struct node  *q;
	q= head;
	if (head == NULL) printf("List is Empty\n");
	else {
		printf("Enter a Contact Name to Edit: ");
		scanf("%s",&name);
		while (q != NULL) {
			if (strcmp(name,q->name)==0) {
                e=1;
			    printf("Name: %s\n",q->name);
                printf("Phone: %s\n",q->phone);
                printf("Group: %s\n",q->group);
                printf("Lastdate: %s\n",q->lastdate);

                printf("New Name: ");
                scanf("%s",&na);
                q->name[20] = na;
                strcpy(q->name,na);

                printf("\nNew Phone No: ");
                scanf("%s",&ph);
                q->phone[20] = ph;
                strcpy(q->phone,ph);

                printf("\nNew Group: ");
                scanf("%s",&gr);
                q->group[5] = gr;
                strcpy(q->group,gr);

                printf("\nNew Lastdate: ");
                scanf("%s",&da);
                strcpy(q->lastdate,da);
                printf("\nSuccessfully Update the Details\n\n");
				break;
			}
			q=q->next;
		}
		if(e!=1) printf("\nName Not Found\n\n");
		printf("\n\n");
		printf("______________________________________________________________________________\n\n");
		menu();
		printf("\n\n");
}}





