
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/solaris/SolarisOperatingSystemFactory.h"
        

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
        #include "org/allbinary/logic/system/os/solaris/SolarisOS.h"

auto SolarisOperatingSystemFactory::instance_owner() -> SolarisOperatingSystemFactory* { static std::unique_ptr<SolarisOperatingSystemFactory> value(new SolarisOperatingSystemFactory()); return value.get(); }
SolarisOperatingSystemFactory* SolarisOperatingSystemFactory::instance = SolarisOperatingSystemFactory::instance_owner();

    auto SolarisOperatingSystemFactory::getInstance() -> SolarisOperatingSystemFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SolarisOperatingSystemFactory::instance;
    
}


SolarisOperatingSystemFactory::SolarisOperatingSystemFactory() : logUtil(LogUtil::getInstance()){
}


    auto SolarisOperatingSystemFactory::getOperatingSystemInstance() -> GenericOperatingSystem*{

        try {
            
    OperatingSystems* operatingSystems = OperatingSystems::getInstance();;
    

    std::string osName = SystemProperties::getInstance()->getName();;
    

    GenericOperatingSystem* operatingSystemInterface;;
    

                        if(osName.compare(operatingSystems->SOLARIS) == 0)
                        
                                    {
                                    operatingSystemInterface= new SolarisOS();
    

                                    }
                                
                        else {
                            
                        if(operatingSystems->isUnknownSpecificOSAllowed())
                        
                                    {
                                    operatingSystemInterface= new SolarisOS();
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Specific Solaris OS Not Supported: ") +JavaString::valueOf(osName));
                    

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




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_SOLARIS_SOLARISOPERATINGSYSTEMFACTORY_CPP
