
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

            #include <hilog/log.h>
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/android/AndroidInfoFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidSystemProperties.h"

class AndroidOS: public GenericOperatingSystem {

    private: StringMaker stringBuffer = StringMaker();

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
