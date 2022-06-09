


Invariante: ( recorre el algoritmo y para en un mometno i)

SeleccionSort:
se que en el momento i del invariante mi array ya va a estar ordenado en funcion del arreglo total
ie. los primeros elem del array ( hasta i) ya estan ordenado

InsestionSort:
se que en el momento i del invariante mi array ya va a estar ordenado (aun que en funcion del arreglo total)

mergeSort:
todos los subarreglos que tengo estan ordenados

Quik Sort:
todo lo que quede a la izquierda del pivote va ser menor a lo de la derecha

(*) No es estable
Memoria:
¡LOS TERMINOS DE MEMORIA TAMBIEN SIN IMPORTANTES!
 (aun que  solemos darle mas importancia a la contabilidad del tiempo)

 Por ejemplo: si tenemos que ordenar un array que tiene de tamaño la memoria entera ( me entra justo)
 entonces, por ej el mergeSort no lo voy a poeder usar (ya que si os ivoy a tener que duplicar la cant memoria)

 ¡EL USO SE MEMORIA TAMBIEN DEPENDE DE LAS ESTRUCTURA QUE ELIGO

 Por Ejemplo: si tengo una lista lista enlazada y hago un InsestionSort que es O(1) en este caso, ya que solo es necesario cambia los punteros

    Sorting por comparacion:
  (*) para algoritmos que ordenan arreglos comprando elem:
  no se puede mejorar la complejidad O(nlogn) (para el mejor caso) //es un teorema

  Pero podemos tener algo mejor sin usar Sorting por comparacion:
  (*)por ejemplo si tenemos informacion de los elem, asi no esta sujeta solo al tamaño de entrada
  (Esta es la unica forma de tener complejidad O(n)) //no contradice el teorema anterior
   
  Algortimos de ordenamiento:

  CountingSort(A:arr[], k):
  Restriccion: todos los valores del arreglo A deben tener una cota k (ej: todo numero n de a debe ser n<k)

  Algoritmo: me creo un array B de k posicion, y sumo en cada posicion de B que conincida con un elem del array

  Ejemplo:a = {3,5,1,0,5} -> CountingSort(A,5) -> {1,0,1,0,2}

  (*) lo puedo adaptar a un invervalo, ej: el array tiene valores entre [20, 60]

  BucketSort():
  Restrcion: no va a nesecitar una cota, si no que voy a poder separar los valores del arreglo en m categorias

  ej: categorias: 1) num entre [0, 20] 2) entre [20, 100] ...

  Algortimo: va a crear una arreglo con m lista y en lista voy recorriendo A y voy a agregar ese elem a la categoria que corresponda
  (*) esto me asegura que todos los elementos de la categoria 1 van a ser menores de los que estan en la categoria 2

  Luego, ordeno las lista (como quiera) y concateno

  (*) tiene sentido si los elem del  array son uniformes respecto a las categorias

  Por ej: todos los de [0, 20] < cualquiera entre [20, 100]
  
  (*) hay implementaciones estables y no estables del bucketSort
   
  (*) si lo uso con un Radix 
  por ejemplo si quiero ordenar por edad:
  si el k (cant de buckets) esta acotado entonces la complejidad O(k) = O(1)
   en este ejemplo: k = 10 => O(10)=O(1)
  PseudoCodigo:


  
  RadixSort() //para numeros naturales
  (*) idea: los numeros naturales puedo ordenarlos segun el cada uno de sus digitos (primero ordeno las unidades, luego las centenas, decenas, ect)
  (*) para esto debo usar un algoritmo estable

  PseudoCodigo:

    for( i <- [1.d])//del menos significativo al mas
        Ordenar el arreglo A segun el digito i
    end for

(*) si usamos BucketSort no nesecitamos ordenas los Buckets
(las categorias backetSort van a ser la unidades, decenas, centenas) y como se ordenan de forma estable no nesecito ordenarlos
aca las categorias son M=10 (tengo 10 digitos )
O(n+M) + O() = O(n) //M es constante
-> o()
     
  (*) si tengo mas de dos categorias para ordenar en O(n) me conviene usar el bucketSort con el radixSort
  //casi no hay casos en los que se use con el countingSort
