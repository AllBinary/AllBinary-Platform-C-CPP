
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
        



        #ifndef ORG_ALLBINARY_GAME_AI_BASICAI_H
        #define ORG_ALLBINARY_GAME_AI_BASICAI_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/game/displayable/canvas/CanvasUtil.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicAI: public ArtificialIntelligence: public GameKeyEventSourceInterface {
        

    public static const AI_VISITOR: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(2)!;

    public static const ID: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(1)!;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    private: const ownerLayerInterface: AllBinaryLayer;

    private: const gameInput: GameInput;

    private: lastKey: int32_t =  -1;

public constructor (AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public processKeyAI(int32_t key);

    public setLastKey(int32_t lastKey);

    public int32_t getLastKey();

    public AllBinaryLayer getOwnerLayerInterface();

    public GameInput getGameInput();

    public string getName();

    public string toString();

    public int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_GAME_AI_BASICAI_H
