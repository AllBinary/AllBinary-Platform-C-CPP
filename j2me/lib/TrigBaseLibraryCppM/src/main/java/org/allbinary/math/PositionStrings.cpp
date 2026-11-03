
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
        



        #ifndef ORG_ALLBINARY_MATH_POSITIONSTRINGS_CPP
        #define ORG_ALLBINARY_MATH_POSITIONSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/math/PositionStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PositionStrings::PositionStrings() {
        }
        auto PositionStrings::instance_owner() -> PositionStrings* { static std::unique_ptr<PositionStrings> value(new PositionStrings()); return value.get(); }
PositionStrings* PositionStrings::instance = PositionStrings::instance_owner();

    auto PositionStrings::getInstance() -> PositionStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PositionStrings::instance;
    
}




        #endif //ORG_ALLBINARY_MATH_POSITIONSTRINGS_CPP
