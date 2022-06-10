Ejercicio 9
Considere la siguiente estructura para guardar las notas de un alumno de un curso:
alumno es tupla(nombre: string, genero: GEN, puntaje: Notai)
donde GEN es enum{masc, fem} y Nota es un nat no mayor que 10.

Se necesita ordenar un arreglo(alumno) de forma tal que todas las mujeres aparezcan al inicio dela tabla segun un orden creciente de notas y todos los varones aparezcan al final de la tabla tambien ordenados de manera creciente respecto de su puntaje

OrdenarPanilla(in planilla: arreglo(alumno)) {

//voy a ordenar usando BucketSort, mis buckets son las listas de alumnos y en casa posicion del arreglo corresponde a la nota
//donde posteriormente guardo el bucket correspondiente (primero separo por femenino y masculino, luego agrego)

arreglo(nat) res <- vacio()

arreglo(lista(alumno)) bucketsF //el tamaño DEL array es 10
arreglo(lista(alumno)) bucketsM

//agrego los buckets
for(i <- 0 to tam(planilla)-1) {
    alumno a = planilla[i]

    if(a.genero == "fem"){
      AgregarAtras(bucketsF[a.puntaje], a.alumno) //agrego el alumno al bucket
    }
    if(a.genero == "mas"){
      AgregarAtras(bucketsM[a.puntaje], a.alumno) //agrego el alumno al bucket
    }
}
//los backets ya estan ordenados por notas
//concateno los arreglos

res <- concatenar(bucketsF, bucketsM)
return res

//si es un in/out
p <- concatenar(bucketsF, bucketsM)

}
