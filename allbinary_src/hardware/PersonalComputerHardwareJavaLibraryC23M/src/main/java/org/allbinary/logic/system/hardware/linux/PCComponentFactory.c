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
// package org.allbinary.logic.system.hardware.linux

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/system/hardware/components/ComponentFactory.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#include "org/allbinary/logic/system/hardware/components/linux/Bridge.h"
#include "org/allbinary/logic/system/hardware/components/linux/Ethernet.h"
#include "org/allbinary/logic/system/hardware/components/linux/HardDriveController.h"
#include "org/allbinary/logic/system/hardware/components/linux/Media.h"
#include "org/allbinary/logic/system/hardware/components/linux/PCI.h"
#include "org/allbinary/logic/system/hardware/components/linux/Unknown.h"
#include "org/allbinary/logic/system/hardware/components/linux/Usb.h"
#include "org/allbinary/logic/system/hardware/components/linux/Video.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PCComponentFactory PCComponentFactory;
struct PCComponentFactory {
    LogUtil* logUtil;
    ComponentFactory* componentFactory;
};

static PCComponentFactory* PCComponentFactory_instance;

PCComponentFactory* PCComponentFactory_new(void);
PCComponentFactory* PCComponentFactory_getInstance(void);

void PCComponentFactory_init(PCComponentFactory* this);
HardwareComponentInterface* PCComponentFactory_getInstance(PCComponentFactory* this, const char* component, const char* componentData);
const char* PCComponentFactory_getComponentType(PCComponentFactory* this, const char* component);

// Static fields with runtime initializers: call this once at startup
void PCComponentFactory_staticInit(void) {
    PCComponentFactory_instance = PCComponentFactory_new();
}

static void PCComponentFactory_initFields(PCComponentFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->componentFactory = ComponentFactory_getInstance();
}


PCComponentFactory* PCComponentFactory_getInstance(void) {
        return PCComponentFactory_instance;
}


void PCComponentFactory_init(PCComponentFactory* this) {
    PCComponentFactory_initFields(this);
}

PCComponentFactory* PCComponentFactory_new(void) {
    PCComponentFactory* this = calloc(1, sizeof(PCComponentFactory));
    PCComponentFactory_init(this);
    return this;
}


// Java overloaded method: C needs a different name
HardwareComponentInterface* PCComponentFactory_getInstance(PCComponentFactory* this, const char* component, const char* componentData) {
        JAVA_TRY {
            if (component != nullptr) {
                if (strcmp(component, JAVA_CALL(this->componentFactory->ETHERNET, toString)) == 0) {
                    return ((HardwareComponentInterface*) Ethernet_new(componentData));
                } else if (strcmp(component, JAVA_CALL(this->componentFactory->BRIDGE, toString)) == 0) {
                    return ((HardwareComponentInterface*) Bridge_new(componentData));
                } else if (strcmp(component, JAVA_CALL(this->componentFactory->IDE, toString)) == 0) {
                    return ((HardwareComponentInterface*) HardDriveController_new(componentData));
                } else if (strcmp(component, JAVA_CALL(this->componentFactory->MULTIMEDIA, toString)) == 0) {
                    return ((HardwareComponentInterface*) Media_new(componentData));
                } else if (strcmp(component, JAVA_CALL(this->componentFactory->SCSI, toString)) == 0) {
                    return ((HardwareComponentInterface*) HardDriveController_new(componentData));
                } else if (strcmp(component, JAVA_CALL(this->componentFactory->USB, toString)) == 0) {
                    return ((HardwareComponentInterface*) Usb_new(componentData));
                } else if (strcmp(component, JAVA_CALL(this->componentFactory->VGA, toString)) == 0) {
                    return ((HardwareComponentInterface*) Video_new(componentData));
                } else if (strcmp(component, JAVA_CALL(this->componentFactory->PCI, toString)) == 0) {
                    return ((HardwareComponentInterface*) PCI_new(componentData));
                }
            }
            return ((HardwareComponentInterface*) Unknown_new(componentData));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->FACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return Unknown_new(commonStrings->EXCEPTION);
        } JAVA_END_TRY;
}


const char* PCComponentFactory_getComponentType(PCComponentFactory* this, const char* component) {
        if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->ETHERNET, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->ETHERNET, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->BRIDGE, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->BRIDGE, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->IDE, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->IDE, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->MULTIMEDIA, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->MULTIMEDIA, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->SCSI, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->SCSI, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->USB, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->USB, toString);
        } else if (java_string_indexOf(component, JAVA_CALL(this->componentFactory->VGA, toString)) >= 0) {
            return JAVA_CALL(this->componentFactory->VGA, toString);
        } else if (strcmp(component, JAVA_CALL(this->componentFactory->PCI, toString)) == 0) {
            return JAVA_CALL(this->componentFactory->PCI, toString);
        }
        return JAVA_CALL(this->componentFactory->UNKNOWN, toString);
}

