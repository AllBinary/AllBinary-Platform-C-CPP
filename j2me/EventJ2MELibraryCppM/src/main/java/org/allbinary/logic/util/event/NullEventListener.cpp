
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

class NullEventListener
            : public Object
        , public EventListenerInterface {

    public: static NullEventListener* NULL_EVENT_LISTENER() { static std::unique_ptr<NullEventListener> value(new NullEventListener()); return value.get(); }

    public: void onEvent(AllBinaryEventObject* eventObject){
}


};

            

