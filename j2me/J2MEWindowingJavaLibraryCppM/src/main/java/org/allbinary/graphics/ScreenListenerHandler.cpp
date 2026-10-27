
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

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/ScreenEmptyListener.h"
#include "org/allbinary/graphics/ScreenListenerInterface.h"

class ScreenListenerHandler
            : public Object
         {

    private: static ScreenListenerHandler* instance() { static std::unique_ptr<ScreenListenerHandler> value(new ScreenListenerHandler()); return value.get(); }

    public: static ScreenListenerHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenListenerHandler::instance();
    
}


    private: ScreenListenerInterface* screenListenerInterface = new ScreenEmptyListener();

    public: void setListener(ScreenListenerInterface* screenListenerInterface){
this->screenListenerInterface= screenListenerInterface;
    
}


    public: void fireWithState(bool isFullScreen){
this->screenListenerInterface->onFullScreen(isFullScreen);
    
}


    public: void fire(){
this->screenListenerInterface->onFullScreenDisplay();
    
}


};

            

