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
#include "android/os/IBinder.h"
#include "android/view/View.h"
#include "android/view/inputmethod/InputMethodManager.h"
#include "org/allbinary/android/activity/ViewCompositeInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/android/input/api3/Runnable.h"

typedef struct HideVirtualKeyboardRunnable HideVirtualKeyboardRunnable;
struct HideVirtualKeyboardRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    Activity* activity;
};


HideVirtualKeyboardRunnable* HideVirtualKeyboardRunnable_new(Activity* activity);

void HideVirtualKeyboardRunnable_init(HideVirtualKeyboardRunnable* this, Activity* activity);
void HideVirtualKeyboardRunnable_run(HideVirtualKeyboardRunnable* this);

static void HideVirtualKeyboardRunnable_initFields(HideVirtualKeyboardRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void HideVirtualKeyboardRunnable_init(HideVirtualKeyboardRunnable* this, Activity* activity) {
    HideVirtualKeyboardRunnable_initFields(this);
        this->activity = activity;
}

HideVirtualKeyboardRunnable* HideVirtualKeyboardRunnable_new(Activity* activity) {
    HideVirtualKeyboardRunnable* this = calloc(1, sizeof(HideVirtualKeyboardRunnable));
    HideVirtualKeyboardRunnable_init(this, activity);
    return this;
}


void HideVirtualKeyboardRunnable_run(HideVirtualKeyboardRunnable* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            InputMethodManager* inputMethodManager = ((InputMethodManager*) Activity_getSystemService(this->activity, Context_INPUT_METHOD_SERVICE));
            ViewCompositeInterface* viewCompositeInterface = ((ViewCompositeInterface*) this->activity);
            if (viewCompositeInterface == nullptr) {
                ForcedLogUtil_log("Activity Null", this);
            }
            View* view = ViewCompositeInterface_getView(viewCompositeInterface);
            if (View_getWindowToken(view) == nullptr) {
                LogUtil_putF(this->logUtil, "Unable to hide virtual keyboard as window token is null - This usually happens during loading when the view is not attached to a window", this, commonStrings->RUN);
                return;
            }
            IBinder* token = View_getWindowToken(view);
            InputMethodManager_hideSoftInputFromWindow(inputMethodManager, token, 0);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

