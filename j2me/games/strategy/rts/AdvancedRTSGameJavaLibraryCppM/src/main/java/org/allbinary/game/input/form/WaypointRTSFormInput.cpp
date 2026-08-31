
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/game/input/RTSPlayerGameInput.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/AdvancedRTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/RTSLayerUtil.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>

      
#include <org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/NullRTSLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
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

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSFormInput.h"
#include "PrimaryWaypointHelper.h"

class WaypointRTSFormInput: public RTSFormInput {
        

    private: const WAYPOINT_EVENT: RTSLayerEvent = new RTSLayerEvent(NullRTSLayer.NULL_RTS_LAYER);

    const dragToSpotGameNotificationEvent: GameNotificationEvent;

    const spotTakenGameNotificationEvent: GameNotificationEvent;

    const buildingCollisionGameNotificationEvent: GameNotificationEvent;

    const roadCollisionGameNotificationEvent: GameNotificationEvent;

    const newWaypointGameNotificationEvent: GameNotificationEvent;

    const noMoneyGameNotificationEvent: GameNotificationEvent;

    private: isPrimaryWaypointCreator: bool;

    private: stickyAssociatedRtsLayer: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

public constructor (std::vector<Group> groupInterface, bool isPrimaryWaypointCreator){
            super(groupInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.isPrimaryWaypointCreator= isPrimaryWaypointCreator;
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;;
    
this.dragToSpotGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.DRAG_TO_SPOT, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.WHITE, BooleanFactory.getInstance()!.FALSE);
    
this.spotTakenGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.SPOT_TAKEN, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.WHITE, BooleanFactory.getInstance()!.FALSE);
    
this.buildingCollisionGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.BUILDING_COLLISION, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.WHITE, BooleanFactory.getInstance()!.FALSE);
    
this.roadCollisionGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.ROAD_COLLISION, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.WHITE, BooleanFactory.getInstance()!.FALSE);
    
this.newWaypointGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.NEW_WAYPOINT, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.WHITE, BooleanFactory.getInstance()!.FALSE);
    
this.noMoneyGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.NO_MONEY, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.WHITE, BooleanFactory.getInstance()!.FALSE);
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = allBinaryGameLayerManager as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    
this.dragToSpotGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.spotTakenGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.buildingCollisionGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.roadCollisionGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.newWaypointGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.noMoneyGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
}


                //@Throws(Exception.constructor)
            
    public processAtPoint(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point){
super.process(layerManager);
    

                        if(this.isStickyItemSelected() || associatedRtsLayer == CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    
                        if(this.isStickyItemSelected() && associatedRtsLayer == CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    
    geographicMapCompositeInterface: GeographicMapCompositeInterface = layerManager as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    allBinaryTiledLayer: AllBinaryTiledLayer = geographicMapInterface!.getAllBinaryTiledLayer()!;;
    

    x: int32_t = point.getX() +allBinaryTiledLayer!.getXP();;
    

    y: int32_t = point.getY() +allBinaryTiledLayer!.getYP();;
    

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapInterface!.getCellPositionAtXY(x, y)!;;
    
this.processCellPosition(rtsPlayerLayerInterface, layerManager, geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
                        if(!rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.dragToSpotGameNotificationEvent);
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            
                        if(!rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.spotTakenGameNotificationEvent);
    

                                    }
                                

                        }
                            
}


                //@Throws(Exception.constructor)
            
    processCellPosition(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GeographicMapCellPosition geographicMapCellPosition){

    itemIndex: int32_t = this.getSelectedStickyItemIndex()!;;
    

                        if(this.newUnconstructedRTSLayerInterfaceArray[itemIndex] == CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    this.newUnconstructedRTSLayerInterfaceArray[itemIndex]= this.getInstance(layerManager, this.getSelectedStickyItem(), geographicMapCellPosition);
    

                                    }
                                
                        else {
                            
    cellPoint: GPoint = geographicMapCellPosition!.getPoint()!;;
    

    rtsLayer: RTSLayer = this.newUnconstructedRTSLayerInterfaceArray[itemIndex]! as RTSLayer;;
    
rtsLayer!.setPosition(cellPoint!.getX(), cellPoint!.getY(), rtsLayer!.getZP());
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = rtsLayer!.allBinaryGameLayerManagerP as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    
rtsLayer!.geographicMapCellPositionAreaBase!.update(geographicMapInterface);
    

                        }
                            
this.attemptBuild(rtsPlayerLayerInterface, layerManager, this.newUnconstructedRTSLayerInterfaceArray[itemIndex]! as RTSLayer, itemIndex);
    
}


                //@Throws(Exception.constructor)
            
    public processStickyGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index){
this.logUtil!.putF("Set Sticking Item: " +item, this, "processSticky");
    
this.setSelectedStickyItem(item);
    
this.setSelectedStickyItemIndex(index);
    
this.setStickyItemSelected(true);
    
this.stickyAssociatedRtsLayer= associatedRtsLayer as RTSLayer;
    
this.getHashtable()!.put(Layer.ID, associatedRtsLayer);
    
}


                //@Throws(Exception.constructor)
            
    bool attemptBuild(RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, RTSLayer layerInterface, int32_t itemIndex){
this.logUtil!.putF("Layer: " +layerInterface, this, "attemptBuild");
    

                        if(layerInterface == 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.put("Layer was null", this, "attemptBuild", new Exception());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    geographicMapCellPositionArea: GeographicMapCellPositionAreaBase = layerInterface!.geographicMapCellPositionAreaBase;;
    

    list: BasicArrayList = geographicMapCellPositionArea!.getOccupyingGeographicMapCellPositionList()!;;
    

                        if(DropCellPositionHistory.getInstance()!.anyCellPositionWithDrop(list) || WaypointCellPositionHistory.getInstance()!.anyCellPositionWithDrop(list))
                        
                                    {
                                    rtsPlayerLayerInterface!.add(ErrorSound.getInstance());
    

                        if(!rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.buildingCollisionGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    geographicMapCompositeInterface: GeographicMapCompositeInterface = layerManager as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    raceTrackGeographicMapCellTypeFactory: RaceTrackGeographicMapCellTypeFactory = geographicMapInterface!.getGeographicMapCellTypeFactory() as RaceTrackGeographicMapCellTypeFactory;;
    

    geographicMapCellType: GeographicMapCellType;;
    




                        for (
    index: int32_t = list.size()!;--index >= 0; )
        {
geographicMapCellType= geographicMapInterface!.getCellTypeAt(list.get(index) as GeographicMapCellPosition);
    

                        if(raceTrackGeographicMapCellTypeFactory!.isPath(geographicMapCellType))
                        
                                    {
                                    rtsPlayerLayerInterface!.add(ErrorSound.getInstance());
    

                        if(!rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.roadCollisionGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}


    cost: int32_t = layerInterface!.getCost()!;;
    

    capital: Capital = rtsPlayerLayerInterface!.getCapital()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Trying to Build: ");
    
stringBuffer!.append(layerInterface!.getName());
    
stringBuffer!.append(" for: $");
    
stringBuffer!.appendint(cost);
    
stringBuffer!.append(" with ");
    
stringBuffer!.appendint(capital.getTotalMoney());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "attemptBuild");
    

                        if(cost <= capital.getTotalMoney())
                        
                                    {
                                    layerInterface!.construct(rtsPlayerLayerInterface);
    
this.newUnconstructedRTSLayerInterfaceArray[itemIndex]= CollidableDestroyableDamageableLayer.getNullInstance();
    
capital.removeMoney(cost);
    
WaypointCellPositionHistory.getInstance()!.addList(list, layerInterface);
    

    geographicMapCellPosition: GeographicMapCellPosition = geographicMapInterface!.getCellPositionAtXY(layerInterface!.getXP(), layerInterface!.getYP())!;;
    

    waypointLayer: WaypointLayer = layerInterface as WaypointLayer;;
    
this.addWayPoint(waypointLayer);
    

    rtsPlayerGameInput: RTSPlayerGameInput = rtsPlayerLayerInterface!.getPlayerGameInput() as RTSPlayerGameInput;;
    
rtsPlayerGameInput!.setSelectedRTSLayer(layerInterface, geographicMapCellPosition);
    

    advancedRTSPlayerLayerInterface: AdvancedRTSPlayerLayerInterface = rtsPlayerLayerInterface as AdvancedRTSPlayerLayerInterface;;
    
advancedRTSPlayerLayerInterface!.getAdvancedPlayerOwnedRTSLayers()!.addWaypoint(layerInterface);
    
layerManager!.append(layerInterface);
    

    waypointAvancedRTSGameLayer: AdvancedRTSGameLayer = waypointLayer as AdvancedRTSGameLayer;;
    
rtsPlayerLayerInterface!.add(waypointAvancedRTSGameLayer!.getWaypointBehavior()!.getWaypoint()!.getSound());
    

                        if(!rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.newWaypointGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            rtsPlayerLayerInterface!.add(ErrorSound.getInstance());
    

                        if(!rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.noMoneyGameNotificationEvent);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    addWayPoint(WaypointLayer layerInterface){

    stickyAssociatedAdvandedRtsLayer: AdvancedRTSGameLayer = this.stickyAssociatedRtsLayer as AdvancedRTSGameLayer;;
    

    list: BasicArrayList = stickyAssociatedAdvandedRtsLayer!.getWaypointBehavior()!.getOwnedWaypointList()!;;
    
RTSLayerUtil.getInstance()!.destroyAndClear(list);
    
list.add(layerInterface);
    

                        if(this.isPrimaryWaypointCreator)
                        
                                    {
                                    PrimaryWaypointHelper.getInstance()!.setWaypointLayer(layerInterface);
    

                                    }
                                
this.WAYPOINT_EVENT.setRtsLayer(layerInterface);
    
WaypointEventHandlerFactory.getInstance(layerInterface!.getGroupInterface()[0]!)!.fireEvent(this.WAYPOINT_EVENT);
    
}


};

            

