#include <stdio.h>
#define MAX_STUDENTS 3
struct Student {
  char name[100];
  int age;
  enum Score {
    A, B, C, D, F
  } score;
};
void addStudent(int c) {
  if (c >= MAX_STUDENTS) {
    printf("Maximum number of students reached.\n");
  } else {
    printf("Enter the student's name: ");
    scanf("%s\n", s[c].name);
    printf("Enter the student's age: ");
    scanf("%d\n", &s[c].age);
    char grade;
    printf("Enter the student's grade (A, B, C, D, or F): ");
    scanf("%c\n", &grade);
    if (grade == 'A') {
      s[c].score = 0;
    } else if (grade == 'B') {
      s[c].score = 1;
    } else if (grade == 'C') {
      s[c].score = 2;
    } else if (grade == 'D') {
      s[c].score = 3;
    } else {
      s[c].score = 4;
    }
    printf("Student added successfully.\n");
  }
}
void displayStudents(int c) {
  if (c == 0) {
    printf("No students to display.\n");
  } else {
    printf("List of students:\n");
    for (int i = 0; i < c; i++) {
      printf("Student %d\n", i + 1);
      printf("Name: %s\n", s[i].name);
      printf("Age: %d\n", s[i].age);
      printf("Score: ");
      switch (s[i].score) {
        case 0:
          printf("A\n");
          break;
        case 1:
          printf("B\n");
          break;
        case 2:
          printf("C\n");
          break;
        case 3:
          printf("D\n");
          break;
        case 4:
          printf("F\n");
          break;
      }
      printf("\n");
    }
  }
}
void findHighestScore(int c) {
  int index = 0;
  for (int i = 1; i < c; i++) {
    if (s[i].score > s[index].score) {
      index = i;
    }
  }
  printf("Highest-scoring student:\n");
  printf("Name: %s\n", s[index].name);
  printf("Age: %d\n", s[index].age);
  printf("Score: ");
  switch (s[index].score) {
    case 0:
      printf("A\n");
      break;
    case 1:
      printf("B\n");
      break;
    case 2:
      printf("C\n");
      break;
    case 3:
      printf("D\n");
      break;
    case 4:
      printf("F\n");
      break;
  }
  printf("\n”);
}
int main() {
int option;
int count = 0;
do {
  printf("1. Add student\n2. Display students\n3. Find highest-scoring student\n4. Exit\n");
  scanf("%d", &option);
  switch (option) {
case 1:
      addStudent(count);
      count++;
      break;
    case 2:
      displayStudents(count);
      break;
    case 3:
      findHighestScore(count);
      break;
    case 4:
      printf("Exiting the program. Thank you for using our system!\n");
      break;
    default:
      printf("Invalid option. Please try again.\n");
      break;
  }
} while (option != 4);
  return 0;
}
