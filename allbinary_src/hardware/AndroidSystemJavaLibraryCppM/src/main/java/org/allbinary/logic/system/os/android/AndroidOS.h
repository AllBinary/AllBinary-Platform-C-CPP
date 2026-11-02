
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOS_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AndroidInfoFactory;
class StringMaker;
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AndroidSystemProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidOS: public GenericOperatingSystem {

    private: StringMaker* stringBuffer;

    private: const std::string DEVICE_ID = "DeviceId";

    private: const std::string DEVICE_SOFTWARE_VERSION = "DeviceSoftwareVersion";

    private: const std::string LINE_1_NUMBER = "Line1Number";

public: AndroidOS();

    private: const std::string OUYA = "ouya";

    public: bool isOverScan();

    public: int32_t getOverScanXPercent();

    public: int32_t getOverScanYPercent();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ANDROID_ANDROIDOS_H_COMPLETE
        #if __has_include(<org/allbinary/android/AndroidInfoFactory.h>)
#include <org/allbinary/android/AndroidInfoFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/logic/system/os/android/AndroidSystemProperties.h")
#include "org/allbinary/logic/system/os/android/AndroidSystemProperties.h"
#endif

        #endif
    
