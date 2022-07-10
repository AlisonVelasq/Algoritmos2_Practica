la complejidad no debe ser peor que O(n) por lo cual uso BucketSort
(*)ordenar por el ancho de edificios de forma creciente
anchosEdificios(in A:arreglo(nat), t) <-res:arreglo(nat)
    //nesecito dividir por edificios uso buccket
    bucketEdificios <- array(lista(nat))
    bucket <- array(lista(nat)) // el tamaño del array a lo sumo sera igaul que tam(A)
    //guardo por ancho (en cada posiscion del array iran los edificios con ancho i)
    (*) asumo que dos edificios no pueden tener el mismo ancho
    nat j <- 0

    for i in [1,..,tam(A)-1] do
    lista(nat) listaAux <- crearlist()
        if A[i]-A[i+1] < t then
            agregarAtras(bucketEdificios[j], A[i])
        end
        j <- j+1
    endfor
    for i in [1,..,tam(bucketEdificios)]
    bucket[tam(A)] = lista(nat)

    endfor
    //ya tenog los backets con los edificios ordenados por ancho
