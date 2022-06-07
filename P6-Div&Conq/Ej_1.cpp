Ejercicio 1
Escriba un algoritmo con dividir y conquistar que determine si un arreglo de tamano potencia de 2 es masa la izquierda, donde “mas a la izquierda” significa que:
* La suma de los elementos de la mitad izquierda superan los de la mitad derecha.
* Cada una de las mitades es a su vez “m´as a la izquierda”.

Por ejemplo, el arreglo [8, 6, 7, 4, 5, 1, 3, 2] es “mas a la izquierda”, pero [8, 4, 7, 6, 5, 1, 3, 2] no lo es.
Intente que su solucion aproveche la tecnica de modo que complejidad del algoritmo sea estrictamente menora O(n^2).
(*) ambas partes, izq y der deben estar a masAizquierda

//pseudo codigo
//en vez de arr[] uso arreglo(nat)
modulo arreglo(nat) : arr[]
operaciones:
CrearArreglo(in tam:nat);
Copiar(in A:arreglo(nat));
Subarreglo(in A:arreglo(nat), in desde: nat, in hasta: nat);

estaMasAizquierda(in A: arreglo(nat)){
    return masAizquierda(A)
}
//T(n) es la complejidad de masAizquierda, donde n es el tamaño de A
masAizquierda(in A: arreglo(nat)){
    nat t = tam(A)/2 //O(1) // si tam(A)/2 no es par, me devuelve la parte entera

    arreglo(nat) left <- Copiar(Subarreglo(A, 0, t-1)) //O(t), t es el tamaño del arreglo, osea t=n/2
    arreglo(nat) rigth <- Copiar(Subarreglo(A, t, tam(A)-1)) //O(t)

    if tam(left) = 1 && tam(rigth) = 1 then
        return (left[0] > rigth[0]) //O(1)
    else
        return (sumarArray(left) > sumarArray(rigth)) && masAizquierda(left) && masAizquierda(rigth)// 0(sumarArray) + 2T(n/2)
    end if
}
// Complejidad = 0(1) + 2*O(n/2) + O(1) + 2T(n/2) + O(sumarArray)

 int sumarArray(in B: arreglo(nat)){

     if (tam(B) == 1) then {
         return n[0]; //O(1)
     }
     else{
         nat ultIndice = tam(n)-1;
         n.pop_back(); // pop_back() borra el ultimo elem del array (es un void)
        return n[ultIndice] + sumarArray(n); //T(n-1)
     }
 }
//Complejidad: T(n) = O(1) + T(n-1)


complejidad: T(n) representa a la complejidad de todo el algoritmo
Entonces la complejidad de masAizquierda es:

si n = 1:
    T(n) = 1
si n > 1:
    T(n) =  0(1) + 2*O(n/2) + O(1) + 2T(n/2) + O(sumarArray)
         = 2T(n/2) + O(sumarArray) + 2*O(n/2)
         = 2T(n/2) + O(1) + 2*O(n/2)
         = 2T(n/2) + 2*(n/2)
    Por Teorema del Maestro:

complejidad de sumarArray:
    T(n) = O(1) + T(n-1) = T(n-1)
         = T((n-1)-1) = T(n-2)
         = T((n-2)-1) = T(n-3)...
         hasta n-1, entonces:
         T(n) = T(1) = O(1)

    //EJEMPLO:
    Calculo la complejidad:
    T(n) = 2 T(n/2) = 2 (2 T(n/4)) = 4T(n/4) = 8 T(n/8) = ...
    	 = 2ᵏ T(n/2ᴷ)
    Quiero ver cuanto vale el tiempo hasta que n/2ᵏ = 1 ⇒ k = log n
    T(n) = 2^(log n) T(n/2^(log n)) = n T(n/n) = n T(1) = n
    Finalmente T(n) = n ⇒ T(n) ∈ O(n) ⊂ O(n²)


 //implementcion en c++
#include <iostream>
#include <vector>
using namespace std;

 int sumarArray(vector<int> n){

     if(n.size() == 1){
         return n[0];
     }
     else{
         int ultIndice = n.size()-1;
         n.pop_back(); // pop() borra el ultimo elem del array (es un void)
        return n[ultIndice] + sumarArray(n);
     }
 }

 bool masAizquierda(vector<int> v){7
     vector<int> middle_left = mitad_izq(v);
     vector<int> middle_rigth = mitad_der(v);

     if(middle_left.size() == 1 && middle_rigth.size() == 1){
         return (middle_left[0] > middle_rigth[0] );
     }
     else{

         return ( sumarArray(middle_left) > sumarArray(middle_rigth) ) && masAizquierda(middle_left);
     }
 }



int main()
{
     vector<int> numbers ={2,4,1,3,2};
     cout << "Esta mas a izquierda: "<< masAizquierda;
    return 0;
}
