#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "DataManager.h"


int dm_dumpEmployeeList(ArrayList* list)
{
    int i;
    FILE *pArchivo;
    pArchivo=fopen("out.csv", "w");
    if(pArchivo == NULL)
    {
        printf("No se pudo abrir el archivo\n");
    }
    else
    {
        fprintf(pArchivo,"id,first_name,last_name,age,type\n");
        Employee* auxEmployee;
        for(i=0; i<al_len(list); i++)
        {
            auxEmployee = al_get(list,i);
            fprintf(pArchivo,"%d,%s,%s,%d,%d,\n", emp_getid(auxEmployee), emp_getNombre(auxEmployee),emp_getLastName(auxEmployee),emp_getAge(auxEmployee),emp_getType(auxEmployee));
        }
    }
    fclose(pArchivo);
    printf("\nArchivo guardado con exito\n");


    return 0;
}
