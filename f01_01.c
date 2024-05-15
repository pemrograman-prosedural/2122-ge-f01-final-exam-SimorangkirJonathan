// 12S23030 - Simorangkir Jonathan
// 12S23045 - Chintya ReginaUli Rajagukguk

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/gender.h"

int main(int _argc, char **_argv)
{
  char input[75];
  int zdrm = 0;
  int size = 0;
  struct dorm_t *drm = malloc(size * sizeof(struct dorm_t));
  int zstd = 0;
  int sizee = 0;
  struct student_t *mhs = malloc(sizee * sizeof(struct student_t));
  char *token;

  while (1 == 1)
  {
    fgets(input, sizeof input, stdin);
    input[strlen(input) - 1] = '\0';

    token = strtok(input, "#");
    if (strcmp(token, "---") == 0)
    {
      break;
    }
    else if (strcmp(token, "dorm-add") == 0)
    {
      size++;
      drm = realloc(drm, size * sizeof(struct dorm_t));
      drm[zdrm] = create_dorm(input);
      zdrm++;
    }
    else if (strcmp(token, "student-add") == 0)
    {
      sizee++;
      mhs = realloc(mhs, sizee * sizeof(struct student_t));
      mhs[zstd] = create_student(input);
      zstd++;
    }
    else if (strcmp(token, "student-print-all-detail") == 0)
    {
      for (int m = 0; m < zstd; m++)
      {
        print_student_detail(mhs[m]);
      }
    }
    else if (strcmp(token, "student-leave") == 0)
    {
      char *nim = strtok(NULL, "#");
      char *asrama = "left";
      leave_student(drm, mhs, nim, asrama, zstd, zdrm, find_id, find_dorm);
    }
    else if (strcmp(token, "assign-student") == 0)
    {
      char *nim = strtok(NULL, "#");
      char *asrama = strtok(NULL, "#");
      assign_student(drm, mhs, nim, asrama, zstd, zdrm, find_id, find_dorm);
    }
  }
  free(mhs);
  free(drm);

  return 0;
}
