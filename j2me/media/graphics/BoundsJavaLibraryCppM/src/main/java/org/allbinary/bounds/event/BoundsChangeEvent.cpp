
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
        



        #ifndef ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENT_CPP
        #define ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/bounds/event/BoundsChangeEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BoundsChangeEvent::BoundsChangeEvent(Rectangle* rectangle) : AllBinaryEventObject(rectangle){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto BoundsChangeEvent::getRectangle() -> Rectangle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Rectangle*>(this->getSource());
    
}




        #endif //ORG_ALLBINARY_BOUNDS_EVENT_BOUNDSCHANGEEVENT_CPP
