
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOPERATINGSYSTEMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOPERATINGSYSTEMFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class TsUtil;
class LogUtil;
class GenericOperatingSystem;
class NoOperatingSystem;
class OperatingSystems;
class SystemProperties;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AndroidOS;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidOperatingSystemFactory
            : public virtual Object
         {

    private: static AndroidOperatingSystemFactory* instance_owner();
    private: static AndroidOperatingSystemFactory* instance;

    public: static AndroidOperatingSystemFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: TsUtil* tsUtil;

private: AndroidOperatingSystemFactory();

                //@Throws(Exception.constructor)
            
    public: GenericOperatingSystem* getOperatingSystemInstance();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOPERATINGSYSTEMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOPERATINGSYSTEMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOPERATINGSYSTEMFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
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
#if __has_include("org/allbinary/logic/system/os/android/AndroidOS.h")
#include "org/allbinary/logic/system/os/android/AndroidOS.h"
#endif

        #endif
    
