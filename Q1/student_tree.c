#include <search.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
        char* name;
        int middleTest_score;
        int finalTest_score;
}node;

char* student_nametable;
node* nodetable;
node* root = NULL;

int compare(const void *cp1, const void *cp2) {
        return strcmp(((node *)cp1)->name, ((node*)cp2)->name);
}

void print_node(const void *, VISIT, int);

int main() {
        int student;
        printf("학생 수 입력 :");
        scanf("%d", &student);

        student_nametable = (char *) malloc(sizeof(char) * student);
        nodetable = (node *) malloc(sizeof(node) * student);

        char *studentptr = student_nametable;
        node *nodeptr = nodetable;
        node **ret;
        int i = 0;

        for(int i=0; i<student; i++) {
                printf("학생 이름, 중간, 기말 점수를 입력 : \n");
                scanf("%s %d %d", studentptr, &nodeptr->middleTest_score, &nodeptr->finalTest_score);

                nodeptr->name = studentptr;

                // Add Tree
                ret = (node**) tsearch ((void *) nodeptr, (void **) &root, compare);
                printf("\"%s\"", (*ret)->name);

                if(*ret == nodeptr)
                        printf("트리에 추가 \n");
                else
                        printf("이미 존재 \n");

                studentptr += strlen(studentptr) + 1;
                nodeptr++;
        }

        twalk((void *) root, print_node);

        free(student_nametable);
        free(nodetable);
}

void print_node(const void *nodeptr, VISIT order, int level) {
        if( order == preorder || order == leaf ) {
                printf("이름 = %-10s, 중간 = %d, 기말 = %d\n",
                        (*(node **)nodeptr)->name,
                        (*(node**)nodeptr)->middleTest_score,
                        (*(node**)nodeptr)->finalTest_score);
        }
}