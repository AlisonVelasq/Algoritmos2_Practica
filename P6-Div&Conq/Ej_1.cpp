Ejercicio 1
Escriba un algoritmo con dividir y conquistar que determine si un arreglo de tamano potencia de 2 es masa la izquierda, donde “mas a la izquierda” significa que:
* La suma de los elementos de la mitad izquierda superan los de la mitad derecha.
* Cada una de las mitades es a su vez “m´as a la izquierda”.

Por ejemplo, el arreglo [8, 6, 7, 4, 5, 1, 3, 2] es “m´as a la izquierda”, pero [8, 4, 7, 6, 5, 1, 3, 2] no lo es.
Intente que su solucion aproveche la tecnica de modo que complejidad del algoritmo sea estrictamente menora O(n^2).

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
