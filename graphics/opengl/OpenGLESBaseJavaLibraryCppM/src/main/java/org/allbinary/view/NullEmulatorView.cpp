
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
        



        #ifndef ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_CPP
        #define ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/view/NullEmulatorView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/EmulatorViewInterface.h"


NullEmulatorView::NullEmulatorView() {
        }
        auto NullEmulatorView::NULL_EMULATOR_VIEW_owner() -> NullEmulatorView* { static std::unique_ptr<NullEmulatorView> value(new NullEmulatorView()); return value.get(); }
NullEmulatorView* NullEmulatorView::NULL_EMULATOR_VIEW = NullEmulatorView::NULL_EMULATOR_VIEW_owner();

    auto NullEmulatorView::setMidlet(MIDlet* midlet) -> void{
}


    auto NullEmulatorView::onEmulatorInitComplete(Object* midletActivity) -> void{
}


    auto NullEmulatorView::onSetDisplayable(Displayable* displayable) -> void{
}




        #endif //ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_CPP
