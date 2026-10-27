
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MouseStrings::MouseStrings() : MOUSE_PRESSED_LABEL(JavaString::valueOf("MousePressed") +JavaString::valueOf(CommonSeps::getInstance()->COLON_SEP)), MOUSE_RELEASED_LABEL(JavaString::valueOf("MouseReleased") +JavaString::valueOf(CommonSeps::getInstance()->COLON_SEP)), MOUSE_CLICKED_LABEL(JavaString::valueOf("MouseClicked") +JavaString::valueOf(CommonSeps::getInstance()->COLON_SEP)), MOUSE_DRAGGED_LABEL(JavaString::valueOf("MouseDragged") +JavaString::valueOf(CommonSeps::getInstance()->COLON_SEP)), MOUSE_MOVED_LABEL(JavaString::valueOf("MouseMoved") +JavaString::valueOf(CommonSeps::getInstance()->COLON_SEP)) {
        }
        auto MouseStrings::instance_owner() -> MouseStrings* { static std::unique_ptr<MouseStrings> value(new MouseStrings()); return value.get(); }
MouseStrings* MouseStrings::instance = MouseStrings::instance_owner();

    auto MouseStrings::getInstance() -> MouseStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MouseStrings::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_CPP
