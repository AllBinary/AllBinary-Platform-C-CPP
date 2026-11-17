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
// package org.allbinary.android.input.api3

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/app/Activity.h"
#include "android/content/Context.h"
#include "android/view/View.h"
#include "android/view/inputmethod/InputMethodManager.h"
#include "org/allbinary/android/activity/ViewCompositeInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/android/input/api3/Runnable.h"

typedef struct ShowVirtualKeyboardRunnable ShowVirtualKeyboardRunnable;
struct ShowVirtualKeyboardRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    Activity* activity;
};


ShowVirtualKeyboardRunnable* ShowVirtualKeyboardRunnable_new(Activity* activity);

void ShowVirtualKeyboardRunnable_init(ShowVirtualKeyboardRunnable* this, Activity* activity);
void ShowVirtualKeyboardRunnable_run(ShowVirtualKeyboardRunnable* this);

static void ShowVirtualKeyboardRunnable_initFields(ShowVirtualKeyboardRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void ShowVirtualKeyboardRunnable_init(ShowVirtualKeyboardRunnable* this, Activity* activity) {
    ShowVirtualKeyboardRunnable_initFields(this);
        this->activity = activity;
}

ShowVirtualKeyboardRunnable* ShowVirtualKeyboardRunnable_new(Activity* activity) {
    ShowVirtualKeyboardRunnable* this = calloc(1, sizeof(ShowVirtualKeyboardRunnable));
    ShowVirtualKeyboardRunnable_init(this, activity);
    return this;
}


void ShowVirtualKeyboardRunnable_run(ShowVirtualKeyboardRunnable* this) {
        JAVA_TRY {
            InputMethodManager* inputMethodManager = ((InputMethodManager*) Activity_getSystemService(this->activity, Context_INPUT_METHOD_SERVICE));
            ViewCompositeInterface* viewCompositeInterface = ((ViewCompositeInterface*) this->activity);
            if (viewCompositeInterface == nullptr) {
                ForcedLogUtil_log("Activity Null", this);
            }
            View* view = ViewCompositeInterface_getView(viewCompositeInterface);
            InputMethodManager_toggleSoftInputFromWindow(inputMethodManager, View_getWindowToken(view), InputMethodManager_SHOW_FORCED, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

