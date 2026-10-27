
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2011 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/components/ComponentFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/components/Component.h"


ComponentFactory::ComponentFactory() : VGA(new Component("VGA")), IDE(new Component("IDE")), SCSI(new Component("SCSI")), BRIDGE(new Component("bridge")), ETHERNET(new Component("Ethernet")), USB(new Component("USB")), MULTIMEDIA(new Component("Multimedia")), PCI(new Component("PCI")), RAID(new Component("RAID")), SMBUS(new Component("SMBus")), PIC(new Component("PIC")), Class(new Component("Class")), UNKNOWN(new Component(CommonStrings::getInstance()->UNKNOWN)) {
        }
        auto ComponentFactory::instance_owner() -> ComponentFactory* { static std::unique_ptr<ComponentFactory> value(new ComponentFactory()); return value.get(); }
ComponentFactory* ComponentFactory::instance = ComponentFactory::instance_owner();

    auto ComponentFactory::getInstance() -> ComponentFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ComponentFactory::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENTFACTORY_CPP
