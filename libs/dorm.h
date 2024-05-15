#ifndef DORM_H
#define DORM_H

#include "gender.h"

struct dorm_t
{
  char goar[20];
  unsigned short boai;
  enum gender_t gender;
  unsigned short pigajolma;
};

void create_dorm(struct dorm_t *_dorm, char *_goar, unsigned short _boai, enum gender_t _gender);
void print_dorm(struct dorm_t *_dorm, int jumlah);
void print_dorm_detail(struct dorm_t *_dorm, int jumlah);
#endif
