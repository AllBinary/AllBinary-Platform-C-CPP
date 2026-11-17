// Generated Code Do Not Modify
// package org.allbinary.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/content/Context.h"
#include "android/view/View.h"
#include "android/widget/Toast.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ToastUtil ToastUtil;
struct ToastUtil {
    LogUtil* logUtil;
};

static ToastUtil* ToastUtil_instance;

ToastUtil* ToastUtil_new(void);
ToastUtil* ToastUtil_getInstance(void);
void ToastUtil_makeToast(ToastUtil* this, View* view, Context* context, const char* message, int32_t time);

// Static fields with runtime initializers: call this once at startup
void ToastUtil_staticInit(void) {
    ToastUtil_instance = ToastUtil_new();
}

static void ToastUtil_initFields(ToastUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void ToastUtil_init(ToastUtil* this) {
    ToastUtil_initFields(this);
}

ToastUtil* ToastUtil_new(void) {
    ToastUtil* this = calloc(1, sizeof(ToastUtil));
    ToastUtil_init(this);
    return this;
}


ToastUtil* ToastUtil_getInstance(void) {
        return ToastUtil_instance;
}


void ToastUtil_makeToast(ToastUtil* this, View* view, Context* context, const char* message, int32_t time) {
        #if 0 /* Java local class: move it to file scope */
typedef struct MakeToast MakeToast;
struct MakeToast {
    Runnable Runnable_interface;
    const char* string;
};


MakeToast* MakeToast_new(const char* string);
        
        void ToastUtil_init(ToastUtil* this, const char* string);
        void ToastUtil_run(ToastUtil* this);

static void MakeToast_initFields(MakeToast* this) {
            
}
        

        void ToastUtil_init(ToastUtil* this, const char* string) {
            ToastUtil_initFields(this);
                this->string = string;
        }

        ToastUtil* ToastUtil_new(const char* string) {
            ToastUtil* this = calloc(1, sizeof(ToastUtil));
            ToastUtil_init(this, string);
            return this;
        }
        

        void ToastUtil_run(ToastUtil* this) {
                LogUtil* logUtil = LogUtil_getInstance();
                JAVA_TRY {
                    JAVA_CALL(Toast_makeText(this->base.context, this->string, this->base.time), show);
                } JAVA_CATCH(Exception, e) {
                    CommonStrings* commonStrings = CommonStrings_getInstance();
                    LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
                } JAVA_END_TRY;
        }
#endif
        View_post(view, MakeToast_new(message));
}

