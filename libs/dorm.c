#include "dorm.h" 
#include <stdio.h>
#include <string.h>

void create_dorm(struct dorm_t *_dorm, char *_goar, unsigned short _boai, enum gender_t _gender)
{
    strcpy(_dorm-> goar, _goar);
    _dorm->boai = _boai;
    _dorm->gender= _gender;
    _dorm->pigajolma = 0;
} 

void print_dorm(struct dorm_t *_dorm, int jumlah)
{
  for (int j = 0 ; j < jumlah; j++)
  {
    if (_dorm [j].gender == GENDER_MALE)
    {
    printf ("%s|%.d|, male\n", _dorm[j]. goar, _dorm[j].boai);
    }
    else if (_dorm [j].gender == GENDER_FEMALE)
    {  
    printf ("%s|%d|, female\n", _dorm[j]. goar, _dorm[j].boai);
    }
  }
}

void print_dorm_detail(struct dorm_t *_dorm, int jumlah)
{
        for (int c = 0 ; c < jumlah; c++)
     {
        if (_dorm [c].gender == GENDER_MALE)
        {
        printf ("%s|%.d|, male\n", _dorm[c]. goar, _dorm[c].boai, _dorm[c]. pigajolma);
        }
        else if (_dorm[c]. gender == GENDER_FEMALE )
        {
        printf ("%s|%d|, female\n", _dorm[c]. goar, _dorm[c].boai, _dorm[c]. pigajolma);
        }
    }
}

