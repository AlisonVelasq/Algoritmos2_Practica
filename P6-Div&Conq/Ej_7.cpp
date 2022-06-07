Ejercicio 7
La cantidad de parejas en desorden de un arreglo A[1 . . . n] es la cantidad de parejas de posiciones 1 ≤ i <j ≤ n tales que A[i] > A[j]. Dar un algoritmo que calcule la cantidad de parejas en desorden de un arregloy cuya complejidad temporal sea estrictamente mejor que O(n^2) en el peor caso.
Hint: Considerar hacer una modificacion de un algoritmo de sorting.

una pareja en desorden es basicamente si tengo dos indices i < j tal que sus elem en esa posicion en el arreglo son A[i] > A[j]

//modifiquemos el mergeSort
//iremos dividiendo el array hasta tener 2 elem, miramos si son una pareja en desorden (nunca cambiamos de lugar los elementos)
//luego, con cada array que me quede comparo el array i con los siguiente (i+1)


cantParejEnDesorden(in A: arreglo(nat)){

}
