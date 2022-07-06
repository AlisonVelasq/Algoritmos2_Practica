Ejercicio 2
Tenemos un arreglo a = [a1, a2, . . . , an] de n enteros distintos (positivos y negativos) en orden estrictamente creciente.
Queremos determinar si existe una posicion i tal que ai = i. Por ejemplo, dado el arreglo a =
[−4, −1, 2, 4, 7], i = 4 es esa posicion.
Diseñar un algoritmo dividir y conquistar eficiente (de complejidad de orden estrictamente menor que lineal) que resuelva el problema. Calcule y justifique la complejidad del algoritmo dado.

//las posiciones de array se cuentan desde 1
(*) como quiero una complejidad < O(n), entonces seguramente voy a querer una complejidad O(logn) osea que capaz tendre que hacer una especia de busqueda binaria, es decir dividir el array en dos e ir quedandome con solo una de las mitades
Ej: [-4,-1,2,4,7,6] -> [-4,-1,2] [4,7,6]
(*) clave: mayor estricto, me doy cuenta que si el primer indice del subarreglo es menor a lo que esta en esa posicion, es decir si (i < A[i])
entonces  en ese subarreglo es imposible que haya una posicion tal que A[i]=i, por que el arreglo tiene elementos estrictamente crecientes
Ej= [0,1,4,6,7,8]-> como vemos aca apartir del 4 (i=3), como 3<4, entonces apartir de ese elemto es imposible q pase que i=A[i], para algun i >= 3

(*) entonces la idea es ir dividiendo los arreglos y pasarse su respectivo comienzo de indice (respecto al array total) y solo voy a "entrar" al subarreglo tal que i >=A[i], i.e que hay un posible i=A[i]

---------------------------------------------------------------------
Pre = {estrictamente creciente}
existePosicion(in A: arreglo(nat))
    return recursion(A, 0)

recursion(in A: arreglo(nat), in i:nat) -> res: bool
    if i==A[0]/*tam(A) = 1 */then   //O(1)
        return true//i == A[0]

    m <- tam(A)/2
    j <- i + m; // donde empieza der respecto al array principal
    izq <- subarreglo(A, 0, m)
    der <- subarreglo(A, m+1, tam(A))

//descarto negativos y derecha si no hay coincidencia
    if der[0] > j then //descarto der
        recursion(izq, i)
    if izq[0] > i then //dercarto izq
        recursion(der, j)
    else
        return false //no existe una coincidencia

(*)en el peor caso la coincidenica esta muy a la derecha
(*)"mi otro peor caso" es si todos son ocincidencias, pero eso lo resuelve el caso base en O(1) podrimos decir

-------------------------------------------------------------------------
//OTRA SOLUCION
//compara con el medio
existe_aᵢ?(in A: arreglo(nat)) → res: bool
	n ← tamaño(A)

 	if n = 1 then
 		res ← (A[0] = 1)
 	else
 		desde ← 0
 		hasta ← n-1
 		while desde < hasta-1:
	 		medio ← (desde+hasta+1)/2
	 		if A[m] = medio+1 then
	 			res ← true
	 		else if A[m] < medio+1 then
				desde ← medio
			else
				hasta ← medio
			fi
		end while
		res ← A[desde] = desde+1 ∨ A[hasta] = hasta+1
	fi







//No es un solcion div and conq... Mal
--------------------------------------------------------
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
