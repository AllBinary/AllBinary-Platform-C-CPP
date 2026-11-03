
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/InGameMenuBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasNonBotPaintable.h"


InGameMenuBehavior::InGameMenuBehavior() {
        }
        auto InGameMenuBehavior::instanceC_owner() -> InGameMenuBehavior* { static std::unique_ptr<InGameMenuBehavior> value(new InGameMenuBehavior()); return value.get(); }
InGameMenuBehavior* InGameMenuBehavior::instanceC = InGameMenuBehavior::instanceC_owner();

    auto InGameMenuBehavior::getInstance() -> InGameMenuBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InGameMenuBehavior::instanceC;
    
}


                //@Throws(Exception.constructor)
            
    auto InGameMenuBehavior::onDisplayChangeEvent(AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent) -> void{
allBinaryGameCanvas->updateMenuFromEvent(displayChangeEvent);
    
}


    auto InGameMenuBehavior::initSpecialPaint(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->setNonBotPaintableP(new GameCanvasNonBotPaintable(allBinaryGameCanvas));
    
}


                //@Throws(Exception.constructor)
            
    auto InGameMenuBehavior::initMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->initMenu2();
    
}


                //@Throws(Exception.constructor)
            
    auto InGameMenuBehavior::updateMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->initMenu2();
    
}


                //@Throws(Exception.constructor)
            
    auto InGameMenuBehavior::popupMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->popupMenu2();
    
}


    auto InGameMenuBehavior::closeMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->closeMenu2();
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INGAMEMENUBEHAVIOR_CPP
