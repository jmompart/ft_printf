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

## Main de ejemplo
```
#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	int				count;
	int				x;
	int				y;
	unsigned int	u;

	x = 42;
	y = -42;
	u = 4294967295u;

	// ---------- PRUEBAS BÁSICAS ----------
	count = ft_printf("PRUEBA BASICA:\n");
	ft_printf("se han pintado %d caracteres\n\n", count);
	
	count = printf("PRUEBA BASICA:\n");
	printf("se han pintado %d caracteres\n\n", count);

	// ---------- CHAR ---------- 
	count = ft_printf("CHAR: %c %c %c\n", 'A', '0', '\n');
	ft_printf("chars: %d\n\n", count);
	count = printf("CHAR: %c %c %c\n", 'A', '0', '\n');
	printf("chars: %d\n\n", count);

	// ---------- STRING ---------- 
	count = ft_printf("STRING: %s\n", "Hola mundo");
	ft_printf("chars: %d\n\n", count);
	count = printf("STRING: %s\n", "Hola mundo");
	printf("chars: %d\n\n", count);
	
	// ---------- NULL STRING ---------- 
	count = ft_printf("NULL STRING: %s\n", NULL);
	ft_printf("chars: %d\n\n", count);
	count = printf("NULL STRING: %s\n", NULL);
	printf("chars: %d\n\n", count);

	// ---------- DECIMAL (d / i) ---------- 
	count = ft_printf("DECIMAL: %d %i %d\n", 42, -42, 0);
	ft_printf("chars: %d\n\n", count);
	count = printf("DECIMAL: %d %i %d\n", 42, -42, 0);
	printf("chars: %d\n\n", count);

	// ---------- UNSIGNED ---------- 
	count = ft_printf("UNSIGNED: %u %u %u\n", 0u, 42u, u);
	ft_printf("chars: %d\n\n", count);
	count = printf("UNSIGNED: %u %u %u\n", 0u, 42u, u);
	printf("chars: %d\n\n", count);

	// ---------- HEXADECIMAL ---------- 
	count = ft_printf("HEX: %x %X %x\n", 42u, 42u, 0u);
	ft_printf("chars: %d\n\n", count);
	count = printf("HEX: %x %X %x\n", 42u, 42u, 0u);
	printf("chars: %d\n\n", count);

	// ---------- POINTER ---------- 
	count = ft_printf("POINTER: %p %p\n", &x, &y);
	ft_printf("chars: %d\n\n", count);
	count = printf("POINTER: %p %p\n", &x, &y);
	printf("chars: %d\n\n", count);

	// ---------- NULL POINTER ---------- 
	count = ft_printf("NULL POINTER: %p\n", 0);
	ft_printf("chars: %d\n\n", count);
	count = printf("NULL POINTER: %p\n", 0);
	printf("chars: %d\n\n", count);

	// ---------- PERCENT ---------- 
	count = ft_printf("PERCENT: %% %% %%\n");
	ft_printf("chars: %d\n\n", count);
	count = printf("PERCENT: %% %% %%\n");
	printf("chars: %d\n\n", count);

	// ---------- NULL ---------- 
	count = ft_printf(NULL);
	ft_printf("chars: %d\n\n", count);
	count = printf(NULL);
	printf("chars: %d\n\n", count);

	// ---------- MIXTO (TODO JUNTO) ---------- 
	count = ft_printf(
		"MIXTO: %s %c %d %i %u %x %X %p %%\n",
		"Str", 'C', 42, -42, 42u, 42u, 42u, &x
	);
	ft_printf("chars: %d\n\n", count);
	count = printf(
		"MIXTO: %s %c %d %i %u %x %X %p %%\n",
		"Str", 'C', 42, -42, 42u, 42u, 42u, &x
	);
	printf("chars: %d\n\n", count);
	

	return (0);
}
```

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
