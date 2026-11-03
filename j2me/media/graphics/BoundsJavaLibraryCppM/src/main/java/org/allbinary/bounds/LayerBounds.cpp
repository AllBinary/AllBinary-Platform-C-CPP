
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
        



        #ifndef ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_CPP
        #define ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/bounds/LayerBounds.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/bounds/event/BoundsChangeEvent.h>

      
#include <org/allbinary/bounds/event/BoundsChangeEventListener.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/bounds/BoundsVisitorInterface.h"


LayerBounds::LayerBounds(Rectangle* rectangle) : logUtil(LogUtil::getInstance()){
this->rectangle= rectangle;
    
}


    auto LayerBounds::getRectangleP() -> Rectangle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rectangle;
    
}


    auto LayerBounds::visit(BoundsVisitorInterface* boundsVisitorInterface) -> void{
}


    auto LayerBounds::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto LayerBounds::onBoundsChangeEvent(BoundsChangeEvent* boundsChangeEvent) -> void{
this->rectangle= boundsChangeEvent->getRectangle();
    
}




        #endif //ORG_ALLBINARY_BOUNDS_LAYERBOUNDS_CPP
