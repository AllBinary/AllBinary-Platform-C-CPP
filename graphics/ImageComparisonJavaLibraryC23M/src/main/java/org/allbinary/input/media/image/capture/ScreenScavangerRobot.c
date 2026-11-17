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
// package org.allbinary.input.media.image.capture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/Dimension.h"
// #include "java/awt/Rectangle.h"
// #include "java/awt/Toolkit.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct ScreenScavangerRobot ScreenScavangerRobot;
struct ScreenScavangerRobot {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


ScreenScavangerRobot* ScreenScavangerRobot_new(void);

void ScreenScavangerRobot_init(ScreenScavangerRobot* this);
BufferedImage** ScreenScavangerRobot_getScreenAsBufferedImages(ScreenScavangerRobot* this);

static void ScreenScavangerRobot_initFields(ScreenScavangerRobot* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void ScreenScavangerRobot_init(ScreenScavangerRobot* this) {
    ScreenScavangerRobot_initFields(this);
}

ScreenScavangerRobot* ScreenScavangerRobot_new(void) {
    ScreenScavangerRobot* this = calloc(1, sizeof(ScreenScavangerRobot));
    ScreenScavangerRobot_init(this);
    return this;
}


// throws Exception
BufferedImage** ScreenScavangerRobot_getScreenAsBufferedImages(ScreenScavangerRobot* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getScreenAsBufferedImages");
        Dimension* dimScreenSize = JAVA_CALL(Toolkit_getDefaultToolkit(), getScreenSize);
        Rectangle* rectScreenSize = Rectangle_new(dimScreenSize);
        ABHashtable* robotHashtable = InputRobotFactory_get(InputRobotFactory_getInstance());
        BufferedImage** bufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), 1));
        int32_t index = 0;
        InputRobotInterface* inputRobotInterface = ((InputRobotInterface*) ABHashtable_get(robotHashtable, "Java Robot"));
        bufferedImageArray[index] = InputRobotInterface_createScreenCapture(inputRobotInterface, rectScreenSize);
        LogUtil_putF(this->logUtil, "Finish", this, "getScreenAsBufferedImages");
        return bufferedImageArray;
}

