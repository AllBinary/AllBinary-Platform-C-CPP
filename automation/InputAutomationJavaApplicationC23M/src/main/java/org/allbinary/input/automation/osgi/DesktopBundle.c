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
// package org.allbinary.input.automation.osgi

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/osgi/framework/Bundle.h"
#include "org/osgi/framework/BundleContext.h"
#include "bundle/input/automation/InputAutomationBundleActivator.h"
#include "org/allbinary/gui/dialog/BasicTextJDialog.h"

typedef struct DesktopBundle DesktopBundle;
struct DesktopBundle {
    Bundle* bundle;
};

static const char* DesktopBundle_DESKTOP_SYMBOLIC_NAME = "org.knopflerfish.bundle.desktop";

DesktopBundle* DesktopBundle_new(void);

void DesktopBundle_init(DesktopBundle* this);
void DesktopBundle_start(DesktopBundle* this);

static void DesktopBundle_initFields(DesktopBundle* this) {
    this->bundle = nullptr;
}


void DesktopBundle_init(DesktopBundle* this) {
    DesktopBundle_initFields(this);
        BundleContext* bundleContext = InputAutomationBundleActivator_getBundleContext();
        if (bundleContext != nullptr) {
            Bundle** bundleArray = BundleContext_getBundles(bundleContext);
            for (int32_t index = 0; index < java_array_length(bundleArray); index++) {
                Bundle* bundle = bundleArray[index];
                const char* symbolicName = Bundle_getSymbolicName(bundle);
                if (strcmp(symbolicName, DesktopBundle_DESKTOP_SYMBOLIC_NAME) == 0) {
                    this->bundle = bundle;
                }
            }
        } else {
            JDialog* textJDialog = BasicTextJDialog_new("BundlContext is Null");
            JDialog_setVisible(textJDialog, true);
        }
}

DesktopBundle* DesktopBundle_new(void) {
    DesktopBundle* this = calloc(1, sizeof(DesktopBundle));
    DesktopBundle_init(this);
    return this;
}


// throws Exception
void DesktopBundle_start(DesktopBundle* this) {
        Bundle_start(this->bundle);
}

