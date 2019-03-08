//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

void run_monolithic_array() {
    printf("Running monolithic array\n");

    // YOUR CODE HERE
    struct Data {
        int id;
        char testVal;
        char name[14];
    };

    struct Data* test;
    test = (struct Data *) malloc(10 * sizeof(struct Data));

    for(int i = 0; i < 10; i++){

        struct Data testData = { i + 10, 'a', "MonolithicTest"};
        test[i] = testData;
        printf("Struct Id = %i and testVal = %c and Name = %s\n", test[i].id, test[i].testVal, test[i].name);
    }
    free(test);
}