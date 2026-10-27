
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/ai/ArtificialIntelligence.h>
class CanvasUtil;
class GameInput;
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
class GameKeyEventFactory;
class AllBinaryLayer;
class AllBinaryLayerManager;
class LogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicAI: public ArtificialIntelligence, public GameKeyEventSourceInterface {

    public: static int32_t AI_VISITOR;

    public: static int32_t ID;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: GameKeyEventFactory* gameKeyEventFactory;

    private: AllBinaryLayer* ownerLayerInterface;

    private: GameInput* gameInput;

    private: int32_t lastKey =  -1;

public: BasicAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    public: void processKeyAI(int32_t key);

    public: void setLastKey(int32_t lastKey);

    public: int32_t getLastKey();

    public: AllBinaryLayer* getOwnerLayerInterface();

    public: GameInput* getGameInput();

    public: std::string getName();

    public: std::string toString();

    public: int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_GAME_AI_BASICAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AI_BASICAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AI_BASICAI_H_COMPLETE
        #if __has_include(<org/allbinary/ai/ArtificialIntelligence.h>)
#include <org/allbinary/ai/ArtificialIntelligence.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/CanvasUtil.h>)
#include <org/allbinary/game/displayable/canvas/CanvasUtil.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyEventSourceInterface.h>)
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
