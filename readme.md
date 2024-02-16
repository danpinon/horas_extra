## Análisis del problema

Se desea elaborar un programa que calcule las horas extra de los empleados, dicho programa requiere como datos de entrada el nombre del empleado, su salario base diario y el número de horas extra, el cálculo del importe a pagar por hora extra se obtendrá dividiendo el sueldo base diario entre 8 horas que componen la jornada laboral, a este resultado se le incrementará un 5% de su valor obtenido para obtener el costo por hora extra.

### ¿Cuál es la salida deseada?
El pago de horas extra de un empleado y su nombre

### ¿Qué método se puede utilizar para la solución del problema?
costo de la hora extra = sueldo base diario / 8 * 1.05
total de horas a pagar = cantidad de horas a trabajar * costo de la hora extra.

### ¿Qué datos de entrada se requieren?
Nombre del empleado, sueldo base diario y la cantidad de horas extra.

### ¿Existe alguna restricción que deba cumplirse?
El programa debe arrojar el nombre del empleado y el total de horas extra por pagar.

## Pseudocódigo

Inicio
    Leer nombre de empleado y asignar input a variable name
    Leer sueldo diario de empleado y asignar input a variable dailySalary
    Leer número de horas extra por trabajar y asignar a variable totalExtraHours
    extraHourCost = dailySalary / 8 * 1.05
    totalHoursToPay = extraHourCost * totalExtraHours
    Imprimir name y totalHoursToPay
Fin

