
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/SystemHardwareFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/NoHardware.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#include "org/allbinary/logic/system/hardware/HardwareFactory.h"

auto SystemHardwareFactory::instance_owner() -> SystemHardwareFactory* { static std::unique_ptr<SystemHardwareFactory> value(new SystemHardwareFactory()); return value.get(); }
SystemHardwareFactory* SystemHardwareFactory::instance = SystemHardwareFactory::instance_owner();

    auto SystemHardwareFactory::getInstance() -> SystemHardwareFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SystemHardwareFactory::instance;
    
}


SystemHardwareFactory::SystemHardwareFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), hardwareInterface(NoHardware::getInstance()){
}


    auto SystemHardwareFactory::getInstance(GenericOperatingSystem* operatingSystemInterface) -> HardwareInterface*{

        try {
            
                        if(this->hardwareInterface == NoHardware::getInstance())
                        
                                    {
                                    this->hardwareInterface= HardwareFactory::getInstance()->getInstance(operatingSystemInterface);
    

                                    }
                                
this->logUtil->putF("Found Hardware", this, this->commonStrings->CONSTRUCTOR);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hardwareInterface;
    
}


    auto SystemHardwareFactory::static_toString() -> std::string{

    SystemHardwareFactory* systemHardwareFactory = SystemHardwareFactory::getInstance();;
    

    StringMaker* osBuffer = new StringMaker();;
    
osBuffer->append("Hardware Info: \n");
    

                        if(systemHardwareFactory->hardwareInterface != 
                                    nullptr
                                )
                        
                                    {
                                    osBuffer->append(JavaString::valueOf(systemHardwareFactory->hardwareInterface));
    

                                    }
                                
                        else {
                            osBuffer->append(StringUtil::getInstance()->NULL_STRING);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(osBuffer);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_SYSTEMHARDWAREFACTORY_CPP
