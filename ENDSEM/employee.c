#include <stdio.h>

struct employee{
    int ID;
    char name[50];
    char dept[100];
    float salary;
};

void add(int n,struct employee a[n]){
   
   printf("enter no. of employees you want to add");
   scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter New Employee No. %d Records:\n",i+1);
        printf("Enter the ID:\n");
                scanf("%d",&a[i].ID);
         printf("Enter the Name:\n");
                 scanf("%s",&a[i].name);

         printf("Enter the Department:\n");
                 scanf("%s",&a[i].dept);

        printf("Enter the Salary:\n");
                scanf("%f",&a[i].salary);
}
return 0;
}

void update(int n,struct employee e[n]){
     int id;
    printf("Enter the employee ID whose details you want to change\n");
    scanf("%d",&id);
    for(int i=0;i<n;i++)
    {
        if(e[i].ID == id ){
            printf("Enter the New Name of emp id %d\n",id);
            scanf("%s",e[i].name);
            printf("Enter the NEW DEPT:");
            scanf("%s",e[i].dept);
            printf("Enter the NEW Salary:");
            scanf("%f",e[i].salary);
            return 0;
        }
    }
}

int main(){
    int n;
    printf("enter no. of employees :");
    scanf("%d",&n);
    struct employee *emp;
    emp = (struct  employee *)malloc(n*sizeof(struct employee));
    

    for (int i=0;i<n;i++){
        scanf("%d",&emp->ID);
        scanf("%s",emp->name);
        scanf("%s",emp->dept);
        scanf("%f",&emp->salary);

    }
    int choice;
    printf("enter the number\n 1 to add new employee\n2 to update record\n3 to display all employee recird\n4 to search an employee");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        
    }

}