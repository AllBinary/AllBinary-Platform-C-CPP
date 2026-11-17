/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct SpriteSplitterUtil SpriteSplitterUtil;
struct SpriteSplitterUtil {
    LogUtil* logUtil;
    CommonSeps* commonSeps;
    CommonStrings* commonStrings;
    const char** ANIMATIONS_LABELS;
    const char* DIRECTIONAL_ANIMATIONS;
    const char* HORIZONTAL_ANIMATIONS;
    const char* HORIZONTAL_SPRITE;
    const char** ROW_NAME;
    const char* _ROW;
};

static SpriteSplitterUtil* SpriteSplitterUtil_instance;

SpriteSplitterUtil* SpriteSplitterUtil_new(void);
SpriteSplitterUtil* SpriteSplitterUtil_getInstance(void);
void SpriteSplitterUtil_process(SpriteSplitterUtil* this, ImageProcessorInput* imageProcessorInput, int32_t totalFrames, int32_t totalAnimations, int32_t widthReduction, int32_t heightReduction, int32_t increaseWidth, int32_t increaseHeight, const char* spriteType, ImageProcessedVisitor* visitor);

// Static fields with runtime initializers: call this once at startup
void SpriteSplitterUtil_staticInit(void) {
    SpriteSplitterUtil_instance = SpriteSplitterUtil_new();
}

static void SpriteSplitterUtil_initFields(SpriteSplitterUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->ANIMATIONS_LABELS = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Row Total:", "Column Total:", "Column Total:", "Row Total:", "Column Total:", "Row Total:" }) / sizeof(const char*), (const char*[]){ "Row Total:", "Column Total:", "Column Total:", "Row Total:", "Column Total:", "Row Total:" }));
    this->DIRECTIONAL_ANIMATIONS = "Directional DLRU";
    this->HORIZONTAL_ANIMATIONS = "Horizontal Animations";
    this->HORIZONTAL_SPRITE = "Horizontal A=R=Y F=C=X";
    this->ROW_NAME = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "idle", "walk", "attack", "defeat" }) / sizeof(const char*), (const char*[]){ "idle", "walk", "attack", "defeat" }));
    this->_ROW = "_row";
}

void SpriteSplitterUtil_init(SpriteSplitterUtil* this) {
    SpriteSplitterUtil_initFields(this);
}

SpriteSplitterUtil* SpriteSplitterUtil_new(void) {
    SpriteSplitterUtil* this = calloc(1, sizeof(SpriteSplitterUtil));
    SpriteSplitterUtil_init(this);
    return this;
}


SpriteSplitterUtil* SpriteSplitterUtil_getInstance(void) {
        return SpriteSplitterUtil_instance;
}


// throws Exception
void SpriteSplitterUtil_process(SpriteSplitterUtil* this, ImageProcessorInput* imageProcessorInput, int32_t totalFrames, int32_t totalAnimations, int32_t widthReduction, int32_t heightReduction, int32_t increaseWidth, int32_t increaseHeight, const char* spriteType, ImageProcessedVisitor* visitor) {
        BufferedImage* bufferedImage = nullptr;
        BufferedImage*** generatedBufferedImageArray = nullptr;
        BufferedImage** bufferedImageArray = ImageProcessorInput_getBufferedImageArray(imageProcessorInput);
        for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
            bufferedImage = bufferedImageArray[index];
            LogUtil_putF(this->logUtil, spriteType, this, this->commonStrings->RUN);
            if (spriteType == this->HORIZONTAL_SPRITE) {
                int32_t cellHeight = BufferedImage_getHeight(bufferedImage) / totalAnimations;
                int32_t cellWidth = BufferedImage_getWidth(bufferedImage) / totalFrames;
                int32_t columns = totalFrames;
                int32_t rows = totalAnimations;
                generatedBufferedImageArray = ((BufferedImage***) java_array_new2(sizeof(BufferedImage*), rows, columns));
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Processing Individual Cells columns: ", java_string_of(columns)), " rows: "), java_string_of(rows)), this, this->commonStrings->RUN);
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Processing Individual Cells cellHeight: ", java_string_of(cellHeight)), " cellWidth: "), java_string_of(cellWidth)), this, this->commonStrings->RUN);
                ImageUtil* imageUtil = ImageUtil_getInstance();
                const char* nameEnding = nullptr;
                int32_t x = 0;
                int32_t y = 0;
                for (int32_t index2 = 0; index2 < rows; index2++) {
                    y = cellHeight * index2;
                    for (int32_t index3 = 0; index3 < columns; index3++) {
                        x = cellWidth * index3;
                        generatedBufferedImageArray[index2][index3] = BufferedImage_getSubimage(bufferedImage, x + widthReduction, y + heightReduction, cellWidth - (widthReduction * 2), cellHeight - (heightReduction * 2));
                        if (increaseWidth != 0 || increaseHeight != 0) {
                            generatedBufferedImageArray[index2][index3] = ImageUtil_createBufferedImageAllowTranslate(imageUtil, generatedBufferedImageArray[index2][index3], cellWidth + increaseWidth, cellHeight + increaseHeight, false, true);
                        }
                        nameEnding = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(StringMaker_new(), index2), append, this->commonSeps->UNDERSCORE), appendint, index3), toString);
                        ImageProcessedVisitor_visit(visitor, generatedBufferedImageArray[index2][index3], nameEnding, index);
                    }
                }
                LogUtil_putF(this->logUtil, "Processing Rows from Cells", this, this->commonStrings->RUN);
                ImageUnifierProperties* imageUnifierProperties = ImageUnifierProperties_new();
                ImageUnifierProperties_setRows(imageUnifierProperties, java_string_of(1));
                ImageUnifierProperties_setColumns(imageUnifierProperties, java_string_of(columns));
                ImageUnifierCell* imageUnifierCell = ImageUnifierCell_new(java_string_of(cellWidth - (2 * widthReduction)), java_string_of(cellHeight - (2 * heightReduction)));
                ImageUnifierProperties_setImageUnifierCell(imageUnifierProperties, imageUnifierCell);
                for (int32_t index2 = 0; index2 < rows; index2++) {
                    y = cellHeight * index2;
                    BufferedImage** tempBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), columns));
                    for (int32_t index3 = 0; index3 < columns; index3++) {
                        tempBufferedImageArray[index3] = generatedBufferedImageArray[index2][index3];
                        nameEnding = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(StringMaker_new(), index2), append, this->commonSeps->UNDERSCORE), appendint, 1), append, this->_ROW), toString);
                    }
                    BufferedImage* generatedBufferedImage = ImageUnifierUtil_getImage(ImageUnifierUtil_getInstance(), tempBufferedImageArray, imageUnifierProperties);
                    ImageProcessedVisitor_visit(visitor, generatedBufferedImage, nameEnding, index);
                }
            } else if (spriteType == this->HORIZONTAL_ANIMATIONS) {
            } else if (spriteType == this->DIRECTIONAL_ANIMATIONS) {
                int32_t totalFrames2 = 4;
                int32_t cellHeight = BufferedImage_getHeight(bufferedImage) / totalFrames2;
                int32_t cellWidth = BufferedImage_getWidth(bufferedImage) / totalAnimations;
                int32_t columns = totalAnimations;
                int32_t rows = totalFrames2;
                generatedBufferedImageArray = ((BufferedImage***) java_array_new2(sizeof(BufferedImage*), rows, columns));
                LogUtil_putF(this->logUtil, "Processing Individual Cells for each Direction", this, this->commonStrings->RUN);
                const char* nameEnding = nullptr;
                int32_t x = 0;
                int32_t y = 0;
                for (int32_t index2 = 0; index2 < rows; index2++) {
                    y = cellHeight * index2;
                    for (int32_t index3 = 0; index3 < columns; index3++) {
                        x = cellWidth * index3;
                        generatedBufferedImageArray[index2][index3] = BufferedImage_getSubimage(bufferedImage, x + widthReduction, y + heightReduction, cellWidth - (widthReduction * 2), cellHeight - (heightReduction * 2));
                        if (increaseWidth != 0 || increaseHeight != 0) {
                            generatedBufferedImageArray[index2][index3] = ImageUtil_createBufferedImageAllowTranslate(ImageUtil_getInstance(), generatedBufferedImageArray[index2][index3], cellWidth + increaseWidth, cellHeight + increaseHeight, false, true);
                        }
                        nameEnding = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->DIRECTION_NAME[index2]), append, this->commonSeps->UNDERSCORE), appendint, index3), toString);
                        ImageProcessedVisitor_visit(visitor, generatedBufferedImageArray[index2][index3], nameEnding, index);
                    }
                }
                ImageUnifierProperties* imageUnifierProperties = ImageUnifierProperties_new();
                ImageUnifierProperties_setRows(imageUnifierProperties, java_string_of(1));
                ImageUnifierProperties_setColumns(imageUnifierProperties, java_string_of(columns));
                ImageUnifierCell* imageUnifierCell = ImageUnifierCell_new(java_string_of(cellWidth - (2 * widthReduction)) + increaseWidth, java_string_of(cellHeight - (2 * heightReduction) + increaseHeight));
                ImageUnifierProperties_setImageUnifierCell(imageUnifierProperties, imageUnifierCell);
                LogUtil_putF(this->logUtil, "Processing Rows from Cells for each Direction", this, this->commonStrings->RUN);
                for (int32_t index2 = 0; index2 < rows; index2++) {
                    y = cellHeight * index2;
                    BufferedImage** tempBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), columns));
                    for (int32_t index3 = 0; index3 < columns; index3++) {
                        tempBufferedImageArray[index3] = generatedBufferedImageArray[index2][index3];
                        nameEnding = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->DIRECTION_NAME[index2]), append, this->commonSeps->UNDERSCORE), appendint, 1), append, this->_ROW), toString);
                    }
                    BufferedImage* generatedBufferedImage = ImageUnifierUtil_getImage(ImageUnifierUtil_getInstance(), tempBufferedImageArray, imageUnifierProperties);
                    ImageProcessedVisitor_visit(visitor, generatedBufferedImage, nameEnding, index);
                }
            }
        }
}

