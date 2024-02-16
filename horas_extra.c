#include <stdio.h>

int main() {
    // impresion nombre estudiante
    printf("========================== \n");
    printf("DATOS DEL ESTUDIANTE:\n");
    printf("========================== \n");
    printf("NOMBRE DEL ESTUDIANTE: Daniel Pinon Formoso\n");
    printf("MATRICULA: ES241102457 \n");
    printf("GRUPO: 011 \n");
    printf("\n");
    
    // inicio de calculadora
    printf("========================== \n");
    printf("CALCULADORA DE HORAS EXTRA \n");
    printf("========================== \n");

    // declaracion de variables
    char name[100];
    float dailySalary, totalExtraHours;

    // obtener input de usuario
    printf("Proporcione el nombre del trabajador: ");
    fgets(name, 50, stdin);

    printf("Proporcione el salario diario del trabajador: ");
    scanf("%f", &dailySalary);

    printf("Proporcione las horas extra: ");
    scanf("%f", &totalExtraHours);

    // calculo de pago de horas
    const float extraHourCost = dailySalary / 8 * 1.05;
    const float totalHoursToPay = extraHourCost * totalExtraHours;

    printf("Paguese la cantidad de $%.2f por el concepto de horas extra al trabajador %s \n", totalHoursToPay, name);

    return 0;
}