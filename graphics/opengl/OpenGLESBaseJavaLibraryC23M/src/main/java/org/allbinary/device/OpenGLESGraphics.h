#ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
#define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
// Generated Code Do Not Modify
// package org.allbinary.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GraphicsInterface GraphicsInterface;
typedef struct NullGL10 NullGL10;
typedef struct GL GL;
typedef struct GL10 GL10;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct FontDebugBase FontDebugBase;
typedef struct OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface;
typedef struct CommonStrings CommonStrings;
#if __has_include("javax/microedition/khronos/opengles/GL10.h")
#include "javax/microedition/khronos/opengles/GL10.h"
#endif
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/device/GraphicsInterface.h"

typedef struct OpenGLESGraphics OpenGLESGraphics;
struct OpenGLESGraphics {
    Graphics base;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    GraphicsInterface GraphicsInterface_interface;
    CommonStrings* commonStrings;
    GL10* gl;
};


OpenGLESGraphics* OpenGLESGraphics_new(void);

void OpenGLESGraphics_init(OpenGLESGraphics* this);

void OpenGLESGraphics_updateGL(OpenGLESGraphics* this, GL* gl);

void OpenGLESGraphics_set(OpenGLESGraphics* this, GL* gl);

void OpenGLESGraphics_initMethod(OpenGLESGraphics* this);

void OpenGLESGraphics_update(OpenGLESGraphics* this);

void OpenGLESGraphics_setOrthoginalMode(OpenGLESGraphics* this);

void OpenGLESGraphics_setCameraMode(OpenGLESGraphics* this);

GL10* OpenGLESGraphics_getGl10(OpenGLESGraphics* this);

void OpenGLESGraphics_setFontDebug(OpenGLESGraphics* this, Font* font, FontDebugBase* fontDebug);
#define OpenGLESGraphics_new0 OpenGLESGraphics_new
#define OpenGLESGraphics_init0 OpenGLESGraphics_init
#ifndef OpenGLESGraphics_clipRect
#define OpenGLESGraphics_clipRect Graphics_clipRect
#endif
#ifndef OpenGLESGraphics_drawArc
#define OpenGLESGraphics_drawArc Graphics_drawArc
#endif
#ifndef OpenGLESGraphics_drawChar
#define OpenGLESGraphics_drawChar Graphics_drawChar
#endif
#ifndef OpenGLESGraphics_drawChars
#define OpenGLESGraphics_drawChars Graphics_drawChars
#endif
#ifndef OpenGLESGraphics_drawImage
#define OpenGLESGraphics_drawImage Graphics_drawImage
#endif
#ifndef OpenGLESGraphics_drawLine
#define OpenGLESGraphics_drawLine Graphics_drawLine
#endif
#ifndef OpenGLESGraphics_drawRect
#define OpenGLESGraphics_drawRect Graphics_drawRect
#endif
#ifndef OpenGLESGraphics_drawRoundRect
#define OpenGLESGraphics_drawRoundRect Graphics_drawRoundRect
#endif
#ifndef OpenGLESGraphics_drawString
#define OpenGLESGraphics_drawString Graphics_drawString
#endif
#ifndef OpenGLESGraphics_drawSubstring
#define OpenGLESGraphics_drawSubstring Graphics_drawSubstring
#endif
#ifndef OpenGLESGraphics_fillArc
#define OpenGLESGraphics_fillArc Graphics_fillArc
#endif
#ifndef OpenGLESGraphics_fillRect
#define OpenGLESGraphics_fillRect Graphics_fillRect
#endif
#ifndef OpenGLESGraphics_fillRoundRect
#define OpenGLESGraphics_fillRoundRect Graphics_fillRoundRect
#endif
#ifndef OpenGLESGraphics_getBlueComponent
#define OpenGLESGraphics_getBlueComponent Graphics_getBlueComponent
#endif
#ifndef OpenGLESGraphics_getClipHeight
#define OpenGLESGraphics_getClipHeight Graphics_getClipHeight
#endif
#ifndef OpenGLESGraphics_getClipWidth
#define OpenGLESGraphics_getClipWidth Graphics_getClipWidth
#endif
#ifndef OpenGLESGraphics_getClipX
#define OpenGLESGraphics_getClipX Graphics_getClipX
#endif
#ifndef OpenGLESGraphics_getClipY
#define OpenGLESGraphics_getClipY Graphics_getClipY
#endif
#ifndef OpenGLESGraphics_getColor
#define OpenGLESGraphics_getColor Graphics_getColor
#endif
#ifndef OpenGLESGraphics_getFont
#define OpenGLESGraphics_getFont Graphics_getFont
#endif
#ifndef OpenGLESGraphics_getGrayScale
#define OpenGLESGraphics_getGrayScale Graphics_getGrayScale
#endif
#ifndef OpenGLESGraphics_getGreenComponent
#define OpenGLESGraphics_getGreenComponent Graphics_getGreenComponent
#endif
#ifndef OpenGLESGraphics_getRedComponent
#define OpenGLESGraphics_getRedComponent Graphics_getRedComponent
#endif
#ifndef OpenGLESGraphics_getStrokeStyle
#define OpenGLESGraphics_getStrokeStyle Graphics_getStrokeStyle
#endif
#ifndef OpenGLESGraphics_getTranslateX
#define OpenGLESGraphics_getTranslateX Graphics_getTranslateX
#endif
#ifndef OpenGLESGraphics_getTranslateY
#define OpenGLESGraphics_getTranslateY Graphics_getTranslateY
#endif
#ifndef OpenGLESGraphics_setClip
#define OpenGLESGraphics_setClip Graphics_setClip
#endif
#ifndef OpenGLESGraphics_setColor
#define OpenGLESGraphics_setColor Graphics_setColor
#endif
#ifndef OpenGLESGraphics_setFont
#define OpenGLESGraphics_setFont Graphics_setFont
#endif
#ifndef OpenGLESGraphics_setGrayScale
#define OpenGLESGraphics_setGrayScale Graphics_setGrayScale
#endif
#ifndef OpenGLESGraphics_setStrokeStyle
#define OpenGLESGraphics_setStrokeStyle Graphics_setStrokeStyle
#endif
#ifndef OpenGLESGraphics_translate
#define OpenGLESGraphics_translate Graphics_translate
#endif
#ifndef OpenGLESGraphics_drawRegion
#define OpenGLESGraphics_drawRegion Graphics_drawRegion
#endif
#ifndef OpenGLESGraphics_drawRGB
#define OpenGLESGraphics_drawRGB Graphics_drawRGB
#endif
#ifndef OpenGLESGraphics_fillTriangle
#define OpenGLESGraphics_fillTriangle Graphics_fillTriangle
#endif
#ifndef OpenGLESGraphics_copyArea
#define OpenGLESGraphics_copyArea Graphics_copyArea
#endif
#ifndef OpenGLESGraphics_getDisplayColor
#define OpenGLESGraphics_getDisplayColor Graphics_getDisplayColor
#endif
#ifndef OpenGLESGraphics_implementationError
#define OpenGLESGraphics_implementationError Graphics_implementationError
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESGraphics_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESGraphics_register(void);

#if __has_include("javax/microedition/khronos/opengles/GL10.h")
#include "javax/microedition/khronos/opengles/GL10.h"
#endif

#endif // ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICS_H
