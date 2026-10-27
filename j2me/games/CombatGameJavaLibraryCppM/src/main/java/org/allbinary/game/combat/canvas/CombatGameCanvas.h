
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_H
        #define ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommandListener;
class DestroyedLayerProcessor;
class DestroyEventCircularStaticPool;
class DestroyedEventHandler;
class Features;
class GameFeatureFactory;
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
class BasicBuildGameInitializerFactory;
class AllBinaryGameLayerManager;
class DropLayerProcessor;
class GroupLayerManagerListener;
class HighScoresFactoryInterface;
class ProgressCanvasFactory;
class BasicLayerProcessor;
class AbeClientInformationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CombatGameCanvas: public AllBinaryGameCanvas {

    /*protected*/ public: static std::vector<BasicLayerProcessor*> basicLayerProcessor;

public: CombatGameCanvas(CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered);

    private: void CombatGameCanvas_init();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initApp(AbeClientInformationInterface* abeClientInformation);

    /*protected*/ public: void initConfigurablePortion(int32_t portion);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void processPlayingGame();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void cleanupGame();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void cleanupManager();

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>)
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>)
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>
#endif
#if __has_include(<org/allbinary/game/init/BasicBuildGameInitializerFactory.h>)
#include <org/allbinary/game/init/BasicBuildGameInitializerFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/drop/DropLayerProcessor.h>)
#include <org/allbinary/game/layer/drop/DropLayerProcessor.h>
#endif
#if __has_include(<org/allbinary/game/layer/identification/GroupLayerManagerListener.h>)
#include <org/allbinary/game/layer/identification/GroupLayerManagerListener.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresFactoryInterface.h>)
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
#endif
#if __has_include(<org/allbinary/layer/BasicLayerProcessor.h>)
#include <org/allbinary/layer/BasicLayerProcessor.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif

        #endif
    
