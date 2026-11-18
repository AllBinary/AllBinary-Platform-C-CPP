#ifndef ORG_ALLBINARY_ANIMATION_TEXT_TEXTCHANGELISTENER_H
#define ORG_ALLBINARY_ANIMATION_TEXT_TEXTCHANGELISTENER_H
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
// package org.allbinary.animation.text

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TextChangeListener TextChangeListener;
struct TextChangeListener {
    char unused;
};


TextChangeListener* TextChangeListener_new(void);
void TextChangeListener_init(TextChangeListener* this);

TextChangeListener* TextChangeListener_getInstance(void);

void TextChangeListener_onMeasure(TextChangeListener* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TextChangeListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TextChangeListener_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TEXT_TEXTCHANGELISTENER_H
