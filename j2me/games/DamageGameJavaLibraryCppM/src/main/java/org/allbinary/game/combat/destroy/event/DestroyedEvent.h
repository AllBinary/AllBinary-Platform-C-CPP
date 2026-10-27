
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AllBinaryGameCanvas;
class NullGameCanvas;
class AllBinaryLayer;
class StringMaker;
class StringUtil;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DestroyedEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DestroyedEvent: public AllBinaryEventObject {

    private: AllBinaryGameCanvas* allBinaryGameCanvas;

    private: AllBinaryLayer* allBinaryLayerInterface;

public: DestroyedEvent(AllBinaryGameCanvas* combatGameCanvas);

    public: AllBinaryGameCanvas* getAllBinaryGameCanvas();

    public: AllBinaryLayer* getLayerInterface();

    private: void setAllBinaryGameCanvas(AllBinaryGameCanvas* allBinaryGameCanvas);

    public: void setLayerInterfaceForCircularStaticPool(AllBinaryLayer* allBinaryLayerInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/NullGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/NullGameCanvas.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h")
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#endif

        #endif
    
