
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/special/SpecialGameInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"


SpecialGameInput::SpecialGameInput() {
        }
        
                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::up() -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::down() -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::right() -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::left() -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::strafeLeft() -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::strafeRight() -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::fire(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::special1(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::special2(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::special3(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::special4(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SpecialGameInput::special5(AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) -> void{
}


    auto SpecialGameInput::paint(Graphics* graphics) -> void{
}


    auto SpecialGameInput::paintThreed(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUT_CPP
