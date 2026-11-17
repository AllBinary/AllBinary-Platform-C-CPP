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

typedef struct HorizontalFormProcessor HorizontalFormProcessor;
struct HorizontalFormProcessor {
    Processor base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


HorizontalFormProcessor* HorizontalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void HorizontalFormProcessor_init(HorizontalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);
void HorizontalFormProcessor_process(HorizontalFormProcessor* this);

static void HorizontalFormProcessor_initFields(HorizontalFormProcessor* this) {
    
}


void HorizontalFormProcessor_init(HorizontalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    Processor_init(&this->base);
    HorizontalFormProcessor_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

HorizontalFormProcessor* HorizontalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    HorizontalFormProcessor* this = calloc(1, sizeof(HorizontalFormProcessor));
    HorizontalFormProcessor_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
void HorizontalFormProcessor_process(HorizontalFormProcessor* this) {
        ScrollCurrentSelectionForm_processHorizontalForm(this->scrollCurrentSelectionForm);
        this->scrollCurrentSelectionForm->processor = Processor_getInstance();
}

