
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/input/RTSPlayerGameInput.h>

      
#include <org/allbinary/game/layer/DemoLockedWithCostLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/media/audio/BuildingSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSFormInput.h"

class BuildingRTSFormInput: public RTSFormInput {

    private: bool isUnitProducer;

    private: GameNotificationEvent buildOnPathGameNotificationEvent;

    private: GameNotificationEvent spotTakenGameNotificationEvent;

    private: GameNotificationEvent selectBuildSpotGameNotificationEvent;

    private: GameNotificationEvent roadCollisionGameNotificationEvent;

    private: GameNotificationEvent noMoneyGameNotificationEvent;

    private: GameNotificationEvent buildingCollisionGameNotificationEvent;

    private: GameNotificationEvent structureToCloseCollisionGameNotificationEvent;

    private: GameNotificationEvent buildingGameNotificationEvent;

    private: GameNotificationEvent mapEdgeGameNotificationEvent;

    private: const DropCellPositionHistory dropCellPositionHistory = DropCellPositionHistory::getInstance();

public: BuildingRTSFormInput(std::vector<Group> groupInterface, bool isUnitProducer) : RTSFormInput(groupInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->isUnitProducer= isUnitProducer;
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();;
    
this->buildOnPathGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().BUILD_ON_PATH, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->spotTakenGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().SPOT_TAKEN, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->selectBuildSpotGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().SELECT_BUILD_SPOT, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->roadCollisionGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().ROAD_COLLISION, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->noMoneyGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().NO_MONEY, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->buildingCollisionGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().BUILDING_COLLISION, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->structureToCloseCollisionGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().STRUCTURE_TO_CLOSE, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->buildingGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().BUILDING, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->mapEdgeGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().MAP_EDGE, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface geographicMapCompositeInterface = allBinaryGameLayerManager;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
this->buildOnPathGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->spotTakenGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->selectBuildSpotGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->roadCollisionGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->noMoneyGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->buildingCollisionGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->structureToCloseCollisionGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->buildingGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->mapEdgeGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t itemIndex){
super.process(layerManager);
    
this->buildFromMotionInput(rtsPlayerLayerInterface, layerManager, item, itemIndex);
    
}


    public: bool isPositionBlocked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dropCellPositionHistory.isCellPositionWithDrop(this->getSelectedGeographicCellPosition());;
    
}


    private: bool isDemoLocked(ABCustomItem item){

    LayerInterfaceFactoryImageItem factoryItem = item;;
    

    DemoLockedWithCostLayerInterfaceFactoryInterface layerInterfaceFactoryInterface = factoryItem.getLayerInterfaceFactoryInterface();;
    

                        if(LockedUtil::getInstance().isLocked() && layerInterfaceFactoryInterface.isDemoLocked())
                        
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
            
    public: void buildFromMotionInput(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t itemIndex){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.START, this, "buildFromMotionInput");
    

                        if(layerManager == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                

    GeographicMapCompositeInterface geographicMapCompositeInterface = layerManager;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    

                        if(this->isDemoLocked(item))
                        
                                    {
                                    rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    
LockedFeatureNotificationUtil::getInstance().fireWithColor(geographicMapInterface.getForegroundBasicColor());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    GeographicMapCellPosition geographicMapCellPosition = this->getSelectedGeographicCellPosition();;
    

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
                        if(!this->isPositionBlocked())
                        
                                    {
                                    
    GeographicMapCellType geographicMapCellType = geographicMapInterface.getCellTypeAt(geographicMapCellPosition);;
    

    RaceTrackGeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = geographicMapInterface.getGeographicMapCellTypeFactory();;
    

                        if(!raceTrackGeographicMapCellTypeFactory.isPath(geographicMapCellType))
                        
                                    {
                                    
                        if(this->newUnconstructedRTSLayerInterfaceArray[itemIndex] == CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->newUnconstructedRTSLayerInterfaceArray[itemIndex]= this->getInstance(layerManager, item, geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
    RTSLayer rtsLayer = this->newUnconstructedRTSLayerInterfaceArray[itemIndex];;
    

    GPoint cellPoint = geographicMapCellPosition.getPoint();;
    
rtsLayer.setPosition(cellPoint.getX(), cellPoint.getY(), cellPoint.getZ());
    
rtsLayer.geographicMapCellPositionAreaBase.update(geographicMapInterface);
    

                        }
                            

    RTSLayer rtsLayer = this->newUnconstructedRTSLayerInterfaceArray[itemIndex];;
    
this->attemptBuild(rtsPlayerLayerInterface, layerManager, rtsLayer, itemIndex);
    

                                    }
                                
                        else {
                            rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->buildOnPathGameNotificationEvent);
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->spotTakenGameNotificationEvent);
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->selectBuildSpotGameNotificationEvent);
    

                                    }
                                

                        }
                            
}


                //@Throws(Exception.constructor)
            
    protected: bool attemptBuild(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, RTSLayer layerInterface, int32_t itemIndex){
this->logUtil.putF(StringMaker().append("Layer: ").append(StringUtil::getInstance().toString(layerInterface)).toString(), this, "attemptBuild");
    

    GeographicMapCellPositionAreaBase geographicMapCellPositionArea = layerInterface.geographicMapCellPositionAreaBase;;
    

    BasicArrayList occupyList = geographicMapCellPositionArea.getOccupyingGeographicMapCellPositionList();;
    

                        if(!this->isBuildAttemptValid(rtsPlayerLayerInterface, layerInterface))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    GeographicMapCellType geographicMapCellType;;
    




                        for (
    int32_t index = occupyList.size() -1;index >= 0; index--)
        {

    GeographicMapCompositeInterface geographicMapCompositeInterface = layerManager;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
geographicMapCellType= geographicMapInterface.getCellTypeAt(occupyList.get(index));
    

    RaceTrackGeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = geographicMapInterface.getGeographicMapCellTypeFactory();;
    

                        if(raceTrackGeographicMapCellTypeFactory.isPath(geographicMapCellType))
                        
                                    {
                                    rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->roadCollisionGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}


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
    
capital.removeMoney(cost);
    
this->add(rtsPlayerLayerInterface, layerManager, layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->noMoneyGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    protected: bool isBuildAttemptValid(RTSPlayerLayerInterface rtsPlayerLayerInterface, RTSLayer layerInterface){

    GeographicMapCellPositionAreaBase geographicMapCellPositionArea = layerInterface.geographicMapCellPositionAreaBase;;
    

    BasicArrayList occupyList = geographicMapCellPositionArea.getOccupyingGeographicMapCellPositionList();;
    

                        if(this->dropCellPositionHistory.anyCellPositionWithDrop(occupyList))
                        
                                    {
                                    rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->buildingCollisionGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(this->isUnitProducer && this->dropCellPositionHistory.anyCellPositionWithDrop(geographicMapCellPositionArea.getSurroundingGeographicMapCellPositionList()))
                        
                                    {
                                    rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->structureToCloseCollisionGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            
                        if(this->isSurroundingCellsOffMap(layerInterface))
                        
                                    {
                                    rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->mapEdgeGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    protected: void add(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, RTSLayer layerInterface){

    GeographicMapCellPositionAreaBase geographicMapCellPositionArea = layerInterface.geographicMapCellPositionAreaBase;;
    

    BasicArrayList occupyList = geographicMapCellPositionArea.getOccupyingGeographicMapCellPositionList();;
    
this->dropCellPositionHistory.addAll(occupyList, layerInterface);
    

    RTSPlayerGameInput rtsPlayerGameInput = rtsPlayerLayerInterface.getPlayerGameInput();;
    
rtsPlayerGameInput.setSelectedRTSLayer(layerInterface, this->getSelectedGeographicCellPosition());
    
layerManager.append(layerInterface);
    
rtsPlayerLayerInterface.add(BuildingSound::getInstance());
    

                        if(!rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->buildingGameNotificationEvent);
    

                                    }
                                
}


    private: bool isSurroundingCellsOffMap(RTSLayer layerInterface){

    GeographicMapCellPositionAreaBase geographicMapCellPositionArea = layerInterface.geographicMapCellPositionAreaBase;;
    

    BasicArrayList occupyList = geographicMapCellPositionArea.getOccupyingGeographicMapCellPositionList();;
    

    BasicArrayList surroundList = geographicMapCellPositionArea.getSurroundingGeographicMapCellPositionList();;
    

    int32_t occupySize = occupyList.size();;
    

    int32_t surroundSize = surroundList.size();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("occupySize: ");
    
stringBuffer.appendint(occupySize);
    
stringBuffer.append(" surroundSize: ");
    
stringBuffer.appendint(surroundSize);
    
stringBuffer.append(" surroundList: ");
    
stringBuffer.append(StringUtil::getInstance().toString(surroundList));
    
this->logUtil.putF(stringBuffer.toString(), this, "isSurroundingCellsOffMap");
    

    bool isSurroundOffMap = false;;
    

                        if(occupySize == 1 && surroundSize != 8)
                        
                                    {
                                    isSurroundOffMap= true;
    

                                    }
                                
                             else 
                        if(occupySize == 4 && surroundSize != 12)
                        
                                    {
                                    isSurroundOffMap= true;
    

                                    }
                                

                        if(occupySize == 0 || isSurroundOffMap)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

