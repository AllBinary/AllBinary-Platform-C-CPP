
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOPERATINGSYSTEMFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOPERATINGSYSTEMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/linux/LinuxOperatingSystemFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/NoOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/logic/system/os/SystemProperties.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/linux/LinuxOS.h"

auto LinuxOperatingSystemFactory::instance_owner() -> LinuxOperatingSystemFactory* { static std::unique_ptr<LinuxOperatingSystemFactory> value(new LinuxOperatingSystemFactory()); return value.get(); }
LinuxOperatingSystemFactory* LinuxOperatingSystemFactory::instance = LinuxOperatingSystemFactory::instance_owner();

    auto LinuxOperatingSystemFactory::getInstance() -> LinuxOperatingSystemFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LinuxOperatingSystemFactory::instance;
    
}


LinuxOperatingSystemFactory::LinuxOperatingSystemFactory() : logUtil(LogUtil::getInstance()){
}


    auto LinuxOperatingSystemFactory::getOperatingSystemInstance() -> GenericOperatingSystem*{

        try {
            
    OperatingSystems* operatingSystems = OperatingSystems::getInstance();;
    

    std::string osName = SystemProperties::getInstance()->getName();;
    

    GenericOperatingSystem* operatingSystemInterface;;
    

                        if(osName.compare(operatingSystems->LINUX) == 0)
                        
                                    {
                                    operatingSystemInterface= new LinuxOS();
    

                                    }
                                
                        else {
                            
                        if(operatingSystems->isUnknownSpecificOSAllowed())
                        
                                    {
                                    operatingSystemInterface= new LinuxOS();
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Specific Linux OS Not Supported: ") +JavaString::valueOf(osName));
                    

                        }
                            

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return operatingSystemInterface;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->FACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoOperatingSystem::NO_OPERATING_SYSTEM;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_LINUX_LINUXOPERATINGSYSTEMFACTORY_CPP
