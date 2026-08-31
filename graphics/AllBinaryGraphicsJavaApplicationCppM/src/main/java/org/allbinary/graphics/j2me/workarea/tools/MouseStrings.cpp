
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MouseStrings
            : public Object
         {
        

    private: static const instance: MouseStrings = new MouseStrings();

    public static MouseStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MouseStrings.instance;
    
}


    public const MOUSE_PRESSED: string = "mousePressed";

    public const MOUSE_RELEASED: string = "mouseReleased";

    public const MOUSE_CLICKED: string = "mouseClicked";

    public const MOUSE_DRAGGED: string = "mouseDragged";

    public const MOUSE_MOVED: string = "mouseMoved";

    public const MOUSE_PRESSED_LABEL: string = "MousePressed" +CommonSeps.getInstance()!.COLON_SEP;

    public const MOUSE_RELEASED_LABEL: string = "MouseReleased" +CommonSeps.getInstance()!.COLON_SEP;

    public const MOUSE_CLICKED_LABEL: string = "MouseClicked" +CommonSeps.getInstance()!.COLON_SEP;

    public const MOUSE_DRAGGED_LABEL: string = "MouseDragged" +CommonSeps.getInstance()!.COLON_SEP;

    public const MOUSE_MOVED_LABEL: string = "MouseMoved" +CommonSeps.getInstance()!.COLON_SEP;

};

            

