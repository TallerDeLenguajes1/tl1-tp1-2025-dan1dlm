[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# Ignorar archivos en Git

Para ignorar un archivo en Git, debemos usar un archivo especial llamado `.gitignore`. Este archivo le indica a Git qué archivos o carpetas no debe rastrear ni incluir en el repositorio.

## ¿Cómo ignorar un archivo?
Si queremos ignorar un archivo llamado `ignorado.txt`, debemos seguir estos pasos:

1. Crear o editar el archivo `.gitignore` en el directorio raíz del repositorio.
2. Agregar la siguiente línea al archivo `.gitignore`:
   ```sh
   ignorado.txt
