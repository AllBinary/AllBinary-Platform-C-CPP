/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.gui.dialog

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/gui/dialog/CloseJDialogListenerInterface.h"

typedef struct ExitCloseListener ExitCloseListener;
struct ExitCloseListener {
    CloseJDialogListenerInterface CloseJDialogListenerInterface_interface;
};


ExitCloseListener* ExitCloseListener_new(void);

void ExitCloseListener_init(ExitCloseListener* this);
void ExitCloseListener_onClose(ExitCloseListener* this);


void ExitCloseListener_init(ExitCloseListener* this) {
}

ExitCloseListener* ExitCloseListener_new(void) {
    ExitCloseListener* this = calloc(1, sizeof(ExitCloseListener));
    ExitCloseListener_init(this);
    return this;
}


void ExitCloseListener_onClose(ExitCloseListener* this) {
        exit(-1);
}

