
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_CPP
        #define ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/persistance/PlatformRecordIdUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PlatformRecordIdUtil::PlatformRecordIdUtil() {
        }
        auto PlatformRecordIdUtil::instance_owner() -> PlatformRecordIdUtil* { static std::unique_ptr<PlatformRecordIdUtil> value(new PlatformRecordIdUtil()); return value.get(); }
PlatformRecordIdUtil* PlatformRecordIdUtil::instance = PlatformRecordIdUtil::instance_owner();

    auto PlatformRecordIdUtil::getInstance() -> PlatformRecordIdUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PlatformRecordIdUtil::instance;
    
}


    auto PlatformRecordIdUtil::getRecordId(AbeClientInformationInterface* abeClientInformation, std::string baseRecordId) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (new StringMaker())->append(abeClientInformation->toShortString())->append(CommonSeps::getInstance()->UNDERSCORE)->append(this->PLATFORM_SHORT_NAME)->append(baseRecordId)->toString();;
    
}




        #endif //ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_CPP
