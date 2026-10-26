
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
        



            #include <vector>
        
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
        #include "RTSFormInput.h"
#include "AssignWaypointsUtil.h"
#include "PlayersSingletonFactory.h"

class UnitRTSFormInput: public RTSFormInput {

    public: static const Integer DECAL_ID = SmallIntegerSingletonFactory::getInstance().getAt(23);

    protected: GameNotificationEvent noMoneyGameNotificationEvent;

    protected: GameNotificationEvent newUnitGameNotificationEvent;

public: UnitRTSFormInput(std::vector<Group> groupInterface) : RTSFormInput(groupInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();;
    
this->noMoneyGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().NO_MONEY, smallIntegerSingletonFactory.getAt(2), basicColorFactory.WHITE, BooleanFactory::getInstance().FALSE);
    
this->newUnitGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().NEW_UNIT, smallIntegerSingletonFactory.getAt(2), basicColorFactory.WHITE, BooleanFactory::getInstance().FALSE);
    
this->getHashtable().put(WorkWaypoint::ID, smallIntegerSingletonFactory.getAt(50));
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface geographicMapCompositeInterface = allBinaryGameLayerManager;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
this->noMoneyGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->newUnitGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t itemIndex){
super.process(layerManager);
    

    RTSLayer associatedRtsLayer2 = associatedRtsLayer;;
    

    GeographicMapCellPositionAreaBase geographicMapCellPositionArea = associatedRtsLayer2.geographicMapCellPositionAreaBase;;
    

    GeographicMapCellPosition geographicMapCellPosition = geographicMapCellPositionArea.getNextSurroundingGeographicMapCellPosition();;
    
this->getHashtable().put(Layer::ID, associatedRtsLayer);
    
this->getHashtable().put(UnitRTSFormInput::DECAL_ID, (rtsPlayerLayerInterface).getDecalBasicColor());
    

                        if(this->newUnconstructedRTSLayerInterfaceArray[itemIndex] == CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->newUnconstructedRTSLayerInterfaceArray[itemIndex]= this->getInstance(layerManager, item, geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
    GPoint cellPoint = geographicMapCellPosition.getPoint();;
    

    RTSLayer rtsLayer = this->newUnconstructedRTSLayerInterfaceArray[itemIndex];;
    
rtsLayer.setPosition(cellPoint.getX(), cellPoint.getY(), rtsLayer.getZP());
    

    GeographicMapCompositeInterface geographicMapCompositeInterface = rtsLayer.allBinaryGameLayerManagerP;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
rtsLayer.geographicMapCellPositionAreaBase.update(geographicMapInterface);
    

                        }
                            

    GPoint cellPoint = geographicMapCellPosition.getMidPoint();;
    

    RTSLayer rtsLayer = this->newUnconstructedRTSLayerInterfaceArray[itemIndex];;
    
rtsLayer.setPosition(cellPoint.getX() -rtsLayer.getHalfWidth(), cellPoint.getY() -rtsLayer.getHalfHeight(), rtsLayer.getZP());
    
this->attemptBuild(associatedRtsLayer2, rtsPlayerLayerInterface, layerManager, rtsLayer, itemIndex);
    
}


                //@Throws(Exception.constructor)
            
    private: void attemptBuild(RTSLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, RTSLayer layerInterface, int32_t itemIndex){

    int32_t cost = layerInterface.getCost();;
    

    Capital capital = rtsPlayerLayerInterface.getCapital();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Trying to Build: ");
    
stringBuffer.append(layerInterface.getName());
    
stringBuffer.append(" for: $");
    
stringBuffer.appendint(cost);
    
stringBuffer.append(" with ");
    
stringBuffer.appendint(capital.getTotalMoney());
    
this->logUtil.putF(stringBuffer.toString(), this, "attemptBuild");
    

                        if(cost <= capital.getTotalMoney())
                        
                                    {
                                    layerInterface.construct(rtsPlayerLayerInterface);
    
this->newUnconstructedRTSLayerInterfaceArray[itemIndex]= CollidableDestroyableDamageableLayer::getNullInstance();
    
rtsPlayerLayerInterface.add(BuildingSound::getInstance());
    
capital.removeMoney(cost);
    
AssignWaypointsUtil::getInstance().set(layerInterface, associatedRtsLayer);
    
layerManager.appendAt(layerInterface, PlayersSingletonFactory::total);
    

    AdvancedRTSPlayerLayerInterface advancedRTSPlayerLayerInterface = rtsPlayerLayerInterface;;
    

    AdvancedPlayerOwnedRTSLayers advancedPlayerOwnedRTSLayers = advancedRTSPlayerLayerInterface.getAdvancedPlayerOwnedRTSLayers();;
    
advancedPlayerOwnedRTSLayers.addUnit(layerInterface);
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->newUnitGameNotificationEvent);
    

                                    }
                                

                                    }
                                
                        else {
                            rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->noMoneyGameNotificationEvent);
    

                                    }
                                

                        }
                            
}


};

            

