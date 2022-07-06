Dado un arbol binario cualquiera, diseñar un algoritmo de dividir y conquistar que devuelva la maximadistancia entre dos nodos
(es decir, maxima cantidad de ejes a atravesar). El algoritmo no debe hacer recorridos innecesarios sobre el arbol.

(*)divido la raiz de los sub arboles izq y der
1)voy a analizar el camino mas largo que atravieza la raiz, es decir
maxDist = pataIzq+pataDer+raiz, y esto se va hacer recursivamente
2) hago lo mismo con los subarboles
3) devuelvo el maximo

maxDistancia(in arbol: ab(nat)) <- res:nat

//nose
pataMaxDist(in arbol:ab) -> res:nat
if arbol = nil then
    res <- 0
else
    MaxPata_Izq <- pataMaxDist(Aizq)
    MaxPata_Der <- pataMaxDist(Ader)

    distMaxRaiz = MaxPata_Der + MaxPata_Izq + 1
    if (MaxPata_Izq = MaxPata_Der) then

    izq <-pataMasLarga(Aizq)
    res <-()
