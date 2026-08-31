
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENERINTERFACE_H
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENERINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerEvent.h"

class LayerManagerEventListenerInterface: public EventListenerInterface {
        

                //@Throws(Exception.constructor)
            
    onCreateLayerManagerEvent(LayerManagerEvent layerManagerEvent);

                //@Throws(Exception.constructor)
            
    onDeleteLayerManagerEvent(LayerManagerEvent layerManagerEvent);

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENERINTERFACE_H
