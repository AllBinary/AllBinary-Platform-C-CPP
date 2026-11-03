
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/CanvasStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CanvasStrings::CanvasStrings() : EMPTY_CHILD_NAME_LIST(BasicArrayListUtil::getInstance()->getImmutableInstance()) {
        }
        auto CanvasStrings::instance_owner() -> CanvasStrings* { static std::unique_ptr<CanvasStrings> value(new CanvasStrings()); return value.get(); }
CanvasStrings* CanvasStrings::instance = CanvasStrings::instance_owner();

    auto CanvasStrings::getInstance() -> CanvasStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CanvasStrings::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_CPP
