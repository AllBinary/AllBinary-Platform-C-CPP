
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/logic/system/os/SystemProperties.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SolarisOS.h"

class SolarisOperatingSystemFactory
            : public Object
         {
        

    private: static const instance: SolarisOperatingSystemFactory = new SolarisOperatingSystemFactory();

    public static SolarisOperatingSystemFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

    public GenericOperatingSystem getOperatingSystemInstance();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_H
