
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/paint/MainGameDemoStatePaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MainGameDemoStatePaintable::MainGameDemoStatePaintable(Paintable* ownershipPaintableInterface, Paintable* menuPaintableInterface){
this->ownershipPaintableInterface= ownershipPaintableInterface;
    
this->menuPaintableInterface= menuPaintableInterface;
    
}


    auto MainGameDemoStatePaintable::paint(Graphics* graphics) -> void{
this->menuPaintableInterface->paint(graphics);
    
this->ownershipPaintableInterface->paint(graphics);
    
}


    auto MainGameDemoStatePaintable::getOwnershipPaintableInterface() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->ownershipPaintableInterface;
    
}


    auto MainGameDemoStatePaintable::getMenuPaintableInterface() -> Paintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->menuPaintableInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_PAINT_MAINGAMEDEMOSTATEPAINTABLE_CPP
