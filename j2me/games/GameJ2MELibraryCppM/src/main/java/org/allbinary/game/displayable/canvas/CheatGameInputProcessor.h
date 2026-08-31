
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/special/SpecialGameInputFactory.h>

      
#include <org/allbinary/game/layer/special/SpecialGameInputInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class CheatGameInputProcessor: public PlayerGameInput {
        

    public static inputProcessor: SpecialGameInputInterface = SpecialGameInputFactory.NO_SPECIAL_GAME_INPUT;

    private: const PROCESS_GAME: string = "processGame";

    private: const gameCanvas: AllBinaryGameCanvas;

public constructor (AllBinaryGameCanvas gameCanvas);

    private: const gameKeyFactory: GameKeyFactory = GameKeyFactory.getInstance()!;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public update();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CHEATGAMEINPUTPROCESSOR_H
