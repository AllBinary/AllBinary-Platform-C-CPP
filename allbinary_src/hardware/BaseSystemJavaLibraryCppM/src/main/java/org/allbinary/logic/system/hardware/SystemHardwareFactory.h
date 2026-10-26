
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoHardware.h"
#include "HardwareInterface.h"
#include "HardwareFactory.h"

class SystemHardwareFactory
            : public Object
         {

    private: static SystemHardwareFactory instance() { return SystemHardwareFactory(); }

    public: static SystemHardwareFactory getInstance();

    public: static std::string static_toString();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HardwareInterface hardwareInterface = NoHardware::getInstance();

private: SystemHardwareFactory();

    public: HardwareInterface getInstance(GenericOperatingSystem operatingSystemInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_H
