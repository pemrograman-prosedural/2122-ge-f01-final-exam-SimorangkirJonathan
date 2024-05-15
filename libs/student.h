#ifndef STUDENT_H
#define STUDENT_H

#include "gender.h"
#include "dorm.h"

struct student_t
{
    char nim[12];
    char irem[40];
    char tahun[5];
    enum gender_t gender;
    char dorm[20];
};

void create_student(struct student_t *_student, char *_nim, char *_goar, char *_tahun, enum gender_t _gender);
void print_student(struct student_t *_student, int jumlah);
void print_student_detail(struct student_t *_student, int jumlah);
void assign_student(struct student_t *_student, struct dorm_t *_dorm);
void move_student(struct student_t *_student, struct dorm_t *_dorm, struct dorm_t *old_dorm);
void leave_student(struct student_t *_student, struct dorm_t *_dorm);
#endif
