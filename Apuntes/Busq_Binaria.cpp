Busqueda Binaria
Pre = {el arreglo debe estar ordenado}

Busq_Binaria(in A:arreglo(nat), in value:nat){
  h(x) -> es lo que quiero hcer una vez que encuentre el value en el nat
  //sea borrar, cambia un puntero, etc

  nat desde = 0
  nat hasta =

  while (desde <= hasta) {
    mid = (desde+hasta)/2 //es el indice que accede al array

    if(A[mid] == value){
      h(x)
      break;
    }
    else if (A[mid] > value){
      hasta = mid;
    }
    else if (A[mid] < value){
      desde = mid
    }
  }
}

Otra con recursion:

Buscar(A, elem, desde, hasta)->int {
  if desde-hasta = 1 then {
     if A[desde] = elem then   //O(1)
        return hasta //desvuelvo la posicion
     else
        return -1 //devuelvo un error por que no lo encontre
  }
  mid <- (desde + hasta)/2 //division entera

  if elem <= A[mid] then
     retun Buscar(A, elem, desde, mid) //T(n/2)
  else
     return Buscar(A, elem, m, hasta) //T(n/2)
}

Complejidad: T(n) = T(n/2) + tita(1)
Complejidad: O(logn)
