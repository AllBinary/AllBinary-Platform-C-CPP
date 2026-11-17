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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ScrollSelectionFormNoneFactory ScrollSelectionFormNoneFactory;
struct ScrollSelectionFormNoneFactory {
    char unused;
};


ScrollSelectionFormNoneFactory* ScrollSelectionFormNoneFactory_new(void);
ScrollSelectionForm* ScrollSelectionFormNoneFactory_getInstance(void);

void ScrollSelectionFormNoneFactory_init(ScrollSelectionFormNoneFactory* this) {
}

ScrollSelectionFormNoneFactory* ScrollSelectionFormNoneFactory_new(void) {
    ScrollSelectionFormNoneFactory* this = calloc(1, sizeof(ScrollSelectionFormNoneFactory));
    ScrollSelectionFormNoneFactory_init(this);
    return this;
}


ScrollSelectionForm* ScrollSelectionFormNoneFactory_getInstance(void) {
        return ScrollSelectionForm_getNullScrollSelectionFormHorizontal();
}

