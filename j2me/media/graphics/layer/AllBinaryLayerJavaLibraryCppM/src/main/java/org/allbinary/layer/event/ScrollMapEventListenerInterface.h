
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ScrollMapEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScrollMapEventListenerInterface: public virtual EventListenerInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void onMoveEvent(ScrollMapEvent* layerManagerEvent) = 0;

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENTLISTENERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include("org/allbinary/layer/event/ScrollMapEvent.h")
#include "org/allbinary/layer/event/ScrollMapEvent.h"
#endif

        #endif
    
