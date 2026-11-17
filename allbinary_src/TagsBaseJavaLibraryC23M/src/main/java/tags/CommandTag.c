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
// package tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "tags/CustomTagSupport.h"

typedef struct CommandTag CommandTag;
struct CommandTag {
    CustomTagSupport base;
    TagStrings* tagStrings;
    const char* command;
};


CommandTag* CommandTag_new(void);

void CommandTag_init(CommandTag* this);
void CommandTag_setCommand(CommandTag* this, const char* command);
const char* CommandTag_getCommand(CommandTag* this);

static void CommandTag_initFields(CommandTag* this) {
    this->tagStrings = TagStrings_getInstance();
    this->command = nullptr;
}


void CommandTag_init(CommandTag* this) {
    CustomTagSupport_init(&this->base);
    CommandTag_initFields(this);
}

CommandTag* CommandTag_new(void) {
    CommandTag* this = calloc(1, sizeof(CommandTag));
    CommandTag_init(this);
    return this;
}


void CommandTag_setCommand(CommandTag* this, const char* command) {
        this->command = command;
}


const char* CommandTag_getCommand(CommandTag* this) {
        return this->command;
}

