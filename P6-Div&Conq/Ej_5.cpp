Ejercicio 5
Suponga que se tiene un metodo potencia que, dada un matriz cuadrada A de orden 4 × 4 y un numero n, computa la matriz A^n. Dada una matriz cuadrada A de orden 4 × 4 y un numero natural n que es potencia de 2 (i.e., n = 2k para algun k ≥ 1), desarrollar, utilizando la tecnica de dividir y conquistar y el metodo potencia, un algoritmo que permita calcular
A^1 + A^2 + . . . + A^n
Calcule el numero de veces que el algoritmo propuesto aplica el metodo potencia. Si no es estrictamente menor que O(n), resuelva el ejercicio nuevamente.

tengo:
matriz(nat) = arreglo(arreglo(nat))
potencia(in M: matriz(nat), in n: nat)<-res: matriz(nat)
---------------------------------------------
//no me convence esta solucion, creo que no estoy haciendo D&C
sumarPotencias(in M: matriz(nat), in n: nat){
    if (n = 1) {
        return potencia(M, n)
    }
    else {
        return potencia(M, n) + sumarPotencias(M, n-1) 
    }
}
Complejidad: NOSE

//otra forma, diviciendo las matriz?
