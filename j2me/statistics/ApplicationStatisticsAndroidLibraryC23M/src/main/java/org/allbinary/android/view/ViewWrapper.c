/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.android.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/view/View.h"
#include "org/allbinary/android/view/BaseViewWrapper.h"

typedef struct ViewWrapper ViewWrapper;
struct ViewWrapper {
    BaseViewWrapper base;
    View* view;
};


ViewWrapper* ViewWrapper_new(View* view);

void ViewWrapper_init(ViewWrapper* this, View* view);
void ViewWrapper_invalidate(ViewWrapper* this);
void ViewWrapper_postInvalidate(ViewWrapper* this);

static void ViewWrapper_initFields(ViewWrapper* this) {
    
}


void ViewWrapper_init(ViewWrapper* this, View* view) {
    BaseViewWrapper_init(&this->base);
    ViewWrapper_initFields(this);
        this->view = view;
}

ViewWrapper* ViewWrapper_new(View* view) {
    ViewWrapper* this = calloc(1, sizeof(ViewWrapper));
    ViewWrapper_init(this, view);
    return this;
}


void ViewWrapper_invalidate(ViewWrapper* this) {
        View_invalidate(this->view);
}


void ViewWrapper_postInvalidate(ViewWrapper* this) {
        View_postInvalidate(this->view);
}

