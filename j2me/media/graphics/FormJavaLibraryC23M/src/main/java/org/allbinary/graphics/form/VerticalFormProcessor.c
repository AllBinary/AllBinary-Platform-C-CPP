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
#include "org/allbinary/canvas/Processor.h"

typedef struct VerticalFormProcessor VerticalFormProcessor;
struct VerticalFormProcessor {
    Processor base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


VerticalFormProcessor* VerticalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void VerticalFormProcessor_init(VerticalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);
void VerticalFormProcessor_process(VerticalFormProcessor* this);

static void VerticalFormProcessor_initFields(VerticalFormProcessor* this) {
    
}


void VerticalFormProcessor_init(VerticalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    Processor_init(&this->base);
    VerticalFormProcessor_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

VerticalFormProcessor* VerticalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    VerticalFormProcessor* this = calloc(1, sizeof(VerticalFormProcessor));
    VerticalFormProcessor_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
void VerticalFormProcessor_process(VerticalFormProcessor* this) {
        ScrollCurrentSelectionForm_processVerticalForm(this->scrollCurrentSelectionForm);
        this->scrollCurrentSelectionForm->processor = Processor_getInstance();
}

