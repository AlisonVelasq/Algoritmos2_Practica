Ejercicio 8
Se tienen dos arreglos de numeros naturales, A[1..n] y B[1..m]. Nada en especial se sabe de B, pero A tiene n'
secuencias de numeros repetidos continuos (por ejemplo A = [3333311118888877771145555], n' = 7).
Se sabe ademas que n' es mucho mas chico que n.
Se desea obtener un arreglo C de tamaño n + m que contenga los elementos de A y B, ordenados.

1. Escriba un algoritmo para obtener C que tenga complejidad temporal O(n + (n' + m) log(n' + m)) en el peor caso.
Justifique la complejidad de su algoritmo.

//los indices de los arreglos empiezan en 1 hasta n
OrdenarArreglos(in A: arreglo(nat), in nr, in B: arreglo(nat)){
  nat n = tam(A)
  nat m = tam(B)
  arreglo(nat) C = crearArreglo(n+m)

  coutingSort(A) //no tengo una cota para los elemetos de A
  bucketSort(A, nr)
  //array con tuplas y ordeno
//tengo A ordenado
 mergeSort(B) // ordeno B

  compactar(A, B)

}
compactar(in A: arreglo(nat), in B: arreglo(nat)){
  for i<-1 to tam(A) do {

    if(A[i] <= B[i]){

    }
  }
}

2. Suponiendo que todos los elementos de B se encuentran en A, escriba un algoritmo para obtener C que
tenga complejidad temporal O(n + n
0
(log(n
0
) + m)) en el peor caso y que utilice solamente arreglos como
estructuras auxiliares. Justifique la complejidad de su algoritmo.
