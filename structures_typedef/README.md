Este tipo de datos no existe... lo creamos!!!

<h1 style="text-align:center">
Struct - Typedef
</h1>

Tampoco es que creemos nuevos tipos de datos desde cero, solo vamos reasignar algunos para  usarlos o agruparlos bajo un mismo contexto, para que el código sea mejor leído, te darás cuenta que tu código hablará por sí mismo, no me crees .....

# Struct

Usaremos la instrucción `struct` para crear nuevas estructuras que agruparán variables llamadas <b>campos</b>, estas variables guardan una extrecha relación entre sí. Usarmos de ejemplo `struct coche` y usaremos variables para asignar y leer sus valores, antes de pasar primero veremos que existen 3 formas de declaración para las structuras, son las siguientes:
###Forma 1

```c
    struct coche
    {
    	char *marca;
    	char *color;
    	int asientos;
    	int anio;
    }
    
    /*Llamada*/
    int main(void)
    {
    	struct coche volvo;
    	return (0);
    }
	
	```

###Forma 2
```c
typedef struct coche
{
    char *marca;
    char *color;
    int asientos;
    int anio;
} coche;

int main(void)
{
    coche volvo;
    return (0);
}
```
###Forma 3
```c
struct coche
{
    char *marca;
    char *color;
    int asientos;
    int anio;
};

typedef struct coche coche_c;

int main(void)
{
    coche_c volvo;
    return (0);
}
```


Ahora sí veamos vallamos al ejemplo

## Ejemplo

``` c
#include <stdio.h>

typedef struct coche
{
    char *marca;
    char *color;
    int asientos;
    int anio;
} coche;

int main(void)
{
    struct coche volvo;
	
    volvo.marca = "Volvo";
    volvo.color = "negro";
    volvo.asientos = 5;
    volvo.anio = 89;
	
    printf("Estoy vendiendo un auto marca %s, color %s de %d asientos del año %d\n", 
    			volvo.marca, volvo.color, volvo.asientos,volvo.anio);
	
    return (0);
}
```
Al leer el código es notorio que estamos hablando de un coche, hemos usado la declaración `struct` para poder <b>agrupar varias variables bajo un mismo contexto</b> , hacerlo de esta forma da mayor control del código, legibilidad y mantención. Tambien hay algo mas que mencionar, las estructuras se pueden anidar sí fueran necesario. Veamos el siguiente código:

##Typedef

En los ejemplos anteriores hemos usado en algunos casos la intrucción `typedef` para declarar nuestras `struct`. Bueno `typedef` lo que hace asignar un alias a los tipos de datos simples como un `char`,`int` ,etc o también tipos de datos compuestos como las `struct` que agrupan otras variables de otros tipos de datos. Veamos lo siguiente.

```c
#include <stdio.h>

typedef int nota;

typedef struct alumno 
{
    char *nombre;
    char *apellidos;
    nota promedio;
} alumno;

int main(void)
{
    alumno estudiante;
    
    estudiante.nombre = "José";
    estudiante.apellidos ="Lopéz Casas";
    estudiante.promedio = 18;
    
    printf("Hola soy %s, %s estudiante y tengo un promedio de %d.\n",
            estudiante.nombre, estudiante.apellidos, estudiante.promedio);
    return (0);
}
```
Después de llamar a nuestra biblioteca standar hemos usamo `typedef int nota` para darle una alias a nuestro tipo dato `int`, esto quiere decir que la proxima vez que necesitemos declarar una variable del tipo `int` podemos usar en su reemplazo `nota` que es el <b>alias</b>,  lo podemos ver dentro de nuestra <b>estructura alumno</b> al asignar la variable `promedio` le estamos diciendo que sea del tipo `nota`.

### Ejercicios

- [1-init_dog.c](./1-init_dog.c "1-init_dog.c")

Esta función inicializa una estructura del tipo <b>dog</b> con los parámetros recibidos.

- [2-print_dog.c](./2-print_dog.c "2-print_dog.c")

Esta función imprime una estructura inicializada del tipo <b>dog</b>.

- [4-new_dog.c](./4-new_dog.c "4-new_dog.c")

Esta función retorna un puntero a una nueva estructura inicializada con los parámetros recibidos.

- [5-free_dog.c](./5-free_dog.c "5-free_dog.c")

Esta función libera la memoria para estructura creada en <a herf= "./4-new_dog.c">4-new_dog.c</a>

- [dog.h](./dog.h "dog.h")

Este es nuestro archivo de cabecera.



