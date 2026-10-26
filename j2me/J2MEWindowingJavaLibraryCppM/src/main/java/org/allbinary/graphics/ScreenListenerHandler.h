
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H
        #define ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScreenEmptyListener.h"
#include "ScreenListenerInterface.h"

class ScreenListenerHandler
            : public Object
         {

    private: static ScreenListenerHandler instance() { return ScreenListenerHandler(); }

    public: static ScreenListenerHandler getInstance();

    private: ScreenListenerInterface screenListenerInterface = ScreenEmptyListener();

    public: void setListener(ScreenListenerInterface screenListenerInterface);

    public: void fireWithState(bool isFullScreen);

    public: void fire();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_H
