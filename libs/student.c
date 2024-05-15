#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void create_student(struct student_t *_student, char *_nim, char *_goar, char *_tahun, enum gender_t _gender)
{
    strcpy(_student->nim, _nim);
    strcpy(_student->goar, _goar);
    strcpy(_student->tahun, _tahun);
    _student->gender = _gender;
    strcpy(_student->dorm, "unassigned");
}
void print_student(struct student_t *_student, int jumlah)
{
    for (int i = 0; i < jumlah; i++)
    {
        if (_student[i].gender == GENDER_MALE)
        {
            printf("%s|%s|%s|male\n", _student[i].nim, _student[i].goar, _student[i].tahun);
        }
        else if (_student[i].gender == GENDER_FEMALE)
        {
            printf("%s|%s|%s|female\n", _student[i].nim, _student[i].goar, _student[i].tahun);
        }
    }
}
void print_student_detail(struct student_t *_student, int jumlah)
{
    for (int i = 0; i < jumlah; i++)
    {
        if (_student[i].gender == GENDER_MALE)
        {
            printf("%s|%s|%s|male|%s\n", _student[i].nim, _student[i].goar, _student[i].tahun, _student[i].dorm);
        }
        else if (_student[i].gender == GENDER_FEMALE)
        {
            printf("%s|%s|%s|female|%s\n", _student[i].nim, _student[i].goar, _student[i].tahun, _student[i].dorm);
        }
    }
}
void assign_student(struct student_t *_student, struct dorm_t *_dorm)
{
    if (_dorm->pigajolma < _dorm->boai)
    {
        if (_student->gender == _dorm->gender)
        {
            strcpy(_student->dorm, _dorm->goar);
            _dorm->pigajolma++;
        }
    }
}
void move_student(struct student_t *_student, struct dorm_t *_dorm, struct dorm_t *old_dorm)
{
    if (_dorm->pigajolma < _dorm->boai)
    {
        if (_student->gender == _dorm->gender)
        {
            strcpy(_student->dorm, _dorm->goar);
            _dorm->pigajolma++;
            old_dorm->pigajolma--;
        }
    }
}