
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
        #include "SolarisOS.h"

class SolarisOperatingSystemFactory
            : public Object
         {

    private: static SolarisOperatingSystemFactory instance() { return SolarisOperatingSystemFactory(); }

    public: static SolarisOperatingSystemFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SolarisOperatingSystemFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: SolarisOperatingSystemFactory(){
}


    public: GenericOperatingSystem getOperatingSystemInstance(){

        try {
            
    OperatingSystems operatingSystems = OperatingSystems::getInstance();;
    

    std::string osName = SystemProperties::getInstance().getName();;
    

    GenericOperatingSystem operatingSystemInterface;;
    

                        if(osName.compare(operatingSystems.SOLARIS) == 0)
                        
                                    {
                                    operatingSystemInterface= SolarisOS();
    

                                    }
                                
                        else {
                            
                        if(operatingSystems.isUnknownSpecificOSAllowed())
                        
                                    {
                                    operatingSystemInterface= SolarisOS();
    

                                    }
                                
                        else {
                            


                            throw Exception("Specific Solaris OS Not Supported: " +osName);
                    

                        }
                            

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return operatingSystemInterface;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().FACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoOperatingSystem::NO_OPERATING_SYSTEM;
    
}

}


};

            

