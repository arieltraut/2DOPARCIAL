#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "Validaciones.h"


int parserEmployee(ArrayList* pArrayListEmployee)
{
    FILE *pFile;
    Employee* employee;

    char id[50],name[50],lastName[50],age[50],type[50];

    pFile = fopen("data.csv","r");

    char aux[200];
    fgets(aux,200,pFile);
    //fscanf(pFile,"%[^\n]\n",aux,aux,aux,aux,aux);

    while(!feof(pFile))
    {
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,name,lastName,age,type);
        if (val_getUnsignedIntFromFile(id,0,9999)==0)
        {
            if (val_getNombreFromFile(name,50)==0)
            {
                if (val_getNombreFromFile(lastName,50)==0)
                {
                    if(val_getUnsignedIntFromFile(age,0,150)==0)
                    {
                        if(val_getUnsignedIntFromFile(type,0,150)==0)
                        {
                            employee = employee_new(atoi(id),name,lastName,atoi(age),atoi(type));
                            al_add(pArrayListEmployee,employee);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
