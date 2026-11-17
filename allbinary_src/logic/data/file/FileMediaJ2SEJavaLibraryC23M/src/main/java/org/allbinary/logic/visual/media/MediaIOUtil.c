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
// #include "javax/imageio/ImageIO.h"

typedef struct MediaIOUtil MediaIOUtil;
struct MediaIOUtil {
    char unused;
};

static MediaIOUtil* MediaIOUtil_instance;

MediaIOUtil* MediaIOUtil_new(void);
MediaIOUtil* MediaIOUtil_getInstance(void);
const char** MediaIOUtil_getReaderFormatNames(MediaIOUtil* this);
const char** MediaIOUtil_getWriterFormatNames(MediaIOUtil* this);

// Static fields with runtime initializers: call this once at startup
void MediaIOUtil_staticInit(void) {
    MediaIOUtil_instance = MediaIOUtil_new();
}

void MediaIOUtil_init(MediaIOUtil* this) {
}

MediaIOUtil* MediaIOUtil_new(void) {
    MediaIOUtil* this = calloc(1, sizeof(MediaIOUtil));
    MediaIOUtil_init(this);
    return this;
}


MediaIOUtil* MediaIOUtil_getInstance(void) {
        return MediaIOUtil_instance;
}


const char** MediaIOUtil_getReaderFormatNames(MediaIOUtil* this) {
        return ImageIO_getReaderFormatNames();
}


const char** MediaIOUtil_getWriterFormatNames(MediaIOUtil* this) {
        return ImageIO_getWriterFormatNames();
}

