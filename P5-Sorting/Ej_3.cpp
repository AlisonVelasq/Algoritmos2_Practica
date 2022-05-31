Ejercicio 3
Escribir un algoritmo que encuentre los k elementos mas chicos de un arreglo de dimension n, donde k ≤ n.
¿Cual es su complejidad temporal? ¿A partir de que valor de k es ventajoso ordenar el arreglo entero primero?

pre{k <= n}
//basicamente uso un SeleccionSort que orneda los primeros k elem
buscarKelem(a:arr[0,..,n], k){
    minimos :arr[0,..,k-1]
    for ( i en [0, k) ) {
        min = a[i];
        for(j en [i+1, n-1]){//busco el mas minimo en todo el array
            if (min > a[j]){ //busco el nuevo minimo
                min = a[j]
            }
        }
        swap(min, a[i]) //intercambio el nuevo minimo encontrado con el iesimo actual
    }
}
Complejidad: si k=1 => O(n), si k=2 => O(2n)... k=n/2 => O(n^2/2).. k=n =>O(n)
Complejidad Temp: O(k*n)

Obs: mientras k se acerca a la mitad de la long del arreglo la complejidad de hace cuadratica por lo que talvez me conviene ornedar todo//NO (pasa cuando k >log(n))

Otra opcion es directamente ordenar el array con un MergeSort que tiene complejidad O(n*log(n))
Actu: viendo las complejidades de los dos algoritmos realmente conviene usar buscarKelem() cuando  k < log(n), caso contrario conviene usar el MergeSort()
