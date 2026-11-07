
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/system/os/android/AndroidOperatingSystemFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"

auto OperatingSystemFactory::instance_owner() -> OperatingSystemFactory* { static std::unique_ptr<OperatingSystemFactory> value(new OperatingSystemFactory()); return value.get(); }
OperatingSystemFactory* OperatingSystemFactory::instance = OperatingSystemFactory::instance_owner();

    auto OperatingSystemFactory::getInstance() -> OperatingSystemFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OperatingSystemFactory::instance;
    
}


OperatingSystemFactory::OperatingSystemFactory() : logUtil(LogUtil::getInstance()), genericOperatingSystem(NoOperatingSystem::NO_OPERATING_SYSTEM){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto OperatingSystemFactory::getOperatingSystemInstance() -> GenericOperatingSystem*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    SystemProperties* systemProperties = SystemProperties::getInstance();;
    

    std::string osName = systemProperties->getName();;
    

                        if(!this->hasDetected)
                        
                                    {
                                    this->hasDetected= true;
    

                        if(JavaString::indexOf(osName, OperatingSystems::getInstance()->ANDROID) >= 0)
                        
                                    {
                                    this->logUtil->putF("Found a Android OS", this, commonStrings->GET_INSTANCE);
    
this->genericOperatingSystem= AndroidOperatingSystemFactory::getInstance()->getOperatingSystemInstance();
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Operating System Info: ")->append(JavaString::valueOf(this->genericOperatingSystem))), this, commonStrings->GET_INSTANCE);
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(osName, OperatingSystems::getInstance()->HARMONY) >= 0)
                        
                                    {
                                    this->logUtil->putF("Found a Harmony OS", this, commonStrings->GET_INSTANCE);
    
this->genericOperatingSystem= AndroidOperatingSystemFactory::getInstance()->getOperatingSystemInstance();
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Operating System Info: ")->append(JavaString::valueOf(this->genericOperatingSystem))), this, commonStrings->GET_INSTANCE);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf((new StringMaker())->append("OS Not Supported: ")->append(osName)));
                    

                        }
                            

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->genericOperatingSystem= NoOperatingSystem::NO_OPERATING_SYSTEM;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericOperatingSystem;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_CPP
