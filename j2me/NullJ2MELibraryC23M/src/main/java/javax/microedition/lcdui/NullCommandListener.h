#ifndef JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H
#define JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H
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
typedef struct CommandListener CommandListener;
typedef struct Command Command;
typedef struct Displayable Displayable;
#include "javax/microedition/lcdui/CommandListener.h"

typedef struct NullCommandListener NullCommandListener;
struct NullCommandListener {
    CommandListener CommandListener_interface;
};

extern NullCommandListener* NullCommandListener_NULL_COMMAND_LISTENER;

NullCommandListener* NullCommandListener_new(void);
void NullCommandListener_init(NullCommandListener* this);

void NullCommandListener_commandAction(NullCommandListener* this, Command* c, Displayable* d);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullCommandListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullCommandListener_register(void);


#endif // JAVAX_MICROEDITION_LCDUI_NULLCOMMANDLISTENER_H
