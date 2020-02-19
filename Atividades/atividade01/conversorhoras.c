#include <stdio.h>

int main(){

 int segundos = 3045;
int horas =  segundos/3600;
segundos = segundos%3600;
int minutos = segundos/60;
segundos =  segundos%60;

printf("sao %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);


return 0;
}