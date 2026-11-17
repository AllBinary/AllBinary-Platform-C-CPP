// Generated Code Do Not Modify
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PolygonRasterizer PolygonRasterizer;
struct PolygonRasterizer {
    char unused;
};

static PolygonRasterizer* PolygonRasterizer_instance;

PolygonRasterizer* PolygonRasterizer_new(void);
PolygonRasterizer* PolygonRasterizer_getInstance(void);
int32_t* PolygonRasterizer_getPixelBuffer(PolygonRasterizer* this, const char* svgPath, int32_t* pathX, int32_t* pathY, int32_t* pixelBuffer, int32_t width, int32_t height);
void PolygonRasterizer_fillPolygon(PolygonRasterizer* this, int32_t* polyX, int32_t* polyY, int32_t numPoints, int32_t* buffer, int32_t width, int32_t height, int32_t colorRGB);
void PolygonRasterizer_main(PolygonRasterizer* this, const char** args);

// Static fields with runtime initializers: call this once at startup
void PolygonRasterizer_staticInit(void) {
    PolygonRasterizer_instance = PolygonRasterizer_new();
}

void PolygonRasterizer_init(PolygonRasterizer* this) {
}

PolygonRasterizer* PolygonRasterizer_new(void) {
    PolygonRasterizer* this = calloc(1, sizeof(PolygonRasterizer));
    PolygonRasterizer_init(this);
    return this;
}


PolygonRasterizer* PolygonRasterizer_getInstance(void) {
        return PolygonRasterizer_instance;
}


int32_t* PolygonRasterizer_getPixelBuffer(PolygonRasterizer* this, const char* svgPath, int32_t* pathX, int32_t* pathY, int32_t* pixelBuffer, int32_t width, int32_t height) {
        int32_t pointCount = PathParser_parsePath(svgPath, pathX, pathY, java_array_length(pathX));
        for (int32_t i = 0; i < java_array_length(pixelBuffer); i++) {
            pixelBuffer[i] = 0xFFFFFFFF;
        }
        PolygonRasterizer_fillPolygon(PolygonRasterizer_getInstance(), pathX, pathY, pointCount, pixelBuffer, width, height, 0xFFFF00FF);
        return pixelBuffer;
}


void PolygonRasterizer_fillPolygon(PolygonRasterizer* this, int32_t* polyX, int32_t* polyY, int32_t numPoints, int32_t* buffer, int32_t width, int32_t height, int32_t colorRGB) {
        if (numPoints < 3) {
            return;
        }
        FixedPoint* fixedPoint = FixedPoint_getInstance();
        int32_t* x = ((int32_t*) java_array_new(sizeof(int32_t), numPoints));
        int32_t* y = ((int32_t*) java_array_new(sizeof(int32_t), numPoints));
        int32_t minY = height;
        int32_t maxY = 0;
        for (int32_t i = 0; i < numPoints; i++) {
            x[i] = FixedPoint_toInt(fixedPoint, polyX[i]);
            y[i] = FixedPoint_toInt(fixedPoint, polyY[i]);
            if (y[i] < minY) {
                minY = y[i];
            }
            if (y[i] > maxY) {
                maxY = y[i];
            }
        }
        if (minY < 0) {
            minY = 0;
        }
        if (maxY >= height) {
            maxY = height - 1;
        }
        int32_t* scanlineX = ((int32_t*) java_array_new(sizeof(int32_t), numPoints));
        for (int32_t scanY = minY; scanY <= maxY; scanY++) {
            int32_t intersectCount = 0;
            for (int32_t i = 0; i < numPoints; i++) {
                int32_t next = (i + 1) % numPoints;
                int32_t x1 = x[i];
                int32_t y1 = y[i];
                int32_t x2 = x[next];
                int32_t y2 = y[next];
                if ((y1 < scanY && y2 >= scanY) || (y2 < scanY && y1 >= scanY)) {
                    if (y2 != y1) {
                        int32_t interX = x1 + (scanY - y1) * (x2 - x1) / (y2 - y1);
                        scanlineX[intersectCount++] = interX;
                    }
                }
            }
            for (int32_t i = 0; i < intersectCount - 1; i++) {
                for (int32_t j = i + 1; j < intersectCount; j++) {
                    if (scanlineX[i] > scanlineX[j]) {
                        int32_t temp = scanlineX[i];
                        scanlineX[i] = scanlineX[j];
                        scanlineX[j] = temp;
                    }
                }
            }
            for (int32_t i = 0; i < intersectCount; i += 2) {
                if (i + 1 >= intersectCount) {
                    break;
                }
                int32_t startX = scanlineX[i];
                int32_t endX = scanlineX[i + 1];
                if (startX < 0) {
                    startX = 0;
                }
                if (endX >= width) {
                    endX = width - 1;
                }
                int32_t rowOffset = scanY * width;
                for (int32_t pixelX = startX; pixelX <= endX; pixelX++) {
                    buffer[rowOffset + pixelX] = colorRGB;
                }
            }
        }
}


void PolygonRasterizer_main(PolygonRasterizer* this, const char** args) {
        int32_t width = 100;
        int32_t height = 100;
        int32_t* pathX = ((int32_t*) java_array_new(sizeof(int32_t), 200));
        int32_t* pathY = ((int32_t*) java_array_new(sizeof(int32_t), 200));
        int32_t* pixelBuffer = ((int32_t*) java_array_new(sizeof(int32_t), width * height));
        const char* svgPath = "M 32.139812,81.554575 14.450128,74.294372 V 50.000034 25.705697 l 17.73231,-7.268329 C 41.935209,14.439788 49.953112,11.168898 50,11.168723 c 0.04689,-1.74e-4 8.064791,3.270238 17.817562,7.267583 l 17.73231,7.267899 V 50 74.295795 l -17.73231,7.2679 c -9.752771,3.997344 -17.789855,7.264116 -17.860188,7.259492 -0.07033,-0.0046 -8.088235,-3.275499 -17.817562,-7.268612 z";
        PolygonRasterizer_getPixelBuffer(PolygonRasterizer_getInstance(), svgPath, pathX, pathY, pixelBuffer, width, height);
}

