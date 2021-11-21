![Tec de Monterrey](images/logotecmty.png)

# Act 5.1 - Implementación individual de operaciones sobre conjuntos

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>

En este repositorio encontrarás el archivo "HashTable.h". En este archivo deberás desarrollar la implementación del problema presentado en esta actividad. En la parte superior del archivo coloca, en comentarios, tus datos. Por ejemplo:

```
// =========================================================
// File: activity.h
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```

En <span style="text-decoration-line: underline;">forma individual</span>, diseña e implementa una tabla de dispersión que incluya su técnica de hashing así como el manejo de colisiones a través de dirección abierta:

<table style="height: 10px; width: 0%; border-collapse: collapse; border-top-style: solid; border-right-style: solid; border-bottom-style: solid; border-left-style: solid;" border="1">
<tbody>
<tr style="height: 24px;">
<td style="width: 25%; height: 10px; background-color: rgb(25, 99, 169);" rowspan="5"><span style="font-size: 18pt; color: rgb(255, 255, 255);">chain</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Descripción</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">Manejo de desbordamiento por encadenamiento</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Entrada</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">La tabla de dispersión e información adicional sobre los elemento a insertar</span></td></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Salida</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">Nada</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Precondición</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">Una tabla hash válida</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 10px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Postcondición</span></td>
<td style="width: 0px; height: 10px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">Tabla hash debidamente actualizada</span></td>
</tr>
</tbody>
</table>

<br>Todas las funcionalidades deberán de estar correctamente alineadas y documentadas.&nbsp; Recuerda que todas las funcionalidades deberán pasar exitosamente todas las pruebas. Como parte de la documentación deberá incluirse la complejidad de cada una de ellas, considera agregar los comentarios necesarios para justificar tu respuesta.

Para probar tu implementación, ejecuta el comando:

```
make
```

Este comando compilará tu código y generará una serie de archivos de pruebas llamados "runTest#", donde # será un número de prueba. Para ejecutar prueba, solo deberás ejecutar el archivos correcto. Por ejemplo, si quiere revisar si mi código cumple con la prueba número 3, deberías ejecutar:

```
./test
```

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **70%** - Para cada una de las funcionalidades se evaluará:

  - **Excelente (70%)** - pasa correctamente todos los casos de prueba.
  - **Muy Bien (55%)** - pasa correctamente el 75% de los casos de prueba.
  - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
  - **Insuficiente (25%)** - pasa correctamente menos del 50% de los casos de prueba.

- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.
- **10%** - Especifican en cada uno de las funcionalidades **la complejidad computacional** como parte de su documentación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>

Cuando hayas pasado todas las pruebas, recuerda publicar el código en tu repositorio (_git push_).
