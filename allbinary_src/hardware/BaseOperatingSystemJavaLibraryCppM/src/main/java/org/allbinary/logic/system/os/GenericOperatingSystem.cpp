
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/java/character/CharacterSet.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/OperatingSystemInterface.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"


GenericOperatingSystem::GenericOperatingSystem() : characterSet(new CharacterSet()){

    SystemProperties* systemProperties = SystemProperties::getInstance();;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(stringValidationUtil->isEmpty(systemProperties->getName()))
                        
                                    {
                                    this->osName= EMPTY_STRING;
    

                                    }
                                
                        else {
                            this->osName= systemProperties->getName();
    

                        }
                            

                        if(stringValidationUtil->isEmpty(systemProperties->getArch()))
                        
                                    {
                                    this->osArch= EMPTY_STRING;
    

                                    }
                                
                        else {
                            this->osArch= systemProperties->getArch();
    

                        }
                            

                        if(stringValidationUtil->isEmpty(systemProperties->getVersion()))
                        
                                    {
                                    this->osVersion= EMPTY_STRING;
    

                                    }
                                
                        else {
                            this->osVersion= systemProperties->getVersion();
    

                        }
                            
}


    auto GenericOperatingSystem::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->osName;
    
}


    auto GenericOperatingSystem::getVersion() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->osVersion;
    
}


    auto GenericOperatingSystem::getArch() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->osArch;
    
}


    auto GenericOperatingSystem::getCharacterSet() -> CharacterSet*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->characterSet;
    
}


    auto GenericOperatingSystem::isOverScan() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto GenericOperatingSystem::getOverScanXPercent() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 100;
    
}


    auto GenericOperatingSystem::getOverScanYPercent() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 100;
    
}


    auto GenericOperatingSystem::isScalable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scalable;
    
}


    auto GenericOperatingSystem::isAutoHide() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto GenericOperatingSystem::toString() -> std::string{

    std::string NEW_LINE = CommonSeps::getInstance()->NEW_LINE;;
    

    StringMaker* osBuffer = new StringMaker();;
    
osBuffer->append("Operating System Info: \n");
    
osBuffer->append(this->getName());
    
osBuffer->append(NEW_LINE);
    
osBuffer->append(this->getArch());
    
osBuffer->append(NEW_LINE);
    
osBuffer->append(this->getVersion());
    
osBuffer->append(NEW_LINE);
    
osBuffer->append(StringUtil::getInstance()->toString(this->getCharacterSet()));
    
osBuffer->append(NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return osBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_GENERICOPERATINGSYSTEM_CPP
