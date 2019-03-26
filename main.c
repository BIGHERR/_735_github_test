#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "mstn_usb.h"

typedef struct _person {
    char *name;
    int num: 5;
    unsigned is_printed: 1;
} person;

void sort(person *list, int n) {
    int new_num;
    for(int i = 0; i < n; i++) {
        do {
           new_num = rand()%n;
        } while(list[new_num].is_printed);
        list[new_num].num = new_num;
        list[new_num].is_printed = 1;
        printf("%s\n", list[new_num].name);
    }
}

int main(int argc, char *argv[]) {
    while (USB_GetStatus() != PERMITTED);
    const int _735_len = 20;
    person _735_list[] = {
       {"1. Baranov Dmitriy", -1, 0},
       {"2. ========================", -1, 0},
       {"3. Gaifulina Anastasia", -1, 0},
       {"4. Goncharova Anzhelika", -1, 0},
       {"5. Dyhova Anna", -1, 0},
       {"6. ========================", -1, 0},
       {"7. Zaytsev Mikhail Olegovich", -1, 0},
       {"8. ========================", -1, 0},
       {"9. Koryshev Nikolay Pavlovich ", -1, 0},
       {"10. ========================", -1, 0},
       {"11. ========================", -1, 0},
       {"12. Mazurok Oleg Olegovich ", -1, 0},
       {"13. Mironov Danila", -1, 0},
       {"14. Osipov Daniil Andreevich", -1, 0},
       {"15. ========================", -1, 0},
       {"16. ========================", -1, 0},
       {"17. ========================", -1, 0},
       {"18. ========================", -1, 0},
       {"19. ========================", -1, 0},
       {"20. Fedorov Evgeniy Andreevich", -1, 0},
   };
   sort(_735_list, _735_len);
   printf("sizeof(person) = %d\n", sizeof(person));
   return EXIT_SUCCESS;
}
