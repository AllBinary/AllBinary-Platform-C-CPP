
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_CPP
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/event/ScrollMapEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ScrollMapEvent::ScrollMapEvent(Object* anyType) : AllBinaryEventObject(anyType){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ScrollMapEvent::setDx(int32_t dx) -> void{
this->dx= dx;
    
}


    auto ScrollMapEvent::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    auto ScrollMapEvent::setDy(int32_t dy) -> void{
this->dy= dy;
    
}


    auto ScrollMapEvent::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}


    auto ScrollMapEvent::setDxDy(int32_t dx, int32_t dy) -> void{
this->dx= dx;
    
this->dy= dy;
    
}




        #endif //ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_CPP
