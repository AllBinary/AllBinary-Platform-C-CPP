
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUT_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUT_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInput
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const gameKeyEventList: BasicArrayList;

    private: const removalGameKeyEventList: BasicArrayList;

    const isRemoveDuplicateKeyPresses: bool;

public constructor (BasicArrayList gameKeyEventList, BasicArrayList removalGameKeyEventList);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public add(GameKeyEvent gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addForRemoval(GameKeyEvent gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isForRemoval(GameKeyEvent gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public clear();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeNonAIInputGameKeyEvents();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public update();

    BasicArrayList getRemovalGameKeyEventList();

    BasicArrayList getGameKeyEventList();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUT_H
