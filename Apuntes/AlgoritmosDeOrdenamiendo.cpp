Ordenamiento (Sorting)
Ordenar: arreglo[α] -> arreglo[α]

1) Selection Sort:
usa n busquedas del minimo, por lo cual es ineficiente

Repetir para las posiciones sucesivas i del arreglo:
 Seleccionar el mínimo elemento que se encuentra entre la posición
actual y el final.
 Ubicarlo en la posición i, intercambiándolo con el ocupante original
de esa posición.

Costo: O(n^2) en todos los casos

Algoritmos:
pseudo codigo:
1: //no es tan descriptivo
SelectionSort(a:arr[], n: nat){
    for( i desde [0, n-2]) {
        min <- seleccionar_min(i, n-1)
        intercambiar(i, min) //un swap
    }
}
2:
SelectionSort(a:arr[], n: nat){
    for (i en [0, n-2]) {
    min <- i
    for i desde [0, n-2] {
        if a[j] < a[min] then min <- j
    }
    intercambiar(i, min) //un swap
    }
}

//una posible implementacion
void SelectionSort(int arr[], int n){
    int i, j, min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {//encuentra el elemento minimo del array con n-i elementos
            if (arr[j] < arr[min])
                min = j; }
        swap(&arr[min], &arr[i]); //hago swap el con el minimo e iesimo
    }}

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

2)Insertion Sort
    va comparando los siguiente elem y "corre" los elementos e inserta si es menor al anterior

    ej: a = {4,3,1,2}
    //itero desde 1, no desde i = 0
    1: i=1 comparo a[i] = 3 < 4 = minActual? si
    {4,3,1,2} "saco el nuevo min"-> {4, ,1,2} "corro"-> { ,4,1,2} -> "inserto" ->{3,4,1,2}
    2: i=2 comparo a[i] = 1 < 3 = minActual? si
    {3,4,1,2} -> {3,4, ,2}->{ ,3,4,2} -> {1,3,4,2}
    3: i=3 comparo a[i] = 2 < 1 =minActual? no
    4: comparo a[i] = 2 < 3 ? si, entonces inserto aca
    {1,3,4,2} -> {1,3,4, } -> {1, ,3,4} -> {1,2,3,4}

Algoritmos:
pseudo codigo:
InsertionSort(a: arr[]){
    for(i en [1, n-1]){
        j <- i-1, elem <- a[i]
        while (j >= 0 && a[j] > elem) {
            a[j+1] <- a[j] //"corro" los elem
            j <- j-1
        }
        a[j+1] <- elem
    }
}
Costo peor caso: O(n^2)
Costo mejor caso: O(n)
observacion:
1. si el arreglo esta parcialmente ordenado la complejidad mejora

3) Heap Sort:
recuerdo: Heap es la estructura para una cola de prioridad (p4)

Algoritmo de ordenamiento de un array basado en un heap
Algoritmo:
HeapSort(A:arr[]){
    heap <-array2heap(A) //convierto el array en una cola ordenada?
    for(i desde [n-1, 0]){ //recorro el array A
        max <- proximo(heap) //agarro el primero de la cola
        desencolar(heap) //saco el primero de la cola
        A[i]<-max //pongo el max en el ultimo lugar del array
    }
}
//array2heap(A) tiene complejidad O(n)
Costo: O(n) + O(n*log(n))

4) Merge Sort
-dividir un problema en problemas similares....pero más chicos
-resolver los problemas menores
-Combinar las soluciones de los problemas menores para obtener la solución del problema original.

MergeSort(arr[]){
    if (n < 2){} entoces el arr[] ya esta ordenada
    else{} dividir el arr[] en dos partes iguales (ose por la mitad)
    -ordenar recursivamente(con el mismo algoritmo) ambas mitades
    -unir ambas mitades (ya ordenada) en un unico arreglo
}
ej: a = {6,2,9,5} :arr[]
    n = logitud(a)
1: n=4, como (2>n) no se cumple => divido
{6,2,9,5} -> a1= {6,2} y a2={9,5}

2: n=2 como (2>n) se sigue sin cumplir => divido
{6,2} -> {6} y {2}
{9,5} -> {9} y {5}

3: n=1 como (2>n) se cumple => merge (ordeno y uno mitades)
{6} y {2} -> a1 = {2,6}
{9} y {5} -> a2 = {5,9}
otro merge entre a1 y a2-> {2,5,6,9}

Costo(suponiendo n=2^k) = O(n*log(n))

5) Quik Sort
 Supongamos que conocemos el elemento mediano
del arreglo
 Algoritmo
 Separar el arreglo en dos mitades: los elementos menoresque el mediano por un lado y los mayores por el otro.
 Ordenar las dos mitades
