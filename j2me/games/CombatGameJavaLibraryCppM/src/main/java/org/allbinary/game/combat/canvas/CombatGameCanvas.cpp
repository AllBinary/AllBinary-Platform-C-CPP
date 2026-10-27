
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/canvas/CombatGameCanvas.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
std::vector<BasicLayerProcessor*> CombatGameCanvas::basicLayerProcessor = {};

CombatGameCanvas::CombatGameCanvas(CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) : AllBinaryGameCanvas(cmdListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CombatGameCanvas::CombatGameCanvas_init() -> void{
DestroyEventCircularStaticPool::getInstance()->init(this);
    
ProgressCanvasFactory::getInstance()->addNormalPortion(50, "Destroy Events");
    
}


                //@Throws(Exception.constructor)
            
    auto CombatGameCanvas::initApp(AbeClientInformationInterface* abeClientInformation) -> void{
this->CombatGameCanvas_init();
    
AllBinaryGameCanvas::initApp(abeClientInformation);
    
}


    auto CombatGameCanvas::initConfigurablePortion(int32_t portion) -> void{
DestroyedLayerProcessor::init();
    
ProgressCanvasFactory::getInstance()->addNormalPortion(portion, "Basic Processors");
    

    Features* features = Features::getInstance();;
    

    GameFeatureFactory* gameFeatureFactory = GameFeatureFactory::getInstance();;
    

                        if(features->isFeature(gameFeatureFactory->DROPPED_ITEMS) && features->isFeature(gameFeatureFactory->DROPPED_ITEMS_FROM_DEATH))
                        
                                    {
                                    CombatGameCanvas::basicLayerProcessor= std::vector<BasicLayerProcessor*>(2);
    
CombatGameCanvas::basicLayerProcessor[0]= DestroyedLayerProcessor::getInstance();
    
CombatGameCanvas::basicLayerProcessor[1]= DropLayerProcessor::getInstance();
    

                                    }
                                
                        else {
                            CombatGameCanvas::basicLayerProcessor= std::vector<BasicLayerProcessor*>(1);
    
CombatGameCanvas::basicLayerProcessor[0]= DestroyedLayerProcessor::getInstance();
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto CombatGameCanvas::processPlayingGame() -> void{
AllBinaryGameCanvas::processPlayingGame();
    




                        for (
    int32_t index = CombatGameCanvas::basicLayerProcessor.size();--index >= 0; )
        {
CombatGameCanvas::basicLayerProcessor[index]->process(this->gameLayerManager);
    
}

}


                //@Throws(Exception.constructor)
            
    auto CombatGameCanvas::cleanupGame() -> void{
AllBinaryGameCanvas::cleanupGame();
    




                        for (
    int32_t index = CombatGameCanvas::basicLayerProcessor.size();--index >= 0; )
        {
CombatGameCanvas::basicLayerProcessor[index]->getList()->clear();
    
}

GroupLayerManagerListener::getInstance()->clear();
    
GroupLayerManagerListener::getInstance()->log();
    
DestroyedEventHandler::getInstance()->removeAllListeners();
    
this->cleanupManager();
    
}


                //@Throws(Exception.constructor)
            
    auto CombatGameCanvas::cleanupManager() -> void{
this->gameLayerManager->cleanup();
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_CANVAS_COMBATGAMECANVAS_CPP
