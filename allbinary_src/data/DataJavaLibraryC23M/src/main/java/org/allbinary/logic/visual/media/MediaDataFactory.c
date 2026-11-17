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
// package org.allbinary.logic.visual.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MediaDataFactory MediaDataFactory;
struct MediaDataFactory {
    MediaData* AVI;
    MediaData* BMP;
    MediaData* CEL;
    MediaData* FITS;
    MediaData* FLI;
    MediaData* GBR;
    MediaData* GIF;
    MediaData* GIH;
    MediaData* JPG;
    MediaData* PIX;
    MediaData* PNG;
    MediaData* PNM;
    MediaData* PSD;
    MediaData* PSP;
    MediaData* PS;
    MediaData* SGI;
    MediaData* SWF;
    MediaData* TGA;
    MediaData* TIFF;
    MediaData* WMF;
};

static MediaDataFactory* MediaDataFactory_instance;

MediaDataFactory* MediaDataFactory_new(void);
MediaDataFactory* MediaDataFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MediaDataFactory_staticInit(void) {
    MediaDataFactory_instance = MediaDataFactory_new();
}

static void MediaDataFactory_initFields(MediaDataFactory* this) {
    this->AVI = MediaData_new("avi");
    this->BMP = MediaData_new("bmp");
    this->CEL = MediaData_new("cel");
    this->FITS = MediaData_new("fits");
    this->FLI = MediaData_new("fli");
    this->GBR = MediaData_new("gbr");
    this->GIF = MediaData_new("gif");
    this->GIH = MediaData_new("gih");
    this->JPG = MediaData_new("jpg");
    this->PIX = MediaData_new("pix");
    this->PNG = MediaData_new("png");
    this->PNM = MediaData_new("pnm");
    this->PSD = MediaData_new("psd");
    this->PSP = MediaData_new("psp");
    this->PS = MediaData_new("ps");
    this->SGI = MediaData_new("SGI");
    this->SWF = MediaData_new("swf");
    this->TGA = MediaData_new("tga");
    this->TIFF = MediaData_new("tiff");
    this->WMF = MediaData_new("wmf");
}

void MediaDataFactory_init(MediaDataFactory* this) {
    MediaDataFactory_initFields(this);
}

MediaDataFactory* MediaDataFactory_new(void) {
    MediaDataFactory* this = calloc(1, sizeof(MediaDataFactory));
    MediaDataFactory_init(this);
    return this;
}


MediaDataFactory* MediaDataFactory_getInstance(void) {
        return MediaDataFactory_instance;
}

