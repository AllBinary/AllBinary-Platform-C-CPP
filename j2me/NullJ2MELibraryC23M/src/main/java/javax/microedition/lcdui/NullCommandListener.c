// Generated Code Do Not Modify
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "javax/microedition/lcdui/CommandListener.h"

typedef struct NullCommandListener NullCommandListener;
struct NullCommandListener {
    CommandListener CommandListener_interface;
};

NullCommandListener* NullCommandListener_NULL_COMMAND_LISTENER;

NullCommandListener* NullCommandListener_new(void);
void NullCommandListener_commandAction(NullCommandListener* this, Command* c, Displayable* d);

// Static fields with runtime initializers: call this once at startup
void NullCommandListener_staticInit(void) {
    NullCommandListener_NULL_COMMAND_LISTENER = NullCommandListener_new();
}

void NullCommandListener_init(NullCommandListener* this) {
}

NullCommandListener* NullCommandListener_new(void) {
    NullCommandListener* this = calloc(1, sizeof(NullCommandListener));
    NullCommandListener_init(this);
    return this;
}


void NullCommandListener_commandAction(NullCommandListener* this, Command* c, Displayable* d) {
}

