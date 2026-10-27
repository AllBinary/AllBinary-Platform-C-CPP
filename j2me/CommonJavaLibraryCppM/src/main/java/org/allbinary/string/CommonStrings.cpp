
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONSTRINGS_CPP
        #define ORG_ALLBINARY_STRING_COMMONSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/string/CommonStrings.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CommonStrings::CommonStrings() : DIRECTION_NAME(
                                                        {
                                                            this->DOWN,this->LEFT,this->RIGHT,this->UP
                                                        }), START_METHOD_NAME(this->START) {
        }
        auto CommonStrings::instance_owner() -> CommonStrings* { static std::unique_ptr<CommonStrings> value(new CommonStrings()); return value.get(); }
CommonStrings* CommonStrings::instance = CommonStrings::instance_owner();

    auto CommonStrings::getInstance() -> CommonStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonStrings::instance;
    
}




        #endif //ORG_ALLBINARY_STRING_COMMONSTRINGS_CPP
