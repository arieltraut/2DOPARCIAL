#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#define EMPLOYEE_TYPE_ARCHITECT    0
#define EMPLOYEE_TYPE_MANAGER      1
#define EMPLOYEE_TYPE_DESIGNER     2
#define EMPLOYEE_TYPE_JUNIOR       3
#define EMPLOYEE_TYPE_PROGRAMMER   4

struct
{
    int id;
    char name[51];
    char lastName[51];
    int age;
    int type;
}typedef Employee;

int employee_filterEmployee(void* item);
void employee_print(Employee* this);
Employee* employee_new(int,char*,char*,int,int);
void employee_delete(Employee* this);
#endif // _EMPLOYEE_H

int emp_setNombre(Employee* this,char* nombre);
char* emp_getNombre(Employee* this);
int emp_setLastName(Employee* this,char* nombre);
char* emp_getLastName(Employee* this);
int emp_setId(Employee* this,int id);
int emp_getid(Employee* this);
int emp_setAge(Employee* this,int age);
int emp_getAge(Employee* this);
int emp_setType(Employee* this,int type);
int emp_getType(Employee* this);



