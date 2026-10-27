
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


BaseMenuBehavior::BaseMenuBehavior() {
        }
        auto BaseMenuBehavior::instance_owner() -> BaseMenuBehavior* { static std::unique_ptr<BaseMenuBehavior> value(new BaseMenuBehavior()); return value.get(); }
BaseMenuBehavior* BaseMenuBehavior::instance = BaseMenuBehavior::instance_owner();

    auto BaseMenuBehavior::getInstance() -> BaseMenuBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BaseMenuBehavior::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseMenuBehavior::onDisplayChangeEvent(AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent) -> void{
}


    auto BaseMenuBehavior::initSpecialPaint(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
allBinaryGameCanvas->setNonBotPaintableP(NullPaintable::getInstance());
    
}


                //@Throws(Exception.constructor)
            
    auto BaseMenuBehavior::initMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


                //@Throws(Exception.constructor)
            
    auto BaseMenuBehavior::updateMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


                //@Throws(Exception.constructor)
            
    auto BaseMenuBehavior::popupMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}


    auto BaseMenuBehavior::closeMenu(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEMENUBEHAVIOR_CPP
