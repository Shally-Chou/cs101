#include <stdio.h>
#include <string.h>

typedef struct student
{
    int sID;
    char name[20];
} student_t;

void fillin_students(student_t *p, int id, char *n) {
    p->sID = id;
    strcpy(p->name, n);
    printf("fillin_students %s success\n", n);
}

void search_students(student_t *p, char *s, int n) {
    for (int i = 0; i < n; i++) {
        if (strstr(p[i].name, s) != NULL) {
            printf("FIND %d %s\n", p[i].sID, p[i].name);
        }
    }
}

int main()
{
    student_t list[3];
    fillin_students(&list[0], 1, "IU Lee");
    fillin_students(&list[1], 2, "IUU");
    fillin_students(&list[2], 3, "Lee");
    search_students(list, "IU", 3);  //這裡的'3'代表陣列大小
    return 0;
}