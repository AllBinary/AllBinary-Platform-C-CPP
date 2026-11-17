// Generated Code Do Not Modify

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/junit/jupiter/api/Assertions.h"
#include "org/junit/jupiter/api/DisplayName.h"
#include "org/junit/jupiter/api/Test.h"

typedef struct AppTest AppTest;
struct AppTest {
    char unused;
};


AppTest* AppTest_new(void);
void AppTest_testAddition(AppTest* this);
void AppTest_testStringEquality(AppTest* this);
void AppTest_testBooleanAssertions(AppTest* this);

void AppTest_init(AppTest* this) {
}

AppTest* AppTest_new(void) {
    AppTest* this = calloc(1, sizeof(AppTest));
    AppTest_init(this);
    return this;
}


void AppTest_testAddition(AppTest* this) {
        Assertions_assertEquals(2, 1 + 1);
}


void AppTest_testStringEquality(AppTest* this) {
        const char* expected = "Hello World!";
        const char* actual = "Hello World!";
        Assertions_assertEquals(expected, actual);
}


void AppTest_testBooleanAssertions(AppTest* this) {
        Assertions_assertTrue(true);
        Assertions_assertFalse(false);
}

