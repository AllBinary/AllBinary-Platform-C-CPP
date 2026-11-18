// Generated Code Do Not Modify
#include "org/allbinary/logic/system/hardware/components/ComponentFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/hardware/components/Component.h"
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif


static ComponentFactory* ComponentFactory_instance;


void ComponentFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ComponentFactory_instance = ComponentFactory_new();
}

void ComponentFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ComponentFactory", nullptr);
}

static void ComponentFactory_initFields(ComponentFactory* this) {
    this->VGA = Component_new("VGA");
    this->IDE = Component_new("IDE");
    this->SCSI = Component_new("SCSI");
    this->BRIDGE = Component_new("bridge");
    this->ETHERNET = Component_new("Ethernet");
    this->USB = Component_new("USB");
    this->MULTIMEDIA = Component_new("Multimedia");
    this->PCI = Component_new("PCI");
    this->RAID = Component_new("RAID");
    this->SMBUS = Component_new("SMBus");
    this->PIC = Component_new("PIC");
    this->Class = Component_new("Class");
    this->UNKNOWN = Component_new(CommonStrings_getInstance()->UNKNOWN);
}

void ComponentFactory_init(ComponentFactory* this) {
    ComponentFactory_register();
    ComponentFactory_initFields(this);
}

ComponentFactory* ComponentFactory_new(void) {
    ComponentFactory* this = java_object_alloc(sizeof(ComponentFactory), "ComponentFactory");
    ComponentFactory_init(this);
    return this;
}


ComponentFactory* ComponentFactory_getInstance(void) {
        return (ComponentFactory_staticInit(), ComponentFactory_instance);
}

