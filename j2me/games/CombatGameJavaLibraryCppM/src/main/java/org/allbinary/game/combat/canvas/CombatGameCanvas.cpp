
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

public constructor (CommandListener cmdListener, AllBinaryGameLayerManager gameLayerManager, HighScoresFactoryInterface highScoresFactoryInterface, BasicBuildGameInitializerFactory gameInitializationInterfaceFactoryInterface, bool buffered){
            super(cmdListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    CombatGameCanvas_init(){
DestroyEventCircularStaticPool.getInstance()!.init(this);
    
ProgressCanvasFactory.getInstance()!.addNormalPortion(50, "Destroy Events");
    
}


                //@Throws(Exception.constructor)
            
    initApp(AbeClientInformationInterface abeClientInformation){
this.CombatGameCanvas_init();
    
super.initApp(abeClientInformation);
    
}


    initConfigurablePortion(int32_t portion){
DestroyedLayerProcessor.init();
    
ProgressCanvasFactory.getInstance()!.addNormalPortion(portion, "Basic Processors");
    

    features: Features = Features.getInstance()!;;
    

    gameFeatureFactory: GameFeatureFactory = GameFeatureFactory.getInstance()!;;
    

                        if(features.isFeature(gameFeatureFactory!.DROPPED_ITEMS) && features.isFeature(gameFeatureFactory!.DROPPED_ITEMS_FROM_DEATH))
                        
                                    {
                                    CombatGameCanvas.basicLayerProcessor= new Array(2);
    
CombatGameCanvas.basicLayerProcessor[0]= DestroyedLayerProcessor.getInstance();
    
CombatGameCanvas.basicLayerProcessor[1]= DropLayerProcessor.getInstance();
    

                                    }
                                
                        else {
                            CombatGameCanvas.basicLayerProcessor= new Array(1);
    
CombatGameCanvas.basicLayerProcessor[0]= DestroyedLayerProcessor.getInstance();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    processPlayingGame(){
super.processPlayingGame();
    




                        for (
    index: int32_t = CombatGameCanvas.basicLayerProcessor!.length
                ;--index >= 0; )
        {
CombatGameCanvas.basicLayerProcessor[index]!.process(this.gameLayerManager);
    
}

}


                //@Throws(Exception.constructor)
            
    cleanupGame(){
super.cleanupGame();
    




                        for (
    index: int32_t = CombatGameCanvas.basicLayerProcessor!.length
                ;--index >= 0; )
        {
CombatGameCanvas.basicLayerProcessor[index]!.getList()!.clear();
    
}

GroupLayerManagerListener.getInstance()!.clear();
    
GroupLayerManagerListener.getInstance()!.log();
    
DestroyedEventHandler.getInstance()!.removeAllListeners();
    
this.cleanupManager();
    
}


                //@Throws(Exception.constructor)
            
    cleanupManager(){
this.gameLayerManager!.cleanup();
    
}


};

            

