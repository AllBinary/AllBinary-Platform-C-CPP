
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/media/audio/DowngradeSound.h>

      
#include <org/allbinary/media/audio/UpgradeSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
#include "org/allbinary/game/input/RTSPlayerGameInput.h"
#include "org/allbinary/game/input/SelectedRTSLayersPlayerUpgradeGameInputProcessor.h"
#include "org/allbinary/game/input/SelectedRTSLayersPlayerDowngradeGameInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessorUtil.h"


SelectedRTSLayersPlayerGameInput::SelectedRTSLayersPlayerGameInput(RTSLayerInfoPaintable* towerInfoPaintable, RTSPlayerLayerInterface* rtsPlayerLayerInterface, BasicArrayList* list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface* selectRTSLayerVisitorFactoryInterface) : PlayerGameInput(list, new BasicArrayListD(), playerInputId), inputProcessorArray(std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX)), isSingleKeyProcessing(Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS) || Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_PRESS)), selectedRTSLayersList(new BasicArrayListD()), preSelectedRTSLayersList(new BasicArrayListD()), paintSelectedRTSLayersList(BasicArrayListUtil::getInstance()->getImmutableInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initInputProcessors();
    
this->rtsPlayerLayerInterface= rtsPlayerLayerInterface;
    
this->list= list;
    
this->selectRTSLayerVisitorInterface= selectRTSLayerVisitorFactoryInterface->create(this);
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    
this->upgradeGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings::getInstance()->UPGRADE, smallIntegerSingletonFactory->getAt(2), basicColorFactory->PINK, BooleanFactory::getInstance()->FALSE);
    
this->noMoneyGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings::getInstance()->NO_MONEY, smallIntegerSingletonFactory->getAt(2), basicColorFactory->PINK, BooleanFactory::getInstance()->FALSE);
    
this->downgradeGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings::getInstance()->DOWNGRADE, smallIntegerSingletonFactory->getAt(2), basicColorFactory->PINK, BooleanFactory::getInstance()->FALSE);
    
}


                //@Throws(Exception.constructor)
            
    auto SelectedRTSLayersPlayerGameInput::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(allBinaryGameLayerManager);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->upgradeGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
this->noMoneyGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
this->downgradeGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
}


    auto SelectedRTSLayersPlayerGameInput::isSelected(RTSLayer* rtsLayer) -> bool{

                        if(this->selectedRTSLayersList->contains(rtsLayer))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto SelectedRTSLayersPlayerGameInput::upgrade() -> void{

    bool anyChanged = false;;
    




                        for (
    int32_t index = this->selectedRTSLayersList->size() -1;index >= 0; index--)
        {

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->selectedRTSLayersList->get(index));;
    

                        if(rtsLayer->isUpgradeable())
                        
                                    {
                                    
    Capital* capital = this->rtsPlayerLayerInterface->getCapital();;
    

    int32_t upgradeCost = rtsLayer->getUpgradeCost();;
    

                        if(upgradeCost <= capital->getTotalMoney())
                        
                                    {
                                    anyChanged= true;
    
this->rtsPlayerLayerInterface->add(UpgradeSound::getInstance());
    
rtsLayer->upgrade();
    
capital->removeMoney(upgradeCost);
    

                        if(!this->rtsPlayerLayerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance()->fireEvent(this->upgradeGameNotificationEvent);
    

                                    }
                                

                                    }
                                
                        else {
                            this->rtsPlayerLayerInterface->add(ErrorSound::getInstance());
    

                        if(!this->rtsPlayerLayerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance()->fireEvent(this->noMoneyGameNotificationEvent);
    

                                    }
                                

                        }
                            

                                    }
                                
}


                        if(anyChanged)
                        
                                    {
                                    
    RTSPlayerGameInput* rtsPlayerGameInput = (dynamic_cast<RTSPlayerGameInput*>(this->rtsPlayerLayerInterface->getPlayerGameInput()));;
    
rtsPlayerGameInput->updatePaintable();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto SelectedRTSLayersPlayerGameInput::downgrade() -> void{

    bool anyChanged = false;;
    




                        for (
    int32_t index = this->selectedRTSLayersList->size();--index >= 0; )
        {

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->selectedRTSLayersList->get(index));;
    

                        if(rtsLayer->isDowngradeable())
                        
                                    {
                                    anyChanged= true;
    
this->rtsPlayerLayerInterface->add(DowngradeSound::getInstance());
    

    int32_t downgradeCost = rtsLayer->getDowngradeCost();;
    
rtsLayer->downgrade();
    

    Capital* capital = this->rtsPlayerLayerInterface->getCapital();;
    
capital->addMoney(downgradeCost);
    

                        if(!this->rtsPlayerLayerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance()->fireEvent(this->downgradeGameNotificationEvent);
    

                                    }
                                

                                    }
                                
}


                        if(anyChanged)
                        
                                    {
                                    
    RTSPlayerGameInput* rtsPlayerGameInput = (dynamic_cast<RTSPlayerGameInput*>(this->rtsPlayerLayerInterface->getPlayerGameInput()));;
    
rtsPlayerGameInput->updatePaintable();
    

                                    }
                                
}


    auto SelectedRTSLayersPlayerGameInput::initInputProcessors() -> void{
this->inputProcessorArray[Canvas::KEY_NUM1]= new SelectedRTSLayersPlayerUpgradeGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_NUM3]= new SelectedRTSLayersPlayerDowngradeGameInputProcessor(this);
    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    auto SelectedRTSLayersPlayerGameInput::processInputKey(int32_t key) -> void{

                        if(this->selectedRTSLayersList != 
                                    nullptr
                                )
                        
                                    {
                                    this->inputProcessorArray[key]->processEvent(AllBinaryGameLayerManager::getNullInstance(), GameKeyEvent::NONE);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto SelectedRTSLayersPlayerGameInput::processInput(AllBinaryLayerManager* layerManager) -> void{

        try {
            
    int32_t size = this->list->size();;
    

    int32_t key = 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GameKeyEvent* gameKeyEvent = dynamic_cast<GameKeyEvent*>(this->list->get(index));;
    
key= gameKeyEvent->getKey();
    
this->processInputKey(key);
    
}


                        if(this->isSingleKeyProcessing)
                        
                                    {
                                    this->clear();
    

                                    }
                                
                        else {
                            this->update();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->gameInputStrings->PROCESS_INPUT, &e);
    
}

}


    auto SelectedRTSLayersPlayerGameInput::getSelectedBasicArrayList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedRTSLayersList;
    
}


    auto SelectedRTSLayersPlayerGameInput::addSelectedRTSLayer(RTSLayer* selectedLayer) -> void{
this->paintSelectedRTSLayersList= BasicArrayListUtil::getInstance()->getImmutableInstance();
    

                        if(selectedLayer == CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->deselectAll();
    
this->selectedRTSLayersList->clear();
    

                                    }
                                
                        else {
                            
                        if(!this->selectedRTSLayersList->contains(selectedLayer))
                        
                                    {
                                    this->selectedRTSLayersList->add(selectedLayer);
    

                                    }
                                

                        }
                            
this->paintSelectedRTSLayersList= this->selectedRTSLayersList;
    
}


    auto SelectedRTSLayersPlayerGameInput::setSelectedRTSLayer(CollidableDestroyableDamageableLayer* selectedLayer) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Selected Layer: ");
    

                        if(selectedLayer != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(selectedLayer->getName());
    

                                    }
                                
this->logUtil->putF(stringBuffer->toString(), this, "setSelectedRTSLayer");
    
this->paintSelectedRTSLayersList= BasicArrayListUtil::getInstance()->getImmutableInstance();
    
this->selectRTSLayerVisitorInterface->visit(selectedLayer);
    
this->deselectAll();
    

                        if(this->selectedRTSLayersList->size() > 0)
                        
                                    {
                                    this->getPreSelectedRTSLayersList()->clear();
    

    BasicArrayList* tempList = this->getPreSelectedRTSLayersList();;
    
this->preSelectedRTSLayersList= this->selectedRTSLayersList;
    
this->selectedRTSLayersList= tempList;
    
this->logUtil->putF((new StringMaker())->append("Preselected: ")->append(this->preSelectedRTSLayersList->toString())->toString(), this, "setSelectedRTSLayer");
    

                                    }
                                

                        if(selectedLayer != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->selectedRTSLayersList->add(selectedLayer);
    

                                    }
                                
this->paintSelectedRTSLayersList= this->selectedRTSLayersList;
    
}


    auto SelectedRTSLayersPlayerGameInput::getLastSelectedRtsLayer() -> CollidableDestroyableDamageableLayer*{

                        if(this->isAnyRTSLayerSelected())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<CollidableDestroyableDamageableLayer*>(this->selectedRTSLayersList->get(this->selectedRTSLayersList->size() -1));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer::getNullInstance();;
    

                        }
                            
}


    auto SelectedRTSLayersPlayerGameInput::selectAllPreselected() -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Select all Preselected: ");
    
stringBuffer->append(this->preSelectedRTSLayersList->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "selectAllPreselected");
    




                        for (
    int32_t index = this->preSelectedRTSLayersList->size() -1;index >= 0; index--)
        {

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->preSelectedRTSLayersList->get(index));;
    
rtsLayer->select();
    
}

}


    auto SelectedRTSLayersPlayerGameInput::deselectAllPreselected() -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Deselect all Preselected: ");
    
stringBuffer->append(this->preSelectedRTSLayersList->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "deselectAllPreselected");
    




                        for (
    int32_t index = this->preSelectedRTSLayersList->size() -1;index >= 0; index--)
        {

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->preSelectedRTSLayersList->get(index));;
    
rtsLayer->deselect();
    
}

this->preSelectedRTSLayersList->clear();
    
}


    auto SelectedRTSLayersPlayerGameInput::deselectAll() -> void{




                        for (
    int32_t index = this->selectedRTSLayersList->size() -1;index >= 0; index--)
        {

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->selectedRTSLayersList->get(index));;
    
rtsLayer->deselect();
    
}

}


    auto SelectedRTSLayersPlayerGameInput::isAnyRTSLayerSelected() -> bool{

                        if(this->selectedRTSLayersList->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto SelectedRTSLayersPlayerGameInput::getPaintSelectedRTSLayersList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paintSelectedRTSLayersList;
    
}


    auto SelectedRTSLayersPlayerGameInput::getPreSelectedRTSLayersList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->preSelectedRTSLayersList;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERGAMEINPUT_CPP
