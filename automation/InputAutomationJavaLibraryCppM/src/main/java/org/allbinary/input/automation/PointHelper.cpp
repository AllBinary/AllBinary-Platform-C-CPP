
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/PointHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/PointFactory.h"
#include "org/allbinary/input/automation/Point.h"
#include "org/allbinary/input/automation/Rectangle.h"


PointHelper::PointHelper(){
}


    auto PointHelper::getCenterPoint(Rectangle* rectangle) -> Point*{

    double x = rectangle->getX() +rectangle->getWidth() /PointHelper::two;;
    

    double y = rectangle->getY() +rectangle->getHeight() /PointHelper::two;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory::getInstance(static_cast<int32_t>(x), static_cast<int32_t>(y));;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_CPP
