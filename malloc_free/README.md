<h1 style = "text-align:center">Malloc - Free</h1>

# Necesito mas memoria... qué hago?

En las siguientes líneas interaré explicar de manera corta y precisa estos 2 conceptos sin tener que llegar al tecnisismo que es valido pero sí estas empezando puede resultar algo complejo.

Si te encuentras desarrollando alguna función en particular que reciba como parámetro y apriori no sepas cuanto de espacio en memoria necesitas(dinámico), Ponte en el caso que tengas que recibir un <b>array</b> o <b>vector</b>, valla esto es mas trabajoso a menos que siempre se reciba la misma cantidad de datos no supondrá un problema. Pero esta vez será distinto así que usaramos la función `malloc` de la biblioteca `<stdlib.h>` para darle esa memoria que desconecemos que nesecitamos pero que somos concientes que debemos separar.

## Malloc

Lo que hará es separar la cantidad de memoria en bytes que nosotros le especifiquemos, también debo mencionar que al manejar la memoria usando esta función, la liberación de la misma debe correr por parte nuestra, para ello es necesario usar la función `free` de la misma biblioteca. Es mas será necesario en cuando ya hayamos usado la memoría liberarla con free para evitar fugas.

La función `malloc` retorna un puntero vació que señala la dirección de memoria que se reservo tras la llamada y en caso contrario devolverá `NULL`,este espacio de memoria será en bytes, pero espera un momento , este espacio que le vamos apedir que nos reserve deberá hacerse usando la función `sizeof` y usando un tipo de dato como referencia `char` `int` `float` o `double`, y por qué hacerlo de esta forma? y no solo decirle literalmente cuanto necesitamos, esto es porque dependiendo de la arquitectura de la computadora donde se use tendrá un valor distinto, y es justo la razón por la cual usaremos esta función `sizeof` ella se encargará de gestionar ese detalle y no tengamos ese problema porque lo mas seguro de no usarla tengamos un desbordamieno de memoria en tiempo de ejecución, dicho de otra forma este problema saldrá a la luz cuando este en pleno funcionamiento.

## Free

El uso de esta función es sencilla pero importante después de haber reservado memoria usando `malloc` u otras de estas funciones que reservan memoria de forma dinámica, lo único que necesitamos es pasar el `puntero` a `free`, tan sencillo como esto: `free(ptr)`.

### Prototipos
    #include <stdlib.h>
    
    void *malloc(size_t size);
    void free(*ptr);
    



### Ejemplo

    #include <stdlib.h>
	#include <stdio.h>
    
    int main(void)
    {
		/*Creamos nuestro puntero que recibira lo que nos retorne malloc*/
    	int *ptr;
		int i;
    
		/*Asigamos a nuestro puntero*/
    	ptr = (int *)malloc(sizeof(int) * 12);
    
		/*Validamos el retorno de malloc*/
    	if (ptr == NULL)
    	{
    		printf("Soy malloc y no pude reservar memoria...\n");
    	} else {
    		printf("Reserva exitosa, ahora puedes asignarle valores a la memoria separada.\n");
			/*Las siguientes líneas son para asiganarle valores al espacio reservado,
			acuerdate que nuestro puntero apunta a un dirección de memoria*/
    		for ( i = 0; i < 12; i++)
			{
				ptr[i] = i;
			}
			
			/*Ahora leeremos los valores previamente asignados*/
			
			i = 0;
			while ( i < 12)
			{
				printf("Este es valor %d\n",ptr[i]);
				i++;
			}
			
			/*Liberamos memoria*/
			free(ptr);
    	}
    
    	return (0);
    }
En la línea 11 de nuestra llamada `malloc`, seguro te estarás preguntado porque se declara de esa forma, bien:

A nuestro puntero creado le vamos a pedir que almacene el espacio reservado por `malloc`,como mencioné casí al inicio `malloc` retorna un puntero vacio, para recibir un puntero de un tipo de dato especifico anteponemos la siguiente declaración `(int *)` quedando así `ptr = (int *)malloc`, esto nos asegura que nuestro puntero de tipo `int` reciba un espacio reservado para un tipo de dato `int`, lo siguiente será usar `sizeof(tipo_dato)`, ya mencioné la importancia de usar la función `sizeof`, a lo que nos devuelva esta ultima función le vamos a multiplicar la cantidad de espacios que necesitamos reservar para este tipo de dato.

### Visita los siguientes enlaces, te pueden interesar.

- <a href="https://chuidiang.org/index.php?title=Arrays_en_C">Arrays en C - ChuWiki</a>

### Ejercicios

- [0-create_array.c](./0-create_array.c "0-create_array.c")

Esta función crea una matriz, donde se le asigne la cantidad de memoria y el valor con el cual se inicializará.

- [1-strdup.c](./1-strdup.c "1-strdup.c")

Esta función crea un retorna un puntero con un cadena duplicada que recibirá como argumento.

- [2-str_concat.c](./2-str_concat.c "2-str_concat.c")

Esta función retorna un puntero con ambos valores pasados en sus argumentos concatenados.

- [3-alloc_grid.c](./3-alloc_grid.c "3-alloc_grid.c")

Esta función retorna un array de 2 dimensiones inicializado con el valor 0.

- [4-free_grid.c](./4-free_grid.c "4-free_grid.c")

Esta función se encarga de liberar la memoria de un array de 2 dimensiones.

