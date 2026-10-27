
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/UnitRTSFormInput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/game/layer/AdvancedPlayerOwnedRTSLayers.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/game/layer/unit/UnitLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WorkWaypoint.h>

      
#include <org/allbinary/media/audio/BuildingSound.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/input/form/AssignWaypointsUtil.h"
#include "org/allbinary/game/input/form/PlayersSingletonFactory.h"

int32_t UnitRTSFormInput::DECAL_ID = SmallIntegerSingletonFactory::getInstance()->getAt(23);

UnitRTSFormInput::UnitRTSFormInput(std::vector<Group*> groupInterface) : RTSFormInput(groupInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();;
    
this->noMoneyGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings::getInstance()->NO_MONEY, smallIntegerSingletonFactory->getAt(2), basicColorFactory->WHITE, BooleanFactory::getInstance()->FALSE);
    
this->newUnitGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings::getInstance()->NEW_UNIT, smallIntegerSingletonFactory->getAt(2), basicColorFactory->WHITE, BooleanFactory::getInstance()->FALSE);
    
this->getHashtable()->put(WorkWaypoint::ID, smallIntegerSingletonFactory->getAt(50));
    
}


                //@Throws(Exception.constructor)
            
    auto UnitRTSFormInput::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
RTSFormInput::setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(allBinaryGameLayerManager);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
this->noMoneyGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
this->newUnitGameNotificationEvent->setBasicColorP(geographicMapInterface->getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    auto UnitRTSFormInput::processGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex) -> void{
RTSFormInput::process(layerManager);
    

    RTSLayer* associatedRtsLayer2 = dynamic_cast<RTSLayer*>(associatedRtsLayer);;
    

    GeographicMapCellPositionAreaBase* geographicMapCellPositionArea = associatedRtsLayer2->geographicMapCellPositionAreaBase;;
    

    GeographicMapCellPosition* geographicMapCellPosition = geographicMapCellPositionArea->getNextSurroundingGeographicMapCellPosition();;
    
this->getHashtable()->put(Layer::ID, associatedRtsLayer);
    
this->getHashtable()->put(UnitRTSFormInput::DECAL_ID, (rtsPlayerLayerInterface)).getDecalBasicColor());
    

                        if(this->newUnconstructedRTSLayerInterfaceArray[itemIndex] == CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->newUnconstructedRTSLayerInterfaceArray[itemIndex]= this->getInstance(layerManager, item, geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
    GPoint* cellPoint = geographicMapCellPosition->getPoint();;
    

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->newUnconstructedRTSLayerInterfaceArray[itemIndex]);;
    
rtsLayer->setPosition(cellPoint->getX(), cellPoint->getY(), rtsLayer->getZP());
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(rtsLayer->allBinaryGameLayerManagerP);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    
rtsLayer->geographicMapCellPositionAreaBase->update(geographicMapInterface);
    

                        }
                            

    GPoint* cellPoint = geographicMapCellPosition->getMidPoint();;
    

    RTSLayer* rtsLayer = dynamic_cast<RTSLayer*>(this->newUnconstructedRTSLayerInterfaceArray[itemIndex]);;
    
rtsLayer->setPosition(cellPoint->getX() -rtsLayer->getHalfWidth(), cellPoint->getY() -rtsLayer->getHalfHeight(), rtsLayer->getZP());
    
this->attemptBuild(associatedRtsLayer2, rtsPlayerLayerInterface, layerManager, dynamic_cast<RTSLayer*>(rtsLayer), itemIndex);
    
}


                //@Throws(Exception.constructor)
            
    auto UnitRTSFormInput::attemptBuild(RTSLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, RTSLayer* layerInterface, int32_t itemIndex) -> void{

    int32_t cost = layerInterface->getCost();;
    

    Capital* capital = rtsPlayerLayerInterface->getCapital();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Trying to Build: ");
    
stringBuffer->append(layerInterface->getName());
    
stringBuffer->append(" for: $");
    
stringBuffer->appendint(cost);
    
stringBuffer->append(" with ");
    
stringBuffer->appendint(capital->getTotalMoney());
    
this->logUtil->putF(stringBuffer->toString(), this, "attemptBuild");
    

                        if(cost <= capital->getTotalMoney())
                        
                                    {
                                    layerInterface->construct(rtsPlayerLayerInterface);
    
this->newUnconstructedRTSLayerInterfaceArray[itemIndex]= CollidableDestroyableDamageableLayer::getNullInstance();
    
rtsPlayerLayerInterface->add(BuildingSound::getInstance());
    
capital->removeMoney(cost);
    
AssignWaypointsUtil::getInstance()->set(dynamic_cast<UnitLayer*>(layerInterface), dynamic_cast<AdvancedRTSGameLayer*>(associatedRtsLayer));
    
layerManager->appendAt(layerInterface, PlayersSingletonFactory::total);
    

    AdvancedRTSPlayerLayerInterface* advancedRTSPlayerLayerInterface = dynamic_cast<AdvancedRTSPlayerLayerInterface*>(rtsPlayerLayerInterface);;
    

    AdvancedPlayerOwnedRTSLayers* advancedPlayerOwnedRTSLayers = advancedRTSPlayerLayerInterface->getAdvancedPlayerOwnedRTSLayers();;
    
advancedPlayerOwnedRTSLayers->addUnit(layerInterface);
    

                        if(!rtsPlayerLayerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance()->fireEvent(this->newUnitGameNotificationEvent);
    

                                    }
                                

                                    }
                                
                        else {
                            rtsPlayerLayerInterface->add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance()->fireEvent(this->noMoneyGameNotificationEvent);
    

                                    }
                                

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_UNITRTSFORMINPUT_CPP
