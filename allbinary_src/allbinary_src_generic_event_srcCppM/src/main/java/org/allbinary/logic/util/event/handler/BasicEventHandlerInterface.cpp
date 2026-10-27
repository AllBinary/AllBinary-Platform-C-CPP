
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicEventHandlerInterface {

    public: virtual void addListenerInterface(EventListenerInterface* eventListenerInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void fireEvent(AllBinaryEventObject* eventObject) = 0;

    public: virtual void removeAllListeners() = 0;

    public: virtual void removeListener(EventListenerInterface* eventListenerInterface) = 0;

};

            

