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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct PathParser PathParser;
struct PathParser {
    char unused;
};


PathParser* PathParser_new(void);
static const char** PathParser_tokenize(const char* d);
int32_t PathParser_parsePath(const char* d, int32_t* outX, int32_t* outY, int32_t maxPoints);
static bool PathParser_isCommand(const char* tok);

void PathParser_init(PathParser* this) {
}

PathParser* PathParser_new(void) {
    PathParser* this = calloc(1, sizeof(PathParser));
    PathParser_init(this);
    return this;
}


static const char** PathParser_tokenize(const char* d) {
        BasicArrayList* tokens = BasicArrayListD_new();
        StringBuffer* sb = StringBuffer_new();
        for (int32_t i = 0; i < ((int32_t) strlen(d)); i++) {
            uint16_t c = ((uint16_t) d[i]);
            if (c == u' ' || c == u',' || c == u'\t' || c == u'\n' || c == u'\r') {
                if (StringBuffer_length(sb) > 0) {
                    BasicArrayList_add(tokens, StringBuffer_toString(sb));
                    StringBuffer_setLength(sb, 0);
                }
            } else if (c == u'M' || c == u'm' || c == u'L' || c == u'l' || c == u'V' || c == u'v' || c == u'C' || c == u'c' || c == u'Z' || c == u'z') {
                if (StringBuffer_length(sb) > 0) {
                    BasicArrayList_add(tokens, StringBuffer_toString(sb));
                    StringBuffer_setLength(sb, 0);
                }
                BasicArrayList_add(tokens, java_string_of(c));
            } else {
                StringBuffer_append(sb, c);
            }
        }
        if (StringBuffer_length(sb) > 0) {
            BasicArrayList_add(tokens, StringBuffer_toString(sb));
        }
        const char** res = ((const char**) java_array_new(sizeof(const char*), BasicArrayList_size(tokens)));
        BasicArrayList_toArrayType(tokens, res);
        return res;
}


int32_t PathParser_parsePath(const char* d, int32_t* outX, int32_t* outY, int32_t maxPoints) {
        const char** tokens = PathParser_tokenize(d);
        int32_t* count = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0 }) / sizeof(int32_t), (int32_t[]){ 0 }));
        FixedPoint* fixedPoint = FixedPoint_getInstance();
        int32_t curX = 0;
        int32_t curY = 0;
        int32_t startX = 0;
        int32_t startY = 0;
        int32_t idx = 0;
        while (idx < java_array_length(tokens)) {
            const char* tok = tokens[idx++];
            uint16_t cmd = ((uint16_t) tok[0]);
            if (cmd == u'M' || cmd == u'm') {
                int32_t x = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                int32_t y = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                if (cmd == u'm') {
                    x += curX;
                    y += curY;
                }
                curX = x;
                curY = y;
                startX = x;
                startY = y;
                outX[count[0]] = curX;
                outY[count[0]] = curY;
                count[0]++;
            } else if (cmd == u'L' || cmd == u'l') {
                int32_t x = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                int32_t y = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                if (cmd == u'l') {
                    x += curX;
                    y += curY;
                }
                curX = x;
                curY = y;
                outX[count[0]] = curX;
                outY[count[0]] = curY;
                count[0]++;
            } else if (cmd == u'V' || cmd == u'v') {
                int32_t y = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                if (cmd == u'v') {
                    y += curY;
                }
                curY = y;
                outX[count[0]] = curX;
                outY[count[0]] = curY;
                count[0]++;
            } else if (cmd == u'C' || cmd == u'c') {
                int32_t x1 = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                int32_t y1 = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                int32_t x2 = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                int32_t y2 = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                int32_t x3 = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                int32_t y3 = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                if (cmd == u'c') {
                    x1 += curX;
                    y1 += curY;
                    x2 += curX;
                    y2 += curY;
                    x3 += curX;
                    y3 += curY;
                }
                PGUtil_flattenCubicBezier(PGUtil_getInstance(), curX, curY, x1, y1, x2, y2, x3, y3, outX, outY, count, maxPoints);
                curX = x3;
                curY = y3;
            } else if (cmd == u'Z' || cmd == u'z') {
                curX = startX;
                curY = startY;
                outX[count[0]] = curX;
                outY[count[0]] = curY;
                count[0]++;
            }
            while (idx < java_array_length(tokens) && !PathParser_isCommand(tokens[idx])) {
                if (cmd == u'M' || cmd == u'm' || cmd == u'L' || cmd == u'l') {
                    int32_t x = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                    int32_t y = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                    if (cmd == u'm' || cmd == u'l') {
                        x += curX;
                        y += curY;
                    }
                    curX = x;
                    curY = y;
                    outX[count[0]] = curX;
                    outY[count[0]] = curY;
                    count[0]++;
                } else if (cmd == u'V' || cmd == u'v') {
                    int32_t y = FixedPoint_toFixed(fixedPoint, strtod(tokens[idx++], nullptr));
                    if (cmd == u'v') {
                        y += curY;
                    }
                    curY = y;
                    outX[count[0]] = curX;
                    outY[count[0]] = curY;
                    count[0]++;
                }
            }
        }
        return count[0];
}


static bool PathParser_isCommand(const char* tok) {
        uint16_t c = ((uint16_t) tok[0]);
        return java_string_indexOf("MmLlVvCcZz", c) >= 0;
}

