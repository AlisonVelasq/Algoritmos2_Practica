tengo:

MismoTema(in v:video, in v2:video) -> res bool en O(1) //nos dice si dos videos tratn sobre el mismo tema
Combinar(in v:video, in v2:video) -> res:video en O(d(v)+d(v2)) siendo d(x)= duracion del video x //combina dos videos
Ej: siendo v1,v2 y v4 del mismo tema => Peliculas( [v1,v2,v3,v4] ) ~ [v1,v2,v(3-4)]
//solo combina v3 y v4 por que solo ellos son consecutivos

idea: tengo que llegar a la complejidad O(n + Dlogn) donde n =cant total de peliculas y
D = la suma de la duracion de todas las peliculas

Peliculas( in V:arreglo(video) ) -> res:arreglo(video) {

    aux
}
