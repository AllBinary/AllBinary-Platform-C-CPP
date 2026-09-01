
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
        



        #ifndef ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H
        #define ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H

            #include "../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmulatorViewInterface.h"

class NullEmulatorView
            : public Object
        : public EmulatorViewInterface {

    public: static const NullEmulatorView NULL_EMULATOR_VIEW = NullEmulatorView();

    public: void setMidlet(MIDlet midlet);

    public: void onEmulatorInitComplete(Object* midletActivity);

    public: void onSetDisplayable(Displayable displayable);

};

            


        #endif //ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H
