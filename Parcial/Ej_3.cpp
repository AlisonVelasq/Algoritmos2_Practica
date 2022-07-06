tengo un arreglo ordenado de n numeros naturales consecutivos con k huecos
EJ: A = [11,12,13,15,16,19,20,21] tiene huecos en los valores [14,17,18]
el arreglo tiene tamaño potencia de 2

a) dar algoritmo en O(klog(n))

BuscarHuecos(in A:array(nat)) -> res : lista(nat){
    m = tam(A)/2
    izq = subArray(0,m,A)
    der = subArray(m+1,tam(A),A)

    if(tam(A) = 2){ //caso base
        if(A[0] != A[1]++){ //no es consecutivo, entonces tiene hueco
            agregarHuecos(A[0], A[1], &res)
        }
    }
    else{
        if(hayHuecos(izq)){
            BuscarHuecos(izq) //T(n/2)
        }
        if(hayHuecos(der)){
            BuscarHuecos(der) //T(n/2)
        }
    }
    //si hay huecos entre izq y der
    if(izq[m] != der[m+1]){
        agregarHuecos(izq[m], der[m+1], &res)
    }
}

agregarHuecos(in inicio:nat, in fin:nat, in &lista){ //O(1)
    for( i en [inicio,..,fin] ){
        agregarAtras(i, lista)  //O(1)
    }
}
//casos bases : fuera de la recursion
mi caso base es O(k) ya que es la cantidad de veces que tengo que agregar huecos
(*) llamo k veces a agregarAtras de la lista

c)
asumiendo que k=1 justificar formalmente la complejidad
si k=1 mi algoritmo solo se quedara con una de las mitades (izq o der) ya que el
hueco solo podra estar en alguna de las dos mitades, por lo que sera una especie

de busqueda binaria osea que tiene complegidad log(n)
formalmente:
por teorema del maestro, divido en 2 dos subproblemas (c=2) y me quedo con  1 (a=1)
entonces:
T(n) = T(n/2) +O(1) //por que solo tengo un hueco, en realidad es O(k)
como log2(1)= 0, entonces: estoy en el segundo caso
f(n) = O(1) pertenece O(n^0) = O(1) => T(n) = O(logn)

d)
con k>1 :
en el peor caso tenemos que llegar a todos los casos bases posibles (osea entrar
todas las mitades hasta que tam(A) = 2), y sabemos que podemos dividir un arreglo
log(n) veces hasta llegar al caso base, y voy a tener que dividirlo k veces hasta
agregar todos mis huecos(llegar a cada caso base), entonces la complejidad es O(klogn)
