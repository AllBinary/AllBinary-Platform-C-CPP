
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputMappingEventListenerInterface.h"
#include "InputMappingEvent.h"

class NullInputMappingEventListener
            : public Object
        : public InputMappingEventListenerInterface {

    public: static const NullInputMappingEventListener NULL_INPUT_MAPPING_EVENT_LISTENER = NullInputMappingEventListener();

                //@Throws(Exception.constructor)
            
    public: void onInputMappingEvent(InputMappingEvent inputMappingEvent){
}


    public: void onEvent(AllBinaryEventObject eventObject){
}


};

            

