# ESPAI-Hoja13
Ejercicios del curso de C++

Ejercicios capítulo 13
1. Explica qué ventajas y desventajas tiene pasarle como parámetro a una función:
a. Una variable
b. Un puntero a esa misma variable.

2. ¿Qué nos aporta hacer un puntero const?

3. ¿Qué ventajas nos ofrece una referencia sobre un puntero?

4. ¿Cuál es el resultado del siguiente código?
#include <iostream>
using namespace std;
int& doblaNumero(int&);
int& doblaNumero(int& numero)
{
numero = numero * 2;
return numero;
}
int main() {
int num1 = 25;
int& num2 = doblaNumero(num1);
num1 = 70;
cout << "num2: " << num2;
}
return 0;

5. ¿Cuál es el resultado del siguiente código?
#include <iostream>
using namespace std;
class Calculadora
{
public:
int doblaNumero(const int&);
};
int Calculadora::doblaNumero(const int& numero)
{
numero = numero * 2;
return numero;
}
int main() {
Calculadora c;
int num1 = 25;
int num2 = c.doblaNumero(num1);
cout << num2;
}
return 0;

6. ¿Cuál es el resultado del siguiente código?
#include <iostream>
using namespace std;
class Calculadora
{
public:
int doblaNumero(int);
};
int Calculadora::doblaNumero(int numero)
{
int numero2 = numero * 2;
return numero2;
}
Calculadora& calcular()
{
Calculadora c;
return c;
}
int main() {
int num1 = 25;
int num2 = calcular().doblaNumero(num1);
cout << num2;
}
return 0;



7. Práctica final del capítulo
Crea una aplicación que permita la gestión de una librería. El menú será el siguente:
a. Introducir libro
b. Eliminar libro
c. Buscar libro
i. Vender
ii. Ampliar stock
d. Salir

Crea para ello una clase Libro y mantén en un array todos los libros de la librería. Cuando
tengamos un nuevo titulo para vender, lo insertaremos con la opcion a. Cuando ya no lo
vendamos más, lo eliminaremos con la b.
También deberemos controlar las unidades disponibles de cada uno (stock), para esto
usaremos la opción c.
Utiliza referencias o punteros cuando lo consideres necesario, favoreciendo el uso de
referencias cuando el código lo permita.
