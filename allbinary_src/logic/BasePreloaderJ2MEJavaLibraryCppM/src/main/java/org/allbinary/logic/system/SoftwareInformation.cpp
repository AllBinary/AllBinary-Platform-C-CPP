
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/SoftwareInformation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/KotlinUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SoftwareInformation::SoftwareInformation(std::string name, std::string version, std::string shortName){
this->name= name;
    
this->version= version;
    
this->shortName= (new StringMaker())->append(shortName)->append(KotlinUtil::getShortName())->toString();
    
}


    auto SoftwareInformation::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto SoftwareInformation::getVersion() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->version;
    
}


    auto SoftwareInformation::toShortString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->shortName;
    
}


    auto SoftwareInformation::toString() -> std::string{

    std::string NAME = "Name: ";;
    

    std::string VERSION = "Version: ";;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(NAME);
    
stringBuffer->append(this->getName());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(VERSION);
    
stringBuffer->append(this->getVersion());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_CPP
