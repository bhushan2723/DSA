#include<stdio.h>
#define num_emp 5

struct emp {
     int eid;
     char name[50];
     float salary;
     char class;
};

void getdata(struct emp *e)
{
    float basicsal;
    printf("\nEnter the employee ID : ");
    scanf("%d",&e->eid);
    printf("\nEnter the employee name : ");
    scanf("%s",&e->name);
    printf("\nEnter the class of employee : ");
    scanf("%s",&e->class);
    
    if(e->class=='A')
    {
        basicsal = 80000;
        e->salary = basicsal + basicsal * 0.5;
    }
    else if(e->class=='B')
    {
        basicsal = 60000;
        e->salary = basicsal + basicsal * 0.5;
    }
    else if(e->class=='C')
    {
        basicsal = 55000;
        e->salary = basicsal + basicsal * 0.5;
    }
    else
    {
        printf("please enyter the valid class (A,B,C) \n");
    }
}
void displaydata(struct emp e)
{
    printf("\nName of employee : %s",e.name);
    printf("\nID of employee : %d",e.eid);
    printf("\nClass of employee : %c",e.class);
    printf("\nsalary of employee : %f",e.salary);
}

int main()
{
    struct emp emps[num_emp];
    int n;
    printf("\nEnter the number of employee : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("\nenter the employee %d details : \n",i+1);
        getdata(&emps[i]);
    }
    
    for(int i=0 ; i < n ;i++)
    {
        printf("\ndetails of employee %d : \n",i+1);
        displaydata(emps[i]);
    }
    return 0;
    
}

/*

Enter the number of employee : 1

enter the employee 1 details : 

Enter the employee ID : 12

Enter the employee name : bhushan

Enter the class of employee : A

details of employee 1 : 

Name of employee : bhushan
ID of employee : 12
Class of employee : A
salary of employee : 120000.000000

*/
