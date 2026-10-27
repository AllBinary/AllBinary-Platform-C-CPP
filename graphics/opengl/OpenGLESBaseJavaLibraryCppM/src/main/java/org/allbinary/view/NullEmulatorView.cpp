
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/EmulatorViewInterface.h"

class NullEmulatorView
            : public Object
        , public EmulatorViewInterface {

    public: static NullEmulatorView* NULL_EMULATOR_VIEW() { static std::unique_ptr<NullEmulatorView> value(new NullEmulatorView()); return value.get(); }

    public: void setMidlet(MIDlet* midlet){
}


    public: void onEmulatorInitComplete(Object* midletActivity){
}


    public: void onSetDisplayable(Displayable* displayable){
}


};

            

