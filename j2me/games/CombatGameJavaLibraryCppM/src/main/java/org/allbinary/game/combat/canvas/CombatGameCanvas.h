
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

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/init/BasicBuildGameInitializerFactory.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/drop/DropLayerProcessor.h>

      
#include <org/allbinary/game/layer/identification/GroupLayerManagerListener.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/layer/BasicLayerProcessor.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CombatGameCanvas: public AllBinaryGameCanvas {
        

    static basicLayerProcessor: std::vector<BasicLayerProcessor> = [];

public constructor (CommandListener cmdListener, AllBinaryGameLayerManager gameLayerManager, HighScoresFactoryInterface highScoresFactoryInterface, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool buffered);

    CombatGameCanvas_init();

                //@Throws(Exception.constructor)
            
    initApp(AbeClientInformationInterface abeClientInformation);

    initConfigurablePortion(int32_t portion);

                //@Throws(Exception.constructor)
            
    processPlayingGame();

                //@Throws(Exception.constructor)
            
    cleanupGame();

                //@Throws(Exception.constructor)
            
    cleanupManager();

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_H
