<h1 style="text-align: center">
Argc - Argv
</h1>

Estas codeando en <b>lenguaje C</b>, pero tienes un programa que necesita recibir argumentos através de la línea de comandos. Cómo es esto?, lo mas seguro que has usado el comando `cat ` en la  <b>shell bash</b> para mostrar el contenido de un archivo, algo como esto `cat myFile` . `cat` es un programa que recibe  argumentos y luego trabaja con ellos.

Hasta el momento hemos trabajado con un prototipo como el siguiente `int main(void)`, en nuestro main para hacer nuestros programas, ahora haremos una modificación para que reciba argumentos y podamos trabajar con ellos, el prototipo, firma o declaración será esta <pre>`int main(int argc, char const *argv[])`</pre>.

## Argc:
Este parámetro indica la cantidad de argumentos. La cantidad de argumentos que le hemos pasado a nuestro programa cuando lo llamemos, un detalle a tener en cuenta es que la llamada en sí a nuestro programa también cuenta como argumento y será el primer argumento.

## Argv
Este parámetro le esta indicando cuáles son esos argumentos con los que va a trabajar  nuestro programa, estos argumentos son un `array` del tipo `char`, pueden ser varios los argumentos que se reciban.

## ______attribute______((unused))</h2>
Use esta declaración cada vez que declares un parámetro que no se usa, lo seguro es que al momento de compilar te muestre algunas alertas, sino haces uso de uno de sus parámetros, vea el siguiente prototipo:

`int main(int argc, char const *argv[] __attribute__((unused)))`

## Casos practicos

### [0-whatsmyname.c](./0-whatsmyname.c "0-whatsmyname.c")
Este programa muestra el nombre que le pases como argumento.

### [1-args.c](./1-args.c "1-args.c")
Este programa muestra la cantidad de argumentos que se le pasan.

### [2-args.c](./2-args.c "2-args.c")
Este programa imprime en la salida standar los argumentos que se le pasaron.

### [3-mul.c](./3-mul.c "3-mul.c")
Este programa imprime en la salida standar el resultado de la multiplicación de sus argumentos.

### [4-add.c](./4-add.c "4-add.c")
Este programa realiza la suma de sus argumentos y los muestra en la salida standar.

### [100-change.c](./100-change.c "100-change.c")
Este programa devuelve la cantidad mínima de monedas cambiadas por un monto de dinero pasado como argumento.


