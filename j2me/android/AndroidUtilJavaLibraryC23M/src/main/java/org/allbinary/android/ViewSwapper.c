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
#include "android/app/Activity.h"
#include "android/view/View.h"
#include "android/view/ViewGroup.h"

typedef struct ViewSwapper ViewSwapper;
struct ViewSwapper {
    int32_t rootViewId;
    Activity* activity;
    int32_t currentMainViewId;
    View** mainViewArray;
    View** topViewArray;
};

View** ViewSwapper_NULL_VIEW_ARRAY;

ViewSwapper* ViewSwapper_new(Activity* activity, int32_t rootViewId);

void ViewSwapper_init(ViewSwapper* this, Activity* activity, int32_t rootViewId);
void ViewSwapper_setMainViews(ViewSwapper* this, View** viewArray);
void ViewSwapper_setTopViewArray(ViewSwapper* this, View** topViewArray);
void ViewSwapper_setMainView(ViewSwapper* this, int32_t id);

// Static fields with runtime initializers: call this once at startup
void ViewSwapper_staticInit(void) {
    ViewSwapper_NULL_VIEW_ARRAY = ((View**) java_array_new(sizeof(View*), 0));
}

static void ViewSwapper_initFields(ViewSwapper* this) {
    
    
    this->currentMainViewId = -1;
    this->mainViewArray = ViewSwapper_NULL_VIEW_ARRAY;
    this->topViewArray = ViewSwapper_NULL_VIEW_ARRAY;
}


void ViewSwapper_init(ViewSwapper* this, Activity* activity, int32_t rootViewId) {
    ViewSwapper_initFields(this);
        this->activity = activity;
        this->rootViewId = rootViewId;
}

ViewSwapper* ViewSwapper_new(Activity* activity, int32_t rootViewId) {
    ViewSwapper* this = calloc(1, sizeof(ViewSwapper));
    ViewSwapper_init(this, activity, rootViewId);
    return this;
}


void ViewSwapper_setMainViews(ViewSwapper* this, View** viewArray) {
        this->mainViewArray = viewArray;
}


void ViewSwapper_setTopViewArray(ViewSwapper* this, View** topViewArray) {
        this->topViewArray = topViewArray;
}


void ViewSwapper_setMainView(ViewSwapper* this, int32_t id) {
        ViewGroup* viewGroup = ((ViewGroup*) Activity_findViewById(this->activity, this->rootViewId));
        if (id != this->currentMainViewId) {
            for (int32_t index = 0; index < java_array_length(this->topViewArray); index++) {
                ViewGroup_removeView(viewGroup, this->topViewArray[index]);
            }
            for (int32_t index = 0; index < java_array_length(this->mainViewArray); index++) {
                if (id != JAVA_CALL(this->mainViewArray[index], getId)) {
                    ViewGroup_removeView(viewGroup, this->mainViewArray[index]);
                }
            }
            for (int32_t index = 0; index < java_array_length(this->mainViewArray); index++) {
                if (id == JAVA_CALL(this->mainViewArray[index], getId)) {
                    ViewGroup_addView(viewGroup, this->mainViewArray[index]);
                    this->currentMainViewId = id;
                }
            }
            for (int32_t index = 0; index < java_array_length(this->topViewArray); index++) {
                ViewGroup_addView(viewGroup, this->topViewArray[index]);
            }
        }
}

