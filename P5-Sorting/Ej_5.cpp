Ejercicio 5
Se tiene un arreglo de n numeros naturales que se quiere ordenar por frecuencia, y en caso de igual frecuencia, por su valor.
Por ejemplo, a partir del arreglo [1, 3, 1, 7, 2, 7, 1, 7, 3] se quiere obtener [1, 1, 1, 7, 7, 7, 3, 3, 2].
Describa un algoritmo que realice el ordenamiento descrito, utilizando las estructuras de datos intermedias que considere necesarias. Calcule el orden de complejidad temporal del algoritmo propuesto.

//fecuencia = cant de veces aparece el mismo elem
//la idea es tomarlo como un multiconj, por lo cual lo guardo en un dicc
OrdenarxFrecuencia(a:arr[], n:nat){ //longitud del array
    //multConj = dicc(elem:nat, cant:nat)
    //una mejor idea es : tener las cantidades como claves para asi poder ordenar directamente
    sinRepet <- conj(nat)
    conjxCant <- dicc(cant:nat, elems:arr[nat])
    aOrdenado <- arr[]
    //agrego los elem
    for(i en [0, n]){
        n = aparaciones(sinRepet, a)
        definir(n, a[i], conjxCant)
        //ordenar
        MergeSort(conjxCant) //ordena el dicc por las claves
    }
    itdicc = CrearIt(conjxCant)
    //recorro las claves del dicc
    while(siguienteClave(itdicc) != NULL){
        while(significado(conjxCant, sig v != NULL){
            aOrdenado.pushBack()

        }
    }

}
