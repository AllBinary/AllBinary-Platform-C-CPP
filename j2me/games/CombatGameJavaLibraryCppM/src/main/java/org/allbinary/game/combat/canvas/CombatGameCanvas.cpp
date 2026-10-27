
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
        
class CombatGameCanvas: public AllBinaryGameCanvas {

    protected: static inline std::vector<BasicLayerProcessor*> basicLayerProcessor = {};

public: CombatGameCanvas(CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) : AllBinaryGameCanvas(cmdListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    private: void CombatGameCanvas_init(){
DestroyEventCircularStaticPool::getInstance()->init(this);
    
ProgressCanvasFactory::getInstance()->addNormalPortion(50, "Destroy Events");
    
}


                //@Throws(Exception.constructor)
            
    protected: void initApp(AbeClientInformationInterface* abeClientInformation){
this->CombatGameCanvas_init();
    
super.initApp(abeClientInformation);
    
}


    protected: void initConfigurablePortion(int32_t portion){
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
            
    protected: void processPlayingGame(){
super.processPlayingGame();
    




                        for (
    int32_t index = CombatGameCanvas::basicLayerProcessor.size();--index >= 0; )
        {
CombatGameCanvas::basicLayerProcessor[index].process(this->gameLayerManager);
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void cleanupGame(){
super.cleanupGame();
    




                        for (
    int32_t index = CombatGameCanvas::basicLayerProcessor.size();--index >= 0; )
        {
CombatGameCanvas::basicLayerProcessor[index].getList()->clear();
    
}

GroupLayerManagerListener::getInstance()->clear();
    
GroupLayerManagerListener::getInstance()->log();
    
DestroyedEventHandler::getInstance()->removeAllListeners();
    
this->cleanupManager();
    
}


                //@Throws(Exception.constructor)
            
    protected: void cleanupManager(){
this->gameLayerManager.cleanup();
    
}


};

            

