
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/EndGamePaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


EndGamePaintable::EndGamePaintable(AllBinaryGameCanvas* gameCanvas){
this->gameCanvas= gameCanvas;
    
}


    auto EndGamePaintable::paint(Graphics* graphics) -> void{
this->gameCanvas->paintGameOver(graphics);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEPAINTABLE_CPP
