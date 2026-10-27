
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MouseStrings
            : public virtual Object
         {

    private: static MouseStrings* instance_owner();
    private: static MouseStrings* instance;

    public: static MouseStrings* getInstance();


            
    public: MouseStrings();
        
    public: const std::string MOUSE_PRESSED = "mousePressed";

    public: const std::string MOUSE_RELEASED = "mouseReleased";

    public: const std::string MOUSE_CLICKED = "mouseClicked";

    public: const std::string MOUSE_DRAGGED = "mouseDragged";

    public: const std::string MOUSE_MOVED = "mouseMoved";

    public: const std::string MOUSE_PRESSED_LABEL;

    public: const std::string MOUSE_RELEASED_LABEL;

    public: const std::string MOUSE_CLICKED_LABEL;

    public: const std::string MOUSE_DRAGGED_LABEL;

    public: const std::string MOUSE_MOVED_LABEL;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_MOUSESTRINGS_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
