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
// package org.allbinary.media.image.filter

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "javax/swing/filechooser/FileFilter.h"

//TWB - replace with file visitor version
typedef struct ImageFileFilter ImageFileFilter;
struct ImageFileFilter {
    FileFilter base;
};


ImageFileFilter* ImageFileFilter_new(void);
bool ImageFileFilter_accept(ImageFileFilter* this, File* f);
const char* ImageFileFilter_getDescription(ImageFileFilter* this);

void ImageFileFilter_init(ImageFileFilter* this) {
    FileFilter_init(&this->base);
}

ImageFileFilter* ImageFileFilter_new(void) {
    ImageFileFilter* this = calloc(1, sizeof(ImageFileFilter));
    ImageFileFilter_init(this);
    return this;
}


bool ImageFileFilter_accept(ImageFileFilter* this, File* f) {
        if (File_isDirectory(f)) {
            return true;
        }
        const char* s = File_getName(f);
        int32_t i = java_string_lastIndexOf(s, u'.');
        if (i > 0 && i < ((int32_t) strlen(s)) - 1) {
            const char* ext = java_string_toLowerCase(java_substring(s, i + 1, (int32_t) strlen(s)));
            if ((strcmp(ext, "jpg") == 0) || (strcmp(ext, "jpeg") == 0)) {
                return true;
            }
        }
        return false;
}


const char* ImageFileFilter_getDescription(ImageFileFilter* this) {
        return "Accepts .jpg and .jpeg files";
}

