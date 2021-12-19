#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void ex_1(char* Str)
{
   char str[] = "milfi lubyat marata";

   int len = 0, i = 0, j = 0;
   while (str[len])
      ++len;

   j = len;
   while (i < j--)
   {
      char str2 = str[i];
      str[i++] = str[j];
      str[j] = str2;
   }

   i = 0;
   while (str[i])
   {

      while (str[i] == ' ')
         ++i;

      j = i;
      while (str[j] && str[j] != ' ')
         ++j;

      int last = j;
      while (i < j--)
      {
         char str2 = str[i];
         str[i++] = str[j];
         str[j] = str2;
      }

      i = last;
   }
   printf("%s", str);
}


void ex_2(char* Str) {
   struct People
   {
      char Surname[100];
      char Name[100];
      char SecondName[100];
      char Sex[60];
      char Post[128];
      int Day;
      int Month;
      int Year;
      int Age;
   };

   setlocale(LC_ALL, "RUSSIAN");
   int count = 0;

   scanf_s("%d", &count);

   struct People* Arr = (struct People*)malloc(count * sizeof(struct People));
   for (int i = 0; i < count; i++)
   {
      printf("Введите Фамилию:");
      scanf_s("%s", Arr[i].Surname, 256);

      printf("Введите Имя:");
      scanf_s("%s", Arr[i].Name, 256);

      printf("Введите Отчество:");
      scanf_s("%s", Arr[i].SecondName, 256);

      printf("Введите Пол:");
      scanf_s("%s", Arr[i].Sex, 256);

      printf("Введите Должность:");
      scanf_s("%s", Arr[i].Post, 256);

      printf("Введите День рождения:");
      scanf_s("%d", &Arr[i].Day);

      printf("Введите Месяц рождения:");
      scanf_s("%d", &Arr[i].Month);

      printf("Введите Год рождения:");
      scanf_s("%d", &Arr[i].Year);

   }

   for (int i = 0; i < count; i++)
   {
      if (strcmp(Arr[i].Post, "Инженер") == 1)
      {
         if (strcmp(Arr[i].Sex, "Мужчина") == 1)
         {
            if (Arr[i].Age >= 65)
            {
               printf("%s %s %s, %s, %s, %d.%d.%d", Arr[i].Surname, Arr[i].Name, Arr[i].SecondName, Arr[i].Sex, Arr[i].Post, Arr[i].Day, Arr[i].Month, Arr[i].Year);
            }
         }
         else (strcmp(Arr[i].Sex, "Женщина" && Arr[i].Age >= 60) == 1);

            printf("%s %s %s, %s, %s, %d.%d.%d", Arr[i].Surname, Arr[i].Name, Arr[i].SecondName, Arr[i].Sex, Arr[i].Post, Arr[i].Day, Arr[i].Month, Arr[i].Year);
   
      }

   }


}
