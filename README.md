# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->
El programa va ir sumando los números y te da el resultado y debe de aceptar numeros decimales negativos 
_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
5 numeros decimales no cadenas que seran sumados  _____

**Salidas:**
1. _un resultado de la suma de las 5 variables____

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Se deben de sumar los 5 numeros siempre_____
- y se deben d ingresar las 5 variables_____

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
_Por que siguen siendo 5 variables ____

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
_____que se deben calcula la suma de las 5 variables 

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | 3,9,4,6,7_____ | __29___ |
| 2 | _21,43,7,9,89____ | _169____ |
| 3 | 3,8,9,6,7_____ | _33____ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** __si___

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
PS C:\Users\lucia\OneDrive\Documentos\GitHub\proyecto\ulsa_ime_1_dp_suma_numeros> g++ main.cpp
PS C:\Users\lucia\OneDrive\Documentos\GitHub\proyecto\ulsa_ime_1_dp_suma_numeros> .\a.exe
Bienvenido al programa de suma de 5 numeros
Ingresa 5 numeros: 12,34,2,34,12
La suma de los 5 numeros es: 12
PS C:\Users\lucia\OneDrive\Documentos\GitHub\proyecto\ulsa_ime_1_dp_suma_numeros> 
```
_____
```


## 8. Experimentos (Fase 3)

*Experimento A: ¿qué pasó al no inicializar suma?*
___Mostro error

*Experimento B (opcional): ¿qué pasó al usar int con 2.5?*
___

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | _15 | SI_ |
| Todos ceros | 0 ×5 | 0 | _0_ | SI_ |
| Con negativos |-2,-8,-4,-3,-1|  |-18 | SI_ |
| Decimales | 0.5 ×5 | 2.5 | 2.5 | SI_ |
| Todos iguales | 7 ×5 | 35 | _35 | SI_ |
| Caso propio 1 | 12,24,54,65,76 | 231_ | _SI_ |
| Caso propio 2 | -9,8,-7,8,9| 9 | SI |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Falló una parte de la sintaxis | el punto y coma | SI |
| 2 | __ | __ | ___ |

*Reto elegido (opcional):* ___

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
|  NADA| NADA |

## 12. Reflexión final

*¿Qué aprendí con esta práctica?*
Aprendí a escribir código en la terminal

*Ahora que terminé, ¿qué cambiaría de mi proceso?*
pues entenderle mas y el como ponerlo

*¿Qué fue lo más difícil y cómo lo resolví?*
Escribir el código bien y saber acomodarlo

*¿Qué pregunta me quedó sin responder?*
Ninguna por ahora

## 13. Lista de verificación antes de entregar (Fase 5)

- [ SI] Llené todas las secciones (no quedan _____)
- [SI] Mi programa compila sin advertencias
- [SI] Probé todos los casos de la tabla
- [SI] Hice al menos 3 commits con mensajes claros
- [SI] Hice git push y verifiqué mi fork en GitHub
- [SI] Entregué el enlace de mi fork en Classroom