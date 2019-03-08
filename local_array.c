//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_local_array() {
    printf("Running local array\n");
    struct Data {
        int id;
        char testVal;
        char name[10];
    };

    struct Data test[10];


    for(int i = 0; i < 10; i++){
        struct Data testData = { i + 30, 'a', "Local Test"};
        test[i] = testData;
        printf("Struct Id = %i and testVal = %c and Name = %s\n", test[i].id, test[i].testVal, test[i].name);
    }

}