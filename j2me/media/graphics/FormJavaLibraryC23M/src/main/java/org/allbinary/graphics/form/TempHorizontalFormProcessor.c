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

typedef struct TempHorizontalFormProcessor TempHorizontalFormProcessor;
struct TempHorizontalFormProcessor {
    Processor base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


TempHorizontalFormProcessor* TempHorizontalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void TempHorizontalFormProcessor_init(TempHorizontalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);
void TempHorizontalFormProcessor_process(TempHorizontalFormProcessor* this);

static void TempHorizontalFormProcessor_initFields(TempHorizontalFormProcessor* this) {
    
}


void TempHorizontalFormProcessor_init(TempHorizontalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    Processor_init(&this->base);
    TempHorizontalFormProcessor_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

TempHorizontalFormProcessor* TempHorizontalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    TempHorizontalFormProcessor* this = calloc(1, sizeof(TempHorizontalFormProcessor));
    TempHorizontalFormProcessor_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
void TempHorizontalFormProcessor_process(TempHorizontalFormProcessor* this) {
        ScrollCurrentSelectionForm_processTempHorizontalForm(this->scrollCurrentSelectionForm);
        this->scrollCurrentSelectionForm->processor = Processor_getInstance();
}

