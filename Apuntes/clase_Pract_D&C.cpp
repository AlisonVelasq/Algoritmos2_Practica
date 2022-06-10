Es una estrategia algoritmica que:

if X es chico(o simple) then
   return solucion ad hoc de X
else
    descomponer X en subinstancias X1,X2,..,Xk //dividir
    for (i in [1..k]) {
      Y_i =DC(X_i) //conquistar (resolver el sub problema)
    combinar las soluciones Y_i PARA CONTRUIR UNA SOLUCION PARA X
    }
    //El problema pueden tener para soluciones pero en este caso pienso en la solucion D&C
     //completar con los 3 tipos de calculo de coomplejidades posibles
