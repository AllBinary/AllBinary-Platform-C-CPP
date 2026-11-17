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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/thread/ARunnable.h"
#include "org/allbinary/image/gui/ImageToolJFrame.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageTool ImageTool;
struct ImageTool {
    LogUtil* logUtil;
};


ImageTool* ImageTool_new(void);

void ImageTool_init(ImageTool* this);
void ImageTool_main(const char** args);

static void ImageTool_initFields(ImageTool* this) {
    this->logUtil = LogUtil_getInstance();
}


void ImageTool_init(ImageTool* this) {
    ImageTool_initFields(this);
}

ImageTool* ImageTool_new(void) {
    ImageTool* this = calloc(1, sizeof(ImageTool));
    ImageTool_init(this);
    return this;
}


void ImageTool_main(const char** args) {
        JAVA_CALL(java_awt->EventQueue, invokeLater, ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
            

        void ImageTool_run(ImageTool* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                CommonStrings* commonStrings = CommonStrings_getInstance();
                JAVA_TRY {
                    LogUtil_putF(logUtil, commonStrings->START, this, commonStrings->RUN);
                    ImageToolJFrame_setVisible(ImageToolJFrame_new(), true);
                } JAVA_CATCH(Exception, e) {
                    LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
);
}

