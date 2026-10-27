
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/screen/DisplayPointScalar.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DisplayPointScalar::DisplayPointScalar() {
        }
        auto DisplayPointScalar::instance_owner() -> DisplayPointScalar* { static std::unique_ptr<DisplayPointScalar> value(new DisplayPointScalar()); return value.get(); }
DisplayPointScalar* DisplayPointScalar::instance = DisplayPointScalar::instance_owner();

    auto DisplayPointScalar::getInstance() -> DisplayPointScalar*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplayPointScalar::instance;
    
}


    auto DisplayPointScalar::processX(int32_t value) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    auto DisplayPointScalar::processY(int32_t value) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    auto DisplayPointScalar::process(GPoint* point) -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_DISPLAYPOINTSCALAR_CPP
