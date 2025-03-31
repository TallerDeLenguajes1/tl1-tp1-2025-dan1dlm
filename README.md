[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# Ignorar archivos en Git

Para ignorar un archivo en Git, debemos usar un archivo especial llamado `.gitignore`. Este archivo le indica a Git qué archivos o carpetas no debe rastrear ni incluir en el repositorio.

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

#Autor ✒️
* [dan1dlm] (https://github.com/dan1dlm)
