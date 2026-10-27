
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class StringMaker;
class StringUtil;
class GenericOperatingSystem;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NoHardware;
class HardwareInterface;
class HardwareFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SystemHardwareFactory
            : public virtual Object
         {

    private: static SystemHardwareFactory* instance_owner();
    private: static SystemHardwareFactory* instance;

    public: static SystemHardwareFactory* getInstance();

    public: static std::string static_toString();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: HardwareInterface* hardwareInterface;

private: SystemHardwareFactory();

    public: HardwareInterface* getInstance(GenericOperatingSystem* operatingSystemInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/system/hardware/NoHardware.h")
#include "org/allbinary/logic/system/hardware/NoHardware.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/HardwareInterface.h")
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/HardwareFactory.h")
#include "org/allbinary/logic/system/hardware/HardwareFactory.h"
#endif

        #endif
    
