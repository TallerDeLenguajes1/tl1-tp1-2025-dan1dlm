[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# Que es .gigignore
`.gitignore` es un archivo utilizado en proyectos gestionados con Git para especificar qué archivos o directorios no deben ser rastreados ni versionados por Git. Esto incluye archivos temporales, compilados, configuraciones locales, y otros que no son relevantes para el control de versiones o el trabajo en equipo.

## ¿Por qué es conveniente incluirlo?
1. Evitar archivos innecesarios en el repositorio: Muchos archivos generados por el entorno de desarrollo, como archivos temporales de editores, logs, binarios, o configuraciones locales (como node_modules en proyectos de Node.js), no deben ser versionados porque no aportan valor al proyecto y pueden aumentar el tamaño del repositorio innecesariamente.

2. *Mantener el repositorio limpio*: Incluyendo un .gitignore bien configurado, se asegura que Git ignore archivos que no son parte del código fuente, evitando que se suban archivos basura al repositorio.

3. *Evitar conflictos y errores*: Archivos de configuración personal, como archivos de bases de datos locales o claves privadas, no deben ser compartidos entre los miembros del equipo ni ser versionados, ya que esto puede llevar a problemas de seguridad o conflictos al compartir el código.

4. *Mejorar el rendimiento*: Al evitar que Git rastree archivos innecesarios, se mejora el rendimiento tanto a nivel local como en el servidor de Git (GitHub, GitLab, Bitbucket, etc.), ya que se reduce el tamaño del repositorio.

## ¿Cuándo se debe hacer?
* *Desde el inicio del proyecto*: Lo ideal es configurar el archivo .gitignore al inicio del proyecto, antes de realizar los primeros commits. Esto asegura que los archivos no deseados no sean rastreados desde el principio.

* *Cuando se añaden archivos generados automáticamente*: Si se están generando archivos automáticamente (por ejemplo, archivos binarios, archivos de log, o node_modules en un proyecto de Node.js), es importante agregar esos patrones al .gitignore para que Git los ignore en futuros commits.

* *Al agregar dependencias*: En proyectos que gestionan dependencias (como proyectos de Python con venv o proyectos de JavaScript con node_modules), es fundamental agregar estos directorios al .gitignore para evitar que se versionen.

* *Cuando se detectan archivos innecesarios ya versionados*: Si se detectan archivos innecesarios que ya han sido versionados (por ejemplo, archivos temporales que han sido accidentalmente añadidos a Git), se debe modificar el .gitignore y luego eliminar esos archivos del repositorio usando el comando `git rm`.

## ¿Cómo ignorar un archivo?
Si queremos ignorar un archivo llamado `ignorado.txt`, debemos seguir estos pasos:

1. Crear o editar el archivo `.gitignore` en el directorio raíz del repositorio.
2. Agregar la siguiente línea al archivo `.gitignore`:
   ```sh
   ignorado.txt
3. Guardar los cambios y asegurarnos de que Git no esté rastreando el archivo:
   ```sh
   git rm --cached ignorado.txt  
4. Hacer un commit para aplicar los cambios:
   ```sh
   git commit -m "Agregado ignorado.txt a .gitignore"
5. Finalmente, subir los cambios al repositorio remoto si es necesario:
   ```sh
   git push origin main  

## Cosas a tener en cuenta
* `.gitignore` no afecta archivos que ya han sido versionados previamente. Si `ignorado.txt` ya estaba en el repositorio antes de ser agreagado a `.gitignore`, hay que eliminarlo con `git rm --cached`
* Podemos ignorar múltiples archivos y carpetas agregando más reglas en `.gitignore`.

## Autor ✒️
* [dan1dlm](https://github.com/dan1dlm)


# Ejercicio 3

## ¿Por qué los resultados de `puntero` y `&variable` son iguales?
Cuando declaramos la variable `*puntero`, le damos la dirección de memoria de la variable "x", es decir, cuando mostramos por pantalla a `puntero`, nos va a aparecer la dirección de memoria de la variable. Luego, si mostramos `&variable` por pantalla, también vamos a ver la dirección de memoria de la variable ya que & te ubica a su dirección, podemos verlo en la asignación del puntero:
`puntero = &x;`

## Dirección de memoria del puntero
Cuando en pantalla mostramos, `&puntero`, estamos mostrando la dirección de memoria del puntero, debido a que "&" nos da la dirección de memoria de las variables. No es igual a mostrar `puntero` ó `&variable`, ya que estos nos devuelve la direccion de memoria de la variable que contiene el puntero y la direccion de "variable".

