
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

        
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorChangeEventHandler: public BasicEventHandler {

    private: static ColorChangeEventHandler* eventHandler() { static std::unique_ptr<ColorChangeEventHandler> value(new ColorChangeEventHandler()); return value.get(); }
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static ColorChangeEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ColorChangeEventHandler::eventHandler();
    
}


private: ColorChangeEventHandler(){
}


};

            

