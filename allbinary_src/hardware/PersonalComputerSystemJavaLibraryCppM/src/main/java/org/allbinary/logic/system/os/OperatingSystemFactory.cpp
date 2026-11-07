
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
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/communication/log/Log.h>

      
#include <org/allbinary/logic/communication/log/LogFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/os/linux/LinuxOperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/os/solaris/SolarisOperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/os/windows/WindowsOperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"

auto OperatingSystemFactory::instance_owner() -> OperatingSystemFactory* { static std::unique_ptr<OperatingSystemFactory> value(new OperatingSystemFactory()); return value.get(); }
OperatingSystemFactory* OperatingSystemFactory::instance = OperatingSystemFactory::instance_owner();

    auto OperatingSystemFactory::getInstance() -> OperatingSystemFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OperatingSystemFactory::instance;
    
}


OperatingSystemFactory::OperatingSystemFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), genericOperatingSystem(NoOperatingSystem::NO_OPERATING_SYSTEM){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto OperatingSystemFactory::getOperatingSystemInstance() -> GenericOperatingSystem*{

        try {
            
    OperatingSystems* operatingSystems = OperatingSystems::getInstance();;
    

    SystemProperties* systemProperties = SystemProperties::getInstance();;
    

    std::string osName = systemProperties->getName();;
    

    std::string osArch = systemProperties->getArch();;
    

    std::string osVersion = systemProperties->getVersion();;
    

                        if(!this->hasDetected)
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("osName: ") +JavaString::valueOf(osName), this, this->commonStrings->GET_INSTANCE);
    
this->hasDetected= true;
    

                        if(JavaString::indexOf(osName, operatingSystems->LINUX) >= 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->FACTORYERROR))
                        
                                    {
                                    this->logUtil->putF("Found a Linux OS", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                
this->genericOperatingSystem= LinuxOperatingSystemFactory::getInstance()->getOperatingSystemInstance();
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(osName, operatingSystems->WINDOWS) >= 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->FACTORYERROR))
                        
                                    {
                                    this->logUtil->putF("Found a Windows OS", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                
this->genericOperatingSystem= WindowsOperatingSystemFactory::getInstance()->getOperatingSystemInstance();
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(osName, operatingSystems->SOLARIS) >= 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->FACTORYERROR))
                        
                                    {
                                    this->logUtil->putF("Found a Solaris OS", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                
this->genericOperatingSystem= SolarisOperatingSystemFactory::getInstance()->getOperatingSystemInstance();
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf((new StringMaker())->append("OS Not Supported: ")->append(osName)));
                    

                        }
                            

    Log* log = LogFactory::getInstanceF(JavaString::valueOf((new StringMaker())->append("OperatingSystem Info: ")->append(StringUtil::getInstance()->toString(this->genericOperatingSystem))), this, this->commonStrings->GET_INSTANCE);;
    
System.out.println(JavaString::valueOf(log));
    
this->logUtil->putL(log);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->genericOperatingSystem;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->FACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoOperatingSystem::NO_OPERATING_SYSTEM;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_OPERATINGSYSTEMFACTORY_CPP
