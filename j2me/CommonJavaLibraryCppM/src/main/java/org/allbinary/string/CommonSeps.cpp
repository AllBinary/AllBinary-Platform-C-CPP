
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONSEPS_CPP
        #define ORG_ALLBINARY_STRING_COMMONSEPS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/string/CommonSeps.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CommonSeps::CommonSeps() : COLON_SEP((new StringMaker())->append(this->COLON)->append(this->SPACE)->toString()), COMMA_SEP((new StringMaker())->append(this->COMMA)->append(this->SPACE)->toString()) {
        }
        auto CommonSeps::instance_owner() -> CommonSeps* { static std::unique_ptr<CommonSeps> value(new CommonSeps()); return value.get(); }
CommonSeps* CommonSeps::instance = CommonSeps::instance_owner();

    auto CommonSeps::getInstance() -> CommonSeps*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CommonSeps::instance;
    
}




        #endif //ORG_ALLBINARY_STRING_COMMONSEPS_CPP
