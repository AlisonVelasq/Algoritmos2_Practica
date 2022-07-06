Encuentre un algoritmo para calcular a^b en tiempo logarıtmico en b. Piense como reutilizar los resultados ya calculados.
Justifique la complejidad del algoritmo dado

(*) como quiero complejidad log(b) voy a hacer una especie de busq bin
(*) idea: si parto b y calcula la potencia de a^(b/2) se que al resultado de esto lo tengo que multiplicar por si mismo para tener a*b

potencia(in a: nat, in b:nat) <- res:nat
    m <- b/2 //supongo que b es par

    if b = 2 then //O(1)
        return a*a

    resA = potencia(a, m) //T(n/2)
    res <- resA*resA
    return res //es necesario?

//puedo dividir logb veces a mitades de b
    (*) Por teorema del maestro la complejiodad es O(logb)
    T(n) = T(n/2) +O(1)
