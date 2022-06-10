Maximo de una montaña

Dado un arreglo montaña, pensemos los casos posibles
ej 1)
A ={-1,3,8,22,30,8,4,2,1}
i.e que al comienzo los numeros son ascndentes y despues desendentes
c = 2

si tam(A) = 10 then n = 10/2 =5
//estoy cerca de la punta de la montaña
busco el maximo
- tomo la mitad (primera) del arreglo y tengo 3 casos;
comparo ele elemento anterior con el actual(n)
//abajjo me fijo en lo que esta en n-1 y n respectivamente
1) n-1 mayor a n -> quiere decir que estoy en la parte decreciente
entonces busco en la parte 1 (parte ascendente)
2) n-1 menor a n -> analogamente hago la recursion sobre la parte 2 (desendente)

ej 2)

A=[10,11,12,-2,-100]
//el maximo es directamente A[n]
ej 3
A = [-1,48,100,100,84,-10]
n= 6/2 = 3// el array empieza en 0
esto me abre el caso 3
3) A[n-1] =A[n] entonces A[n] es el maximo

(*)como me quedo solo con una de las partes(mitades), este algoritmo es muy parecido a la busqueda binaria

//compiar el algoritmo

Complejidad: O(logn)
