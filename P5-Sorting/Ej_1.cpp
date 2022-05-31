Ejercicio 1
//Comparar la complejidad de los algoritmos de ordenamiento dados en la teorica para el caso en que el arreglo a ordenar se encuentre perfectamente ordenado de manera inversa a la deseada.
//supongo que siempre quiero ordenar de menor a mayor

1. Selecion Sort:
como este algoritmo se basa en buscar el minimo, siempre va a tener que recorrer todo el arreglo para encontrarlo

SelectionSort(a:arr[], n: nat){
    for( i desde [0, n-2]) {
        min <- seleccionar_min(i, n-1)//recorre n veces para encontrar el min
        intercambiar(i, min) //un swap
    }
}
complejidad: O(n^2)
obs: el peor caso que el array este ordenado de manera inversa

2. Insertion Sort:
si el array esta ordenado de mayor a menor, los swap que haga va depender de la longitud del arreglo, como nunca voy a tener que insertar "en el medio" (esto mejora la complejidad, ya que no tiene que corre los elem tantas veces) y el iesimo elemento que voy a insertar siempre va ser menor al primer elem del arrar entonces voy a tener que "correr" todo el array siempre
 complejidad : O(n^2)
ej: {4,3,2,1} -> {3,4,2,1} -> {2,3,4,1} -> {1,2,3,4}
InsertionSort(a: arr[]){
    for(i en [1, n-1]){
        j <- i-1, elem <- a[i]
        while (j >= 0 && a[j] > elem) { //siempre entra aca (entra n veces al final)
            a[j+1] <- a[j] //"corro" los elem
            j <- j-1
        }
        a[j+1] <- elem
    }
}
obs: el peor caso es que le array este ordenado de manera inversa

3. Heap Sort:
complejidad: O(n*log(n))
4. Merge Sort:
complejidad: O(n*log(n))
