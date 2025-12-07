#include<stdio.h>
struct student {
    int roll;
    char name[50];
    char dept[50];
    char course[50];
    int year;
};
int main() {
    struct student s[50];
    int n, i, r;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter details of student== %d\n",i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Department: ");
        scanf("%s", s[i].dept);
        printf("Course: ");
        scanf("%s", s[i].course);
        printf("Year of Joining: ");
        scanf("%d", &s[i].year);
    }
    printf("Enter roll number to search: ");
    scanf("%d", &r);
    for(i = 0; i < n; i++) {
        if(s[i].roll == r) {
            printf("\nStudent Details:\n");
            printf("Roll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Department: %s\n", s[i].dept);
            printf("Course: %s\n", s[i].course);
            printf("Year of Joining: %d\n", s[i].year);
            return 0;
        }
    }
    printf("Roll Number not found");
    return 0;
}
