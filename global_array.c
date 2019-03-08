//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

static struct Data {
    int id;
    char testVal;
    char name[11];
};

static struct Data test[10];

void run_global_array() {
    printf("Running global array\n");

    for(int i = 0; i < 10; i++){
        struct Data testData = { i, 'a', "Global Test"};
        test[i] = testData;
        printf("Struct Id = %i and testVal = %c and Name = %s\n", test[i].id, test[i].testVal, test[i].name);
    }

}