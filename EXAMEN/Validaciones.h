#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED



#endif // VALIDACIONES_H_INCLUDED



void myFgets(char* buffer, int limite ,FILE* archivo);

int val_getUnsignedInt(int* destino, char* mensaje,char* mensajeError,int intentos,int lowLimit, int hiLimit);

int val_getNombre(char* destino, char* mensaje,char* mensajeError,int intentos,int limite);
int val_esSoloLetras(char* buffer);

int val_getFloat(float* destino, char* mensaje,char* mensajeError,int intentos,float lowLimit, float hiLimit);
int val_soloNumeros(char* buffer);

int val_getDni(char* destino, char* mensaje,char* mensajeError,int intentos,int limite);

int val_getAlfanumerico(char* destino, char* mensaje,char* mensajeError,int intentos,int limite);
int val_esAlfaNumerico(char str[]);
int val_esNumericoFlotante(char str[]);


char val_getUnsignedIntFromFile(char* destino, int lowLimit, int hiLimit);
int val_getNombreFromFile(char* destino, int limite);
int val_getFloatFromFile(char* destino, float lowLimit, float hiLimit);
