#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int total_faces = 0;

    while (n--) {
        char polyhedron[15];
        scanf("%s", polyhedron);

        if (strcmp(polyhedron, "Tetrahedron") == 0) {
            total_faces += 4;
        } else if (strcmp(polyhedron, "Cube") == 0) {
            total_faces += 6;
        } else if (strcmp(polyhedron, "Octahedron") == 0) {
            total_faces += 8;
        } else if (strcmp(polyhedron, "Dodecahedron") == 0) {
            total_faces += 12;
        } else if (strcmp(polyhedron, "Icosahedron") == 0) {
            total_faces += 20;
        }
    }

    printf("%d\n", total_faces);
    return 0;
}
