
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScreenRepaintUtil.h"

class ScreenRepaintProcessor: public Processor {

    private: Displayable displayable;

public: ScreenRepaintProcessor(Displayable displayable);

                //@Throws(Exception.constructor)
            
    public: void process();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_SCREENREPAINTPROCESSOR_H
