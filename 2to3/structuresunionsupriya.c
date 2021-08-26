#include<stdio.h>

struct Student {
    int sub[3];
    int total;
};

int main() {
    struct Student marks = { { 100, 100, 100 }, 300 };