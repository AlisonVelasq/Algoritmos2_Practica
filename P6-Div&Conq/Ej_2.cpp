Ejercicio 2
Tenemos un arreglo a = [a1, a2, . . . , an] de n enteros distintos (positivos y negativos) en orden estrictamente creciente.
Queremos determinar si existe una posicion i tal que ai = i. Por ejemplo, dado el arreglo a =
[−4, −1, 2, 4, 7], i = 4 es esa posicion.
Diseñar un algoritmo dividir y conquistar eficiente (de complejidad de orden estrictamente menor que lineal) que resuelva el problema. Calcule y justifique la complejidad del algoritmo dado.

//las posiciones de array se cuentan desde 1
Pre = {estrictamente creciente}

existePosicion(in A: arreglo(nat)){
    return coincideConElIesimo(A, 0)
}

coincideConElIesimo(in A: arreglo(nat), in i:nat ){
    if (i = tam(A)) {
        return A[i] = i
    }
    else{
        return A[i] = i && coincideConElIesimo(A, i++)
    }
}
