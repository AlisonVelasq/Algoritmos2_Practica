Dada una secuencia se desesa encontrar el maximo valor que se puede obtener sumando elementos continuos

Ej: {3,-1,4,8,-2,2,-7,5},
El valor es 14 y se obtiene de la subsecuencia {3,-1,4,8}

resolver en complejidad O(nlogn)

comenzamos partiendo a la mitad

ej 1:
A={3,-1,4,8,-2,2,-7,5} //hay muchas posibles subsecuencias
n = 8/2 = 4
ahora tengo A1 = {3,-1,4,8}, A2={}-2,2,-7,5}

y tengo muchas subsecuencias de A1 y A2 (por separado)
pero son menos que las subsecuencias de A,
que pasa con esas subsecuencias de la union A1 y A2 que se pierden?
esto se denomina "lo del medio" esto lo evaluamos despues el medio

(*) esta vez tengo que mirar las dos mitades, lo que es parecido al algoritmo del merge

siguiendo con el algoritmo:
parto la secuencia hasta tener un caso base (un elemento)
forma las subsecuencias y encuentro la combinacion que me da el max de cada mitad

el medio:
empiezo desde el medio a la izq y a la derecha y emcuentro el max
encuentre el max del medio
 //copiar algoritmo 
