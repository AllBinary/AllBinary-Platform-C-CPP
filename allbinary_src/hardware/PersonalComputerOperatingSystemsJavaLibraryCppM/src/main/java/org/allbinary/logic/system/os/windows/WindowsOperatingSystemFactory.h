
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H

        
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
class GenericOperatingSystem;
class NoOperatingSystem;
class OperatingSystems;
class SystemProperties;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WindowsOS;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WindowsOperatingSystemFactory
            : public virtual Object
         {

    private: static WindowsOperatingSystemFactory* instance_owner();
    private: static WindowsOperatingSystemFactory* instance;

    public: static WindowsOperatingSystemFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: WindowsOperatingSystemFactory();

    public: GenericOperatingSystem* getOperatingSystemInstance();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_WINDOWS_WINDOWSOPERATINGSYSTEMFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/NoOperatingSystem.h>)
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystems.h>)
#include <org/allbinary/logic/system/os/OperatingSystems.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/SystemProperties.h>)
#include <org/allbinary/logic/system/os/SystemProperties.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/system/os/windows/WindowsOS.h")
#include "org/allbinary/logic/system/os/windows/WindowsOS.h"
#endif

        #endif
    
