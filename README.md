# OptiPlan

OptiPlan es una aplicación de planificación de tareas y horarios desarrollada en C++.

Su propósito es ayudar a una persona a organizar tareas considerando elementos como:

- Duración estimada
- Prioridad
- Fecha límite
- Disponibilidad diaria
- Dependencias entre tareas
- Restricciones de horario

A partir de esta información, el sistema generará una propuesta de planificación y advertirá cuando una tarea no pueda completarse dentro del tiempo disponible.

## Objetivo del proyecto

Este proyecto tiene dos objetivos principales:

1. Construir una herramienta útil para organizar cargas de trabajo.
2. Aplicar C++ moderno en un proyecto progresivo, comprensible y preparado para portafolio.

El desarrollo comenzará con una aplicación sencilla de terminal y crecerá por etapas hasta incorporar persistencia de datos, pruebas automatizadas y una interfaz gráfica.

## Funcionalidades previstas

- Registrar, consultar y completar tareas.
- Asignar prioridades y fechas límite.
- Configurar disponibilidad por día.
- Dividir tareas grandes en bloques de trabajo.
- Detectar tareas que no caben en el tiempo disponible.
- Registrar dependencias entre tareas.
- Detectar dependencias circulares.
- Comparar distintas estrategias de planificación.
- Guardar información mediante SQLite.
- Utilizar la aplicación desde terminal y desde una interfaz gráfica.

## Hoja de ruta

### v0.0 — Preparación del proyecto

- Inicializar el repositorio.
- Crear el primer ejecutable.
- Documentar el propósito y la ruta del proyecto.
- Preparar la compilación con C++20.

### v0.1 — Gestión básica de tareas

- Crear el modelo `Task`.
- Almacenar tareas con `std::vector`.
- Mostrar y buscar tareas.
- Marcar tareas como completadas.
- Validar sus datos.

### v0.2 — Primer planificador

- Representar disponibilidad diaria.
- Crear bloques de tiempo.
- Ordenar tareas por fecha límite y prioridad.
- Generar una propuesta de horario.
- Reportar tareas que no pudieron planificarse.

### v0.3 — Organización del código

- Separar declaraciones e implementaciones.
- Dividir el proyecto en archivos `.h` y `.cpp`.
- Incorporar CMake.
- Activar advertencias del compilador.

### v0.4 — Validaciones y pruebas

- Separar la lógica de la entrada y salida por consola.
- Añadir pruebas unitarias.
- Cubrir casos normales y casos límite.
- Mejorar el manejo de errores.

### v0.5 — Dependencias entre tareas

- Representar las tareas como un grafo.
- Detectar ciclos mediante recorrido en profundidad.
- Obtener un orden válido de ejecución.
- Identificar tareas bloqueadas.

### v0.6 — Estrategias de planificación

- Crear una interfaz abstracta para estrategias.
- Implementar planificación por fecha límite.
- Implementar planificación por prioridad.
- Implementar una estrategia equilibrada.
- Seleccionar la estrategia durante la ejecución.

### v0.7 — Persistencia

- Diseñar repositorios de datos.
- Integrar SQLite.
- Guardar y recuperar tareas.
- Persistir dependencias y horarios.

### v0.8 — Interfaz de terminal completa

- Crear flujos para administrar tareas y disponibilidad.
- Generar horarios desde un menú.
- Mostrar conflictos y advertencias.
- Elegir estrategias de planificación.

### v0.9 — Interfaz gráfica

- Incorporar Qt Widgets.
- Crear una ventana principal.
- Mostrar tareas y horarios.
- Editar disponibilidad.
- Conectar la interfaz con el núcleo existente.

### v1.0 — Publicación para portafolio

- Completar la documentación técnica.
- Añadir capturas y diagramas.
- Preparar una demostración.
- Automatizar compilación y pruebas.
- Publicar una versión estable.

## Tecnologías previstas

- C++20
- Biblioteca estándar de C++
- CMake
- SQLite
- Qt 6 Widgets
- Git y GitHub
- Framework de pruebas por definir

