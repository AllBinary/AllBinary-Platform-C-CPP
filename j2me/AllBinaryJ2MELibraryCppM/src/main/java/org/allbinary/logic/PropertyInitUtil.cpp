
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_PROPERTYINITUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_PROPERTYINITUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/PropertyInitUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PropertyInitUtil::PropertyInitUtil() {
        }
        auto PropertyInitUtil::instance_owner() -> PropertyInitUtil* { static std::unique_ptr<PropertyInitUtil> value(new PropertyInitUtil()); return value.get(); }
PropertyInitUtil* PropertyInitUtil::instance = PropertyInitUtil::instance_owner();

    auto PropertyInitUtil::getInstance(int32_t value) -> PropertyInitUtil*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF(JavaString::valueOf((new StringMaker())->append("PropertyInitUtil: ")->appendint(value)), logUtil, commonStrings->CONSTRUCTOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PropertyInitUtil::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_PROPERTYINITUTIL_CPP
