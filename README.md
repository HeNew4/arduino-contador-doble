# arduno-contador-display

## ¿Que se nesecita?

Para este proyecto se nesesita:

| Componente  | Especificaciones | Nota dicional                    |
| ----------- | ---------------- | -------------------------------- |
| Arduino     |                  | Pueder cual sea                  |
| Display     | DA05             | fue echo para el DA05            |
| Resistencia | 330 Ω            | En este caso se uso una de 330 Ω |
| Cables      | 8 cables         | Se recomenda duponts             |
| protoboard  | Cual sea         | :)                               |

---

## Mas informacion

Es un pequeño contador del 0 al 9 pero se le puede añadir mas numeros.

Para este proyecto se usan las termianles 6, 5, 4, 3, 2, 1 y 0

Las variables son:

``` cpp
// Unidades
const int SALIDA1 = 6; // Controla el pin 6
const int SALIDA2 = 5; // Controla el pin 5
const int SALIDA3 = 4; // Controla el pin 4
const int SALIDA4 = 3; // Controla el pin 3
const int SALIDA5 = 2; // Controla el pin 2
const int SALIDA6 = 1; // Controla el pin 1
const int SALIDA7 = 0; // Controla el pin 0
// Decena
const int SALIDA8 = 7; // Controla el pin 7
const int SALIDA9 = 8; // Controla el pin 8
const int SALIDA10 = 9; // Controla el pin 9
const int SALIDA11 = 10; // Controla el pin 10
const int SALIDA12 = 11; // Controla el pin 11
const int SALIDA13 = 12; // Controla el pin 12
const int SALIDA14 = 13; // Controla el pin 13
```
