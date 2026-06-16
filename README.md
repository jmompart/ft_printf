*Este proyecto ha sido creado como parte del currículo de 42 por jmompart.*

## Descripción
El proyecto ft_printf es una funcion escrita en C que permite escribir sus
argumentos segun un formato a definir.

Objetivo: recrear la funcion printf para implementar las conversiones:
• %c --> carácter.
• %s --> cadena de caracteres.
• %p --> puntero void * dado como argumento impreso en formato hexadecimal.
• %d --> número decimal.
• %i --> número entero.
• %u --> número decimal sin signo.
• %x --> número hexadecimal en minúsculas.
• %X --> número hexadecimal en mayúsculas.
• %% --> símbolo del porcentaje.

## Instrucciones
El makefile se ejecutará abriendo la carpeta raíz en un terminal y usando el comando 
'make' se compilará la libreria con las opciones -Wall -Werror -Wextra.
	
Adicionalmente se pueden usar los comandos 'clean', 'fclean' para limpiar los archivos
y 're' para limpiar y volver a compilar.
	
Una vez compilado un ejemplo básico de uso seria copiar libftprintf.a y libftprint.h 
junto con un archivo .c que contenga el header `#include "libftprint.h"` para poder
usar ft_printf durante el programa.

## Recursos
### Manual de Unix
• man printf
### Youtube
• Clases sobre conceptos teóricos y ejemplos practicos sobre funciones variaticas y
recursividad.
### Inteligencia artificial
• Aclarar el comportamiento esperado de la funcion para todos los casos posibles.
• Revisar cumplimiento de norminette una vez comprovado que ambas versiones de printf
(ft_printf y printf) funcionan igual.
