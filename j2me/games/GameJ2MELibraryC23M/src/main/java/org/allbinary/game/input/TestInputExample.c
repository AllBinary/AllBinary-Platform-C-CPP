// Generated Code Do Not Modify
#include "org/allbinary/game/input/TestInputExample.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/TestInputInterface.h"











void TestInputExample_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TestInputExample_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TestInputExample", nullptr);
    java_register_method("TestInputExample", "up", (void*) TestInputExample_up);
    java_register_method("TestInputExample", "down", (void*) TestInputExample_down);
    java_register_method("TestInputExample", "left", (void*) TestInputExample_left);
    java_register_method("TestInputExample", "right", (void*) TestInputExample_right);
    java_register_method("TestInputExample", "strafeLeft", (void*) TestInputExample_strafeLeft);
    java_register_method("TestInputExample", "strafeRight", (void*) TestInputExample_strafeRight);
    java_register_method("TestInputExample", "paint", (void*) TestInputExample_paint);
    java_register_method("TestInputExample", "paintThreed", (void*) TestInputExample_paintThreed);
}

static void TestInputExample_initFields(TestInputExample* this) {
    this->testValue = 0;
}

void TestInputExample_init(TestInputExample* this) {
    TestInputExample_register();
    TestInputExample_initFields(this);
}

TestInputExample* TestInputExample_new(void) {
    TestInputExample* this = java_object_alloc(sizeof(TestInputExample), "TestInputExample");
    TestInputExample_init(this);
    return this;
}


void TestInputExample_up(TestInputExample* this) {
}


void TestInputExample_down(TestInputExample* this) {
}


void TestInputExample_left(TestInputExample* this) {
        this->testValue++;
}


void TestInputExample_right(TestInputExample* this) {
        this->testValue--;
}


void TestInputExample_strafeLeft(TestInputExample* this) {
}


void TestInputExample_strafeRight(TestInputExample* this) {
}


void TestInputExample_paint(TestInputExample* this, Graphics* graphics) {
}


void TestInputExample_paintThreed(TestInputExample* this, Graphics* graphics) {
}

