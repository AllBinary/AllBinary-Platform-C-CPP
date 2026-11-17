/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2026 AllBinary
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
// #include "javax/microedition/lcdui/Form.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/Item.h"
// #include "javax/microedition/media/Manager.h"
// #include "javax/microedition/media/MediaException.h"
// #include "javax/microedition/media/Player.h"

//like microemu-playn, so the languages without overloading can be generated. J2ME uses the MIDP overloads.
typedef struct MIDPUtil MIDPUtil;
struct MIDPUtil {
    char unused;
};

static MIDPUtil* MIDPUtil_instance;

MIDPUtil* MIDPUtil_new(void);
MIDPUtil* MIDPUtil_getInstance(void);
Image* MIDPUtil_createImageWH(MIDPUtil* this, int32_t width, int32_t height);
Image* MIDPUtil_createImageFromByteArray(MIDPUtil* this, int8_t* imageData, int32_t imageOffset, int32_t imageLength);
Image* MIDPUtil_createImageFromInputStream(MIDPUtil* this, InputStream* inputStream);
Player* MIDPUtil_createPlayerFromInputStream(MIDPUtil* this, InputStream* inputStream, const char* type);
int32_t MIDPUtil_appendItem(MIDPUtil* this, Form* form, Item* item);

// Static fields with runtime initializers: call this once at startup
void MIDPUtil_staticInit(void) {
    MIDPUtil_instance = MIDPUtil_new();
}

void MIDPUtil_init(MIDPUtil* this) {
}

MIDPUtil* MIDPUtil_new(void) {
    MIDPUtil* this = calloc(1, sizeof(MIDPUtil));
    MIDPUtil_init(this);
    return this;
}


MIDPUtil* MIDPUtil_getInstance(void) {
        return MIDPUtil_instance;
}


Image* MIDPUtil_createImageWH(MIDPUtil* this, int32_t width, int32_t height) {
        return Image_createImage(width, height);
}


Image* MIDPUtil_createImageFromByteArray(MIDPUtil* this, int8_t* imageData, int32_t imageOffset, int32_t imageLength) {
        return Image_createImage(imageData, imageOffset, imageLength);
}


// throws IOException
Image* MIDPUtil_createImageFromInputStream(MIDPUtil* this, InputStream* inputStream) {
        return Image_createImage(inputStream);
}


// throws IOException, MediaException
Player* MIDPUtil_createPlayerFromInputStream(MIDPUtil* this, InputStream* inputStream, const char* type) {
        return Manager_createPlayer(inputStream, type);
}


int32_t MIDPUtil_appendItem(MIDPUtil* this, Form* form, Item* item) {
        return Form_append(form, item);
}

