
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
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MouseStrings
            : public Object
         {

    private: static MouseStrings* instance() { static std::unique_ptr<MouseStrings> value(new MouseStrings()); return value.get(); }

    public: static MouseStrings* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MouseStrings::instance();
    
}


    public: const std::string MOUSE_PRESSED = "mousePressed";

    public: const std::string MOUSE_RELEASED = "mouseReleased";

    public: const std::string MOUSE_CLICKED = "mouseClicked";

    public: const std::string MOUSE_DRAGGED = "mouseDragged";

    public: const std::string MOUSE_MOVED = "mouseMoved";

    public: const std::string MOUSE_PRESSED_LABEL = "MousePressed" +CommonSeps::getInstance()->COLON_SEP;

    public: const std::string MOUSE_RELEASED_LABEL = "MouseReleased" +CommonSeps::getInstance()->COLON_SEP;

    public: const std::string MOUSE_CLICKED_LABEL = "MouseClicked" +CommonSeps::getInstance()->COLON_SEP;

    public: const std::string MOUSE_DRAGGED_LABEL = "MouseDragged" +CommonSeps::getInstance()->COLON_SEP;

    public: const std::string MOUSE_MOVED_LABEL = "MouseMoved" +CommonSeps::getInstance()->COLON_SEP;

};

            

