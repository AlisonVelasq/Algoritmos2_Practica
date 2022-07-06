se armaron varias tandas de salidas de los corredores, se necesita armar los resultados finales
tiempo de carrera: min llegada - min salida (cuando tardo en llegar a la meta)
se desea crear un funcion que obtenga la *lista ordenada de los primeros* p corredos mas rapidos, apartir de los resultados de todas las tandas

participante: nombre x tiempo que tardo

Primeros(in p:nat, in tandas:lista(lista(participante))) -> res:lista(participante)
ej:
Primeros(3,{[(ana, 15), (beto, 20)], [(carlos, 11), (david, 12), (erica, 30)]})
=> [ (carlos, 11), (david, 12), (ana, 15)]

a)Dar el algoritmo en o(t + (p logt)) : t=cant de tandas
(*)mirando la complejidad, la idea seria tener un algoritmo que busque en logt al que hizo el min tiempo de carrera y va hacer esta busqueda p veces
seguro que el +t viene de pasar la lista de lista a otra estructura

(*)las sub listas estan ordenadas
(*)no puedo concatenar el total de lista por que recorrerlas me cuesta O(participantes)
y necesito solo poder recorrer por tandas para tener O(t)
una idea para que de la complejidad O(t) es agarrar el min de cada lista, guardarlo en algun lugar y con estos hacer un minHeap y cuando saque el minimo del minHeap, recorrer su respectiva lista y hallar el nuevo minimo(si no esta en la lista de su tanda buscarlo en el min heap)

Primeros(in p:nat, in tandas:lista(lista(participante))) -> res:lista(participante){
    /*no me sirve que las listas esten separadas, las concateno con punteros
    lista(participante) lista = ConcatenarListas(tandas) //O(t) //NO ME SIRVE
    //array(participante) array = ListaToArray() //NO*/

    //busco el minimo de cada tanda
    for(i in [0,..,tam(tandas)]){ //O(t)
        //nesecito agarrar el que tiene velocidad minima
        
    }

}
