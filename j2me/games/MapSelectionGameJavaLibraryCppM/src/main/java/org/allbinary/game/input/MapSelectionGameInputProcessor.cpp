
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPSELECTIONGAMEINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPSELECTIONGAMEINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/MapSelectionGameInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface.h>

      
#include <org/allbinary/thread/ABRunnable.h>

      
#include <org/allbinary/thread/ThreadObjectUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameInputProcessorInterface.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
//#include "org/allbinary/game/input/MapSelectionRunnable.h"
#include "org/allbinary/game/input/GameInputProcessorComposite.h"


MapSelectionGameInputProcessor::MapSelectionRunnable::MapSelectionRunnable(MapSelectionGameInputProcessor* inputProcessor){
this->inputProcessor= inputProcessor;
    
}


    auto MapSelectionGameInputProcessor::MapSelectionRunnable::run() -> void{

        try {
            this->setRunning(true);
    
SecondaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    

    int32_t track = this->inputProcessor->preGameSelectorPaintable->getPreGameSelectionForm()->getSelectedIndex() +1;;
    

    int32_t wave = this->inputProcessor->raceTrackGeographicMapInterfaceFactoryInterface->getFirstWaveWithTrack(track);;
    
this->inputProcessor->gameCanvas->getLayerManager()->getGameInfo()->setCurrentLevel(wave);
    
this->inputProcessor->gameCanvas->buildGameInit(false);
    
GameKeyEventHandler::getInstance()->removeListener(this->inputProcessor->getPlayerGameInput());
    
this->setRunning(false);
    

                //: 
} catch(Exception& e) 
            {
this->setRunning(false);
    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


MapSelectionGameInputProcessor::MapSelectionGameInputProcessor(AllBinaryGameCanvas* gameCanvas, MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PreGameSelectorPaintable* mapSelectorPaintable, int32_t lockedIndex) : logUtil(LogUtil::getInstance()), inputTimeHelper(new TimeDelayHelper(650)), abRunnable(javaInner(new MapSelectionRunnable(this), this)){
this->gameCanvas= gameCanvas;
    
this->raceTrackGeographicMapInterfaceFactoryInterface= raceTrackGeographicMapInterfaceFactoryInterface;
    
this->preGameSelectorPaintable= mapSelectorPaintable;
    
this->playerGameInput= new GameInputProcessorComposite("Map Selection", this);
    
this->lockedIndex= lockedIndex;
    
}


                //@Throws(Exception.constructor)
            
    auto MapSelectionGameInputProcessor::process() -> void{
this->getPlayerGameInput()->update();
    
}


                //@Throws(Exception.constructor)
            
    auto MapSelectionGameInputProcessor::onInput(BasicArrayList* list) -> void{

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = JavaBoxes::toObject(list->get(index));;
    

    int32_t key = GameKeyEventUtil::getKey(anyType);;
    

                        if(key == Canvas::LEFT || key == Canvas::RIGHT || key == Canvas::UP || key == Canvas::DOWN)
                        
                                    {
                                    
                        if(this->inputTimeHelper->isTimeTNT())
                        
                                    {
                                    SecondaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    
this->preGameSelectorPaintable->getPreGameSelectionForm()->processInputKey(key);
    
break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(key == Canvas::KEY_NUM0)
                        
                                    {
                                    
    int32_t selectedIndex = this->preGameSelectorPaintable->getPreGameSelectionForm()->getSelectedIndex();;
    

                        if(selectedIndex < this->lockedIndex || !LockedUtil::getInstance()->isLocked())
                        
                                    {
                                    
                        if(!abRunnable->isRunning())
                        
                                    {
                                    abRunnable->setRunning(true);
    
ThreadObjectUtil::getInstance()->processThread(abRunnable);
    

                                    }
                                
break;

                    

                                    }
                                
                        else {
                            LockedFeatureNotificationUtil::getInstance()->fire();
    

                        }
                            

                                    }
                                
list->clear();
    
}

}


                //@Throws(Exception.constructor)
            
    auto MapSelectionGameInputProcessor::processInput(AllBinaryLayerManager* layerManager) -> void{
}


    auto MapSelectionGameInputProcessor::initInputProcessors() -> void{
}


    auto MapSelectionGameInputProcessor::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->toString();;
    
}


    auto MapSelectionGameInputProcessor::getPlayerGameInput() -> PlayerGameInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->playerGameInput;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPSELECTIONGAMEINPUTPROCESSOR_CPP
