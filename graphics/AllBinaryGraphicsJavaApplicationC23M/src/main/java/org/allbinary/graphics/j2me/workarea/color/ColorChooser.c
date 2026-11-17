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
// package org.allbinary.graphics.j2me.workarea.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/j2me/workarea/color/JPanel.h"

typedef struct ColorChooser ColorChooser;
struct ColorChooser {
    JPanel base;
    JColorChooser* jColorChooser1;
};


ColorChooser* ColorChooser_new(void);

void ColorChooser_init(ColorChooser* this);
static void ColorChooser_initComponents(ColorChooser* this);

static void ColorChooser_initFields(ColorChooser* this) {
    this->jColorChooser1 = nullptr;
}


void ColorChooser_init(ColorChooser* this) {
    JPanel_init(&this->base);
    ColorChooser_initFields(this);
        ColorChooser_initComponents(this);
}

ColorChooser* ColorChooser_new(void) {
    ColorChooser* this = calloc(1, sizeof(ColorChooser));
    ColorChooser_init(this);
    return this;
}


static void ColorChooser_initComponents(ColorChooser* this) {
        this->jColorChooser1 = JColorChooser_new();
        ColorChooser_setLayout(this, BorderLayout_new());
        ColorChooser_add(this, this->jColorChooser1, java_awt->BorderLayout->CENTER);
}

