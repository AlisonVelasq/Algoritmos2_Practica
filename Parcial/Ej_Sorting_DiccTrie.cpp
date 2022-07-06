
ordenarRanking(in R: arreglo(string), in A: arreglo(string)) -> res: arreglo(string)
    res <- arreglo(tam(A))

    DiccApariciones <- diccTrie()

    //guardo los strings de R
    for i in [0,..,tam(R)-1] do //O(n)
        definir(DiccApariciones, R[i], 0) //O(k) = O(1) por que esta acotado
    endfor
    //guardo las repeticiones

    for i in [0,..,tam(A)-1]  //O(m)
        definir(DiccApariciones, A[i], significado(DiccApariciones, A[i])++) //O(1) significado tmafien es O(1) por que lñ aclave esta acotada
    endfor

    pos <- 0; //recorre las pos de res, incrementa cada vez que agrego un elem a res
    //lo agrego ordenado a res
    for i in [0,.., tam(R)-1] //O(max(m,n))
        //tengo las claves en orden (recorro R)
        //busco R[i] en el dicc y agrego p veces, siendo p = cant de apariciones
        #apariciones = significado(DiccApariciones, R[i]) //hago esto para no tener que modificat rl dicc (igual no importa si lo modifico)
        while(#apariciones > 0) do // aca en total va a entrar m = tam(A) veces
            //agregarAtras(res, R[i]) //hago esto si ers una lista
            res[pos] <- R[i] //ya lo inicialice asi que puedo asignar
            pos++

            #apariciones--
        end
    end
    return res

    complejidad : en el ultimo for va a entrar m veces si m >n ya uq epor cada itearacion del for voy a recorrer #apariciones veces en el while y el total del las #apariciones en el dicc es m, por lo que la complejidad es O(m)
    el otro caso es si n>m, osea tengo mas registros en R que en A
    entonces va entrar pocas veces en el while y va  aejecuitarse el for completo por que lo que la complejidad va a ser O(n)
    //si o si v a ser O(n), pero en el peor caso(m>n) puede ser mas, es decir O(m)
    ComplejidadTotal: O(2n + m + max(n,m)) = O(n+m) //ignoro los repetidos
