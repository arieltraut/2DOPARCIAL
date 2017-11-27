#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Employee.h"




Employee* employee_new(int id,char* name,char* lastName,int age,int type)
{
    Employee* newEmployee = (Employee*)malloc(sizeof(Employee));
    emp_setNombre(newEmployee,name);
    emp_setLastName(newEmployee,lastName);
    emp_setId(newEmployee,id);
    emp_setAge(newEmployee,age);
    emp_setType(newEmployee,type);

    return newEmployee;

}

void employee_delete(Employee* this)
{
    free(this);
}

void employee_print(Employee* this)
{
    if(this != NULL)
    {
        //Employee* auxEmployee = (Employee*)empleado;
        printf("%d,%s;%s;%d;%d\n",emp_getid(this),emp_getNombre(this),emp_getLastName(this),emp_getAge(this),emp_getType(this));
    }
}



int employee_filterEmployee(void* item)
{
    //if(((Employee*)item)->age == 30 && ((Employee*)item)->type == 4)
    if( emp_getType(item) == 4 && emp_getAge(item) > 30)
    {
        return 1;
    }

    return 0;
}


int emp_setNombre(Employee* this,char* nombre)
{
    strcpy(this->name,nombre);
    return 0;
}

char* emp_getNombre(Employee* this)
{
    return this->name;
}

int emp_setLastName(Employee* this,char* lastName)
{
    strcpy(this->lastName,lastName);
    return 0;
}

char* emp_getLastName(Employee* this)
{
    return this->lastName;
}


int emp_setId(Employee* this,int id)
{
    this->id=id;
    return 0;
}


int emp_getid(Employee* this)
{
    return this->id;
}

int emp_setAge(Employee* this,int age)
{
    this->age=age;
    return 0;
}


int emp_getAge(Employee* this)
{
    return this->age;
}


int emp_setType(Employee* this,int type)
{
    this->type=type;
    return 0;
}


int emp_getType(Employee* this)
{
    return this->type;
}



/*
int emp_compararEmpleado(void* pEmpleadoA,void* pEmpleadoB)
{

    if(((Empleado*)pEmpleadoA)->salario > ((Empleado*)pEmpleadoB)->salario)
    {
        return 1;
    }
    if(((Empleado*)pEmpleadoA)->salario < ((Empleado*)pEmpleadoB)->salario)
    {
        return -1;
    }
    return 0;
}

int emp_compararEmpleadoPorNombre(void* pEmpleadoA,void* pEmpleadoB)
{

    if((strcmp(((Empleado*)pEmpleadoA)->nombre,((Empleado*)pEmpleadoB)->nombre)==1))
    {
        return 1;
    }
    if((strcmp(((Empleado*)pEmpleadoA)->nombre,((Empleado*)pEmpleadoB)->nombre)==-1))
    {
        return -1;
    }
    return 0;
}*/



