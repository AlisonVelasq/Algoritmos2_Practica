Ejercicio 6
  
  tengo un arreglo A desde  [1..n] (contiene n numeros naturales).
  un rango de posiciones [i..j] tq *  contiene una escalera en  A si:      *(1 ≤ i ≤ j ≤ n)
  
  1. (∀ k : nat) i ≤ k < j ⇒ A[k + 1] = A[k] + 1 (esto es, los elementos no solo estan ordenados en forma
       creciente, sino que ademas el siguiente vale exactamente uno mas que el anterior).
  2. Si 1 < i entonces A[i] != A[i − 1] + 1 y si j < n entonces A[j + 1] != A[j] + 1 (la propiedad es maximal, es
      decir que el rango no puede extenderse sin que deje de ser una escalera segun el punto anterior).
      (recuerdo que i y son los min y max indices respectivamente)
  traduccion:
  1. son numeros crecientes contiguos
  2. la escalera solo puede estar entre i y j, antes y despues de ese rango NO! 
    
    lo que mi algoritmo debe hacer 
   Se puede verificar facilmente que cualquier arreglo puede ser
   (1)descompuesto de manera unica como una secuencia de escaleras. 
    Se pide escribir un algoritmo para 
   (2)reposicionar las escaleras del arreglo original, de modo que las mismas 
   (3)presenten en orden decreciente de longitud y, 
   (4)para las de la misma longitud, se presenten ordenadas en forma creciente por el primer valor de la escalera.
El resultado debe ser del mismo tipo de datos que el arreglo original. Calcule la complejidad temporal de la
solucion propuesta, y justifique dicho calculo.
     
   ej: [{5,6}{8,9,10}{7,8,9}{20}{15}] //arreglo original separado por secuencia de escaleras
       [{7,8,9}{8,9,10}{5,6}{15}{20}] //ordenado de la manera que quiero


Pre{A esta ordenado crecientemente} //NO, DEL ARRAY QUE ME DAN SOLO DESCOMPONGO (No reordeno los elementos)
OrdenarEscaleras(A:arr[]) <- res: arr[arr[]]

OrdenarEscaleras(A:arr[]){
  Escaleras <- arr[arr[]] // seria com una matriz
  Escaleras = separoPorSecuenciasDeEscalera(A, long(A))

  ordenoPorLongitud( Escaleras, long(Escaleras) )
 
  return Escaleras
 }
 //mis arr[] son linked list
separoPorSecuenciasDeEscaleras(A:arr[], n: nat){
   res <- arr[arr[]]
   int j <- 0                                  
  //recorro el array
  for( i en [0..n] ){
      
    if( A[i] + 1 ==  A[i + 1] ){
       AgregarAtras(Escalera[j], A[i]) // o puedo Escalera[j] = A[i] ?
       j++;  
    }
    else{
      agregarAtras(res[k], Escalera) //agregamos el array escalera 
      k++
      arr[] Escalera = vacio() //array vacio
      j <- 0
    }
  }
}

ordenoPorLongitud( Escaleras, k: nat ){
    bucketSort por longitudes?
    
    for( k in [0..k] ){
    //una especie de insertion sort
       longitudk = long(Escaleras[k]) //array k del vector que contiene las escaleras
       longitudk2 = long(Escaleras[k+1]
       //aca iria un bucket 
       maxLong = 1
        it = creatIt(Escaleras)
         for( i in [0..] && longitudk < longitudk2 ){
            maxLong = longitudk
            siguiente(it) = longitudk2
            siguiente(siguiente(it)) = longitudk
          }
    }
}
 
