
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class LogConfigTypeFactory;
class LogConfigTypes;
class ComponentFactory;
class HardwareComponentInterface;
class Bridge;
class Ethernet;
class HardDriveController;
class Media;
class PCI;
class Unknown;
class Usb;
class Video;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PCComponentFactory
            : public virtual Object
         {

    private: static PCComponentFactory* instance_owner();
    private: static PCComponentFactory* instance;

    public: static PCComponentFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: ComponentFactory* componentFactory;

private: PCComponentFactory();

    public: HardwareComponentInterface* getInstance(std::string component, std::string componentData);

    public: std::string getComponentType(std::string component);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_PCCOMPONENTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/ComponentFactory.h>)
#include <org/allbinary/logic/system/hardware/components/ComponentFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/Bridge.h>)
#include <org/allbinary/logic/system/hardware/components/linux/Bridge.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/Ethernet.h>)
#include <org/allbinary/logic/system/hardware/components/linux/Ethernet.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/HardDriveController.h>)
#include <org/allbinary/logic/system/hardware/components/linux/HardDriveController.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/Media.h>)
#include <org/allbinary/logic/system/hardware/components/linux/Media.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/PCI.h>)
#include <org/allbinary/logic/system/hardware/components/linux/PCI.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/Unknown.h>)
#include <org/allbinary/logic/system/hardware/components/linux/Unknown.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/Usb.h>)
#include <org/allbinary/logic/system/hardware/components/linux/Usb.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/linux/Video.h>)
#include <org/allbinary/logic/system/hardware/components/linux/Video.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
