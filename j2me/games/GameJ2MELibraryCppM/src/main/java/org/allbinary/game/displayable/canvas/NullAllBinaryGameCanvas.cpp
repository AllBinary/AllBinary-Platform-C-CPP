
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/NullAllBinaryGameCanvas.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"


NullAllBinaryGameCanvas::NullAllBinaryGameCanvas() {
        }
        auto NullAllBinaryGameCanvas::NULL_ALLBINARY_GAME_CANVAS_owner() -> NullAllBinaryGameCanvas* { static std::unique_ptr<NullAllBinaryGameCanvas> value(new NullAllBinaryGameCanvas()); return value.get(); }
NullAllBinaryGameCanvas* NullAllBinaryGameCanvas::NULL_ALLBINARY_GAME_CANVAS = NullAllBinaryGameCanvas::NULL_ALLBINARY_GAME_CANVAS_owner();

    auto NullAllBinaryGameCanvas::getLayerManager() -> AllBinaryGameLayerManager*{



                            throw RuntimeException();
                    
}


    auto NullAllBinaryGameCanvas::addCommand(Command* cmd) -> void{



                            throw RuntimeException();
                    
}


    auto NullAllBinaryGameCanvas::getHeight() -> int32_t{



                            throw RuntimeException();
                    
}


    auto NullAllBinaryGameCanvas::getWidth() -> int32_t{



                            throw RuntimeException();
                    
}


    auto NullAllBinaryGameCanvas::removeCommand(Command* cmd) -> void{



                            throw RuntimeException();
                    
}


    auto NullAllBinaryGameCanvas::setCommandListener(CommandListener* l) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLALLBINARYGAMECANVAS_CPP
