
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
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/layer/SteeringVisitor.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/MultipassWaypointPathRunnable.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/WaypointPathRunnable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointPathRunnableBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointBase.h>

      
#include <org/allbinary/game/tracking/TrackingEventHandler.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/math/LayerDistanceUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/thread/PathFindingThreadPool.h>

      
#include <org/allbinary/thread/ThreadPool.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UnitWaypointBehavior.h"
#include "UnitWaypointStrings.h"
#include "UnitLayer.h"
//#include "BuildingSteeringVisitor.h"

class UnitWaypointBehavior2: public UnitWaypointBehavior {

    private: static const BasicArrayList runningWaypointPathList = BasicArrayListD();

    private: static const std::string TARGET_DISTANCE = "Target Distance";

    private: static const std::string TARGET_LAYER = "Target Layer";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const UnitWaypointStrings unitWaypointStrings = UnitWaypointStrings::getInstance();

    private: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    private: const LayerDistanceUtil layerDistanceUtil = LayerDistanceUtil::getInstance();

    private: const ThreadPool pathFindingThreadPool = PathFindingThreadPool::getInstance();

    private: TimeDelayHelper progressTimeDelayHelper;

    private: BasicArrayList wanderPathsList;

    private: WaypointPathRunnableBase waypointPathRunnable;

    private: int32_t sensorRange = 0;

    private: int32_t closeRange = 0;

    private: GeographicMapCellPosition nextUnvisitedPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition afterNextUnvisitedPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: bool waitingOnTargetPath= false;

    private: bool waitingOnWaypointPath= false;

    private: CollidableDestroyableDamageableLayer targetWithoutCachedPathLayerInterface = CollidableDestroyableDamageableLayer::getNullInstance();

public: UnitWaypointBehavior2(UnitLayer ownerAdvancedRTSGameLayer, AdvancedRTSGameLayer fakeWaypoint){
            super(ownerAdvancedRTSGameLayer, fakeWaypoint);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->progressTimeDelayHelper= TimeDelayHelper(5000);
    
this->wanderPathsList= BasicArrayListD();
    

    Features features = Features::getInstance();;
    
this->waypointPathRunnable= J2MEUtil::isHTML()
                        ?       
                                MultipassWaypointPathRunnable()
                                :

                            WaypointPathRunnable();

    ;
    
}


    protected: void initRange(int32_t weaponRange){
super.initRange(weaponRange);
    
this->closeRange= weaponRange;
    
this->sensorRange= weaponRange *4;
    
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.initRange(this->associatedAdvancedRTSGameLayer, this->closeRange, this->sensorRange);
    
}


    public: GeographicMapCellPosition getNextUnvisitedPathGeographicMapCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nextUnvisitedPathGeographicMapCellPosition;
    
}


    public: bool isRunning(){

                        if(this->waypointPathRunnable.isRunning())
                        
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
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager){

                        if(this->waypointPathRunnable.isRunning())
                        
                                    {
                                    
                        if(this->waypointPathsListP != UnitWaypointBehavior2::runningWaypointPathList)
                        
                                    {
                                    this->waypointPathRunnable.setRunning(false);
    

                        if(this->waitingOnTargetPath)
                        
                                    {
                                    this->setTargetPath();
    

                                    }
                                
                             else 
                        if(this->waitingOnWaypointPath)
                        
                                    {
                                    this->setWaypointPath(this->waypointPathRunnable.getTargetLayer() as AdvancedRTSGameLayer);
    

                                    }
                                
                        else {
                            


                            throw Exception("Should not happen");
                    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                        }
                            

                                    }
                                
this->processTargetList();
    

                        if(!this->waypointPathRunnable.isRunning())
                        
                                    {
                                    this->processWaypoint();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                        }
                            

                        if(!this->waypointPathRunnable.isRunning())
                        
                                    {
                                    this->processTargeting();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                        }
                            

                        if(!this->waypointPathRunnable.isRunning())
                        
                                    {
                                    this->teleportIfNoProgress();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void onEnemyMovement(AdvancedRTSGameLayer layerInterface){

    int32_t anotherTargetDistance = this->layerDistanceUtil.getDistance(this->associatedAdvancedRTSGameLayer, layerInterface);;
    

                        if(layerInterface == this->currentTargetLayerInterfaceP)
                        
                                    {
                                    this->setCurrentTargetDistance(anotherTargetDistance);
    

                                    }
                                
                        else {
                            this->processPossibleTarget(layerInterface, anotherTargetDistance);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void processPossibleTarget(AdvancedRTSGameLayer layerInterface, int32_t anotherTargetDistance){

    bool isShorterThanCurrentTargetDistance = this->getCurrentTargetDistance() > anotherTargetDistance;;
    

    bool isCurrentTargetDestroyed = this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance() && this->currentTargetLayerInterfaceP.isDestroyed();;
    
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processPossibleTarget(this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance, isShorterThanCurrentTargetDistance, isCurrentTargetDestroyed);
    

                        if(this->isWaypointListEmptyOrOnlyTargets() && this->isInSensorRange(layerInterface, anotherTargetDistance) && (isShorterThanCurrentTargetDistance || isCurrentTargetDestroyed))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processSetTarget(this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance);
    
this->setTarget(layerInterface, anotherTargetDistance);
    

                                    }
                                
                             else 
                        if(this->isCloseRange(layerInterface, anotherTargetDistance) && (isShorterThanCurrentTargetDistance || isCurrentTargetDestroyed))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processPossibleTargetCloser(this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance);
    
this->setTarget(layerInterface, anotherTargetDistance);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void teleportIfNoProgress(){

                        if(this->isTrackingWaypoint() || this->associatedAdvancedRTSGameLayer.getParentLayer().isDestroyed())
                        
                                    {
                                    
                        if(this->progressTimeDelayHelper.isTimeTNT() && this->nextUnvisitedPathGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.teleportTo(this->nextUnvisitedPathGeographicMapCellPosition);
    

                                    }
                                

                        if(this->getCompleteTimeDelayHelper().isTimeTNT())
                        
                                    {
                                    
    GeographicMapCellPosition geographicMapCellPosition = this->currentGeographicMapCellHistoryP.getTracked().get(this->currentGeographicMapCellHistoryP.getSize() -1) as GeographicMapCellPosition;;
    
this->associatedAdvancedRTSGameLayer.teleportTo(geographicMapCellPosition);
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void setTarget(AdvancedRTSGameLayer layerInterface, int32_t anotherTargetDistance){
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.setTarget(this->associatedAdvancedRTSGameLayer, this, layerInterface, anotherTargetDistance);
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.TARGET, BasicColorFactory::getInstance().GREEN);
    
this->associatedAdvancedRTSGameLayer.setLoad(0);
    
this->setCurrentTargetDistance(anotherTargetDistance);
    
this->setCurrentTargetLayerInterface(layerInterface);
    
this->setTrackingWaypoint(false);
    
this->targetList.clear();
    

                        if(!this->isCloseRange(layerInterface, anotherTargetDistance) && this->canInsertWaypoint(0, this->currentTargetLayerInterfaceP))
                        
                                    {
                                    
    GeographicMapCellPosition geographicMapCellPosition = this->associatedAdvancedRTSGameLayer.getCurrentGeographicMapCellPosition();;
    

    PathFindingLayerInterface pathFindingLayerInterface = (this->currentTargetLayerInterfaceP as PathFindingLayerInterface);;
    

    WaypointBase waypoint = pathFindingLayerInterface.getWaypointBehavior().getWaypoint();;
    

    BasicArrayList list = waypoint.getPathsListFromCacheOnly(geographicMapCellPosition);;
    
this->setWaypointPathsList(list);
    

                        if(this->waypointPathsListP == 
                                    nullptr
                                )
                        
                                    {
                                    this->targetWithoutCachedPathLayerInterface= this->currentTargetLayerInterfaceP;
    

                                    }
                                
                             else 
                        if(this->waypointPathsListP.size() != 0)
                        
                                    {
                                    this->setTargetPath();
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void setTargetPath(){

                        if(this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    
                        if(this->currentTargetLayerInterfaceP.isDestroyed())
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.setTargetPath(this->associatedAdvancedRTSGameLayer);
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.KILL, this->basicColorFactory.ORANGE);
    
this->clearTarget();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(this->currentTargetLayerInterfaceP == this->waypointPathRunnable.getTargetLayer())
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.setTargetPathIgnoreNewPath(this->associatedAdvancedRTSGameLayer, this);
    
this->insertWaypoint(0, this->currentTargetLayerInterfaceP);
    
this->setRandomGeographicMapCellHistory(this->waypointPathsListP);
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void setGeographicMapCellHistoryPath(BasicArrayList geographicMapCellPositionBasicArrayList){
this->setCurrentPathGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION);
    
this->nextUnvisitedPathGeographicMapCellPosition= SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    
super.setGeographicMapCellHistoryPath(geographicMapCellPositionBasicArrayList);
    
}


                //@Throws(Exception.constructor)
            
    private: void processWaypoint(){

    int32_t size = this->targetList.size();;
    

                        if(size > 0)
                        
                                    {
                                    
    AdvancedRTSGameLayer targetLayer = this->targetList.get(0) as AdvancedRTSGameLayer;;
    
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processWaypoint(this->associatedAdvancedRTSGameLayer, this, targetLayer, size);
    

                        if(targetLayer.isDestroyed())
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.WAYPOINT_DESTROYED_SHORT, this->basicColorFactory.YELLOW);
    
this->removeWaypoint(targetLayer, this->unitWaypointStrings.WAYPOINT_DESTROYED);
    

                                    }
                                
                        else {
                            
    GeographicMapCellPosition geographicMapCellPosition = this->associatedAdvancedRTSGameLayer.getCurrentGeographicMapCellPosition();;
    

                        if(this->isTrackingWaypoint())
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processWaypointTracked(this->associatedAdvancedRTSGameLayer, this);
    

                        if(this->visitIfAtMidPoint(geographicMapCellPosition))
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processWaypointTrackedVisit(this->associatedAdvancedRTSGameLayer, geographicMapCellPosition);
    

                                    }
                                

                        if(this->currentGeographicMapCellHistoryP.isAllVisited2() && this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    
    AdvancedRTSGameLayer oldWaypointLayer = this->currentTargetLayerInterfaceP as AdvancedRTSGameLayer;;
    
oldWaypointLayer.getWaypointBehavior().getWaypoint().visit(this->associatedAdvancedRTSGameLayer);
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.ALL_VISITED_SHORT, this->basicColorFactory.GREEN);
    
this->removeWaypoint(this->currentTargetLayerInterfaceP as AdvancedRTSGameLayer, this->unitWaypointStrings.ALL_VISITED);
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->currentTargetLayerInterfaceP == 
                                    nullptr
                                 || this->waypointOverridesAttacking)
                        
                                    {
                                    
    BasicArrayList list = targetLayer.getWaypointBehavior().getWaypoint().getPathsListFromCacheOnly(geographicMapCellPosition);;
    
this->setWaypointPathsList(list);
    

                        if(this->waypointPathsListP == 
                                    nullptr
                                )
                        
                                    {
                                    this->waitingOnWaypointPath= true;
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.THINKING, this->basicColorFactory.GREEN);
    
this->runWaypointPathTask(targetLayer);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->setWaypointPath(targetLayer);
    

                                    }
                                

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void wander(){

                        if(this->currentGeographicMapCellHistoryP.isAllVisited2())
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.wander(this->associatedAdvancedRTSGameLayer);
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.WANDERING, this->basicColorFactory.RED);
    
this->wanderPathsList.clear();
    
this->wanderPathsList.add(this->associatedAdvancedRTSGameLayer.getSurroundingGeographicMapCellPositionList());
    
this->setRandomGeographicMapCellHistory(this->wanderPathsList);
    

                                    }
                                
this->visitIfAtMidPoint(this->getCurrentPathGeographicMapCellPosition());
    
this->updateCurrentPathGeographicMapCellPosition();
    
this->associatedAdvancedRTSGameLayer.trackTo(this->unitWaypointStrings.NEXT_PATH_NODE);
    
}


    private: bool visitIfAtMidPoint(GeographicMapCellPosition geographicMapCellPosition){

    UnitLayer unitLayer = this->associatedAdvancedRTSGameLayer;;
    

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION && this->nextUnvisitedPathGeographicMapCellPosition == geographicMapCellPosition)
                        
                                    {
                                    
    GPoint point = geographicMapCellPosition.getMidPoint();;
    

    GPoint afterNextPoint = this->afterNextUnvisitedPathGeographicMapCellPosition.getMidPoint();;
    

    bool beyondMidPoint = true;;
    

                        if(geographicMapCellPosition.getColumn() == this->afterNextUnvisitedPathGeographicMapCellPosition.getColumn())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(point.getX() < afterNextPoint.getX())
                        
                                    {
                                    
                        if(unitLayer.getXP() +unitLayer.getHalfWidth() < point.getX())
                        
                                    {
                                    beyondMidPoint= false;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(unitLayer.getXP() +unitLayer.getHalfWidth() > point.getX())
                        
                                    {
                                    beyondMidPoint= false;
    

                                    }
                                

                        }
                            

                        if(geographicMapCellPosition.getRow() == this->afterNextUnvisitedPathGeographicMapCellPosition.getRow())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(point.getY() < afterNextPoint.getY())
                        
                                    {
                                    
                        if(unitLayer.getYP() +unitLayer.getHalfHeight() < point.getY())
                        
                                    {
                                    beyondMidPoint= false;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(unitLayer.getYP() +unitLayer.getHalfHeight() > point.getY())
                        
                                    {
                                    beyondMidPoint= false;
    

                                    }
                                

                        }
                            

                        if(beyondMidPoint)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentGeographicMapCellHistoryP.visit(geographicMapCellPosition);;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    private: void processTargetList(){
this->targetWithoutCachedPathLayerInterface= CollidableDestroyableDamageableLayer::getNullInstance();
    




                        for (
    int32_t index = this->getPossibleTargetList().size() -1;index >= 0; index--)
        {

    AdvancedRTSGameLayer layerInterface = this->getPossibleTargetList().get(index) as AdvancedRTSGameLayer;;
    

                        if(layerInterface.isDestroyed())
                        
                                    {
                                    this->getPossibleTargetList().remove(layerInterface);
    

                                    }
                                
                        else {
                            this->onEnemyMovement(layerInterface);
    

                        }
                            
}


                        if(this->targetWithoutCachedPathLayerInterface != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->waitingOnTargetPath= true;
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.THINKING_ABOUT_TARGET, this->basicColorFactory.GREEN);
    
this->runWaypointPathTask(this->currentTargetLayerInterfaceP as AdvancedRTSGameLayer);
    

                                    }
                                
this->getPossibleTargetList().clear();
    
}


                //@Throws(Exception.constructor)
            
    private: void processTargeting(){

                        if(this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance() && (this->isInSensorRange(this->currentTargetLayerInterfaceP, this->getCurrentTargetDistance()) || this->isTrackingWaypoint()))
                        
                                    {
                                    
                        if(this->currentTargetLayerInterfaceP.isDestroyed())
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.targetDestroyed(this->associatedAdvancedRTSGameLayer);
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.KILL, this->basicColorFactory.ORANGE);
    
this->clearTarget();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    int32_t dx = 0;;
    

    int32_t dy = 0;;
    

                        if(this->isTrackingWaypoint())
                        
                                    {
                                    this->updateCurrentPathGeographicMapCellPosition();
    

    GPoint point = this->nextUnvisitedPathGeographicMapCellPosition.getMidPoint();;
    
dx= this->associatedAdvancedRTSGameLayer.getXP() +this->associatedAdvancedRTSGameLayer.getHalfWidth() -point.getX();
    
dy= this->associatedAdvancedRTSGameLayer.getYP() +this->associatedAdvancedRTSGameLayer.getHalfHeight() -point.getY();
    
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processTargeting(this->associatedAdvancedRTSGameLayer, dx, dy);
    

                                    }
                                
                        else {
                            this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.processTargetingNonWayPoint(this->associatedAdvancedRTSGameLayer, dx, dy);
    
dx= (this->associatedAdvancedRTSGameLayer.getXP() +this->associatedAdvancedRTSGameLayer.getHalfWidth()) -(this->currentTargetLayerInterfaceP.getXP() +this->currentTargetLayerInterfaceP.getHalfWidth());
    
dy= (this->associatedAdvancedRTSGameLayer.getYP() +this->associatedAdvancedRTSGameLayer.getHalfHeight()) -(this->currentTargetLayerInterfaceP.getYP() +this->currentTargetLayerInterfaceP.getHalfHeight());
    

                        }
                            
this->associatedAdvancedRTSGameLayer.trackToDXY(dx, dy);
    

                                    }
                                
                        else {
                            
                        if(this->associatedAdvancedRTSGameLayer.getParentLayer().isDestroyed())
                        
                                    {
                                    this->wander();
    

                                    }
                                
                        else {
                            
                        if(this->associatedAdvancedRTSGameLayer.showMoreCaptionStates)
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.STOP, this->basicColorFactory.YELLOW);
    

                                    }
                                
this->associatedAdvancedRTSGameLayer.allStop();
    

                        }
                            

                        }
                            
}


    private: void updateCurrentPathGeographicMapCellPosition(){
this->setLastPathGeographicMapCellPosition(this->getCurrentPathGeographicMapCellPosition());
    
this->setCurrentPathGeographicMapCellPosition(this->nextUnvisitedPathGeographicMapCellPosition);
    
this->nextUnvisitedPathGeographicMapCellPosition= this->currentGeographicMapCellHistoryP.getFirstUnvisited();
    
this->afterNextUnvisitedPathGeographicMapCellPosition= this->currentGeographicMapCellHistoryP.getAfterIfNotLast(this->nextUnvisitedPathGeographicMapCellPosition);
    

                        if(this->getCurrentPathGeographicMapCellPosition() != this->nextUnvisitedPathGeographicMapCellPosition)
                        
                                    {
                                    this->progressTimeDelayHelper.setStartTimeTNT();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void setWaypointPath(AdvancedRTSGameLayer waypointLayer){

                        if(this->waypointPathsListP.size() != 0)
                        
                                    {
                                    this->setCurrentTargetLayerInterface(waypointLayer);
    

    int32_t MAX = Integer::MAX_VALUE;;
    
this->setCurrentTargetDistance(MAX);
    
this->setRandomGeographicMapCellHistory(this->waypointPathsListP);
    

                                    }
                                
                        else {
                            waypointLayer.getWaypointBehavior().getWaypoint().visit(this->associatedAdvancedRTSGameLayer);
    
this->associatedAdvancedRTSGameLayer.getCaptionAnimationHelper().update(this->unitWaypointStrings.ALREADY_THERE_SHORT, this->basicColorFactory.YELLOW);
    
this->removeWaypoint(waypointLayer, this->unitWaypointStrings.ALREADY_THERE);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void runWaypointPathTask(AdvancedRTSGameLayer waypointLayer){
this->setWaypointPathsList(UnitWaypointBehavior2::runningWaypointPathList);
    

                        if(this->waypointPathRunnable.isRunning())
                        
                                    {
                                    


                            throw Exception("Should never be running here");
                    

                                    }
                                
this->waypointPathRunnable.setRunning(true);
    
this->waypointPathRunnable.setUnitLayer(this->associatedAdvancedRTSGameLayer);
    
this->waypointPathRunnable.setTargetLayer(waypointLayer);
    
this->pathFindingThreadPool.runTask(this->waypointPathRunnable);
    
}


                //@Throws(Exception.constructor)
            
    private: void removeWaypoint(RTSLayer waypointLayer, std::string reason){
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.removeWaypoint(this->associatedAdvancedRTSGameLayer, this, waypointLayer, reason);
    
this->targetList.remove(waypointLayer);
    
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.removeWaypointList(this->associatedAdvancedRTSGameLayer, this, this->targetList);
    

                        if(this->currentTargetLayerInterfaceP == waypointLayer)
                        
                                    {
                                    this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.removeWaypointClear(this->associatedAdvancedRTSGameLayer);
    
this->clearTarget();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void clearTarget(){
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.clearTarget(this->associatedAdvancedRTSGameLayer);
    
this->setCurrentTargetLayerInterface(CollidableDestroyableDamageableLayer::getNullInstance());
    
this->setTrackingWaypoint(false);
    

    int32_t MAX = Integer::MAX_VALUE;;
    
this->setCurrentTargetDistance(MAX);
    
TrackingEventHandler::getInstance().fireEvent(this->associatedAdvancedRTSGameLayer.getTrackingEvent());
    
}


    public: bool isWaypointListEmptyOrOnlyTargets(){

    BasicArrayList list = this->targetList;;
    

                        if(list.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

    AdvancedRTSGameLayer layerInterface = list.get(index) as AdvancedRTSGameLayer;;
    

                        if(layerInterface.isWaypointListEmptyOrOnlyTargets())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    private: bool isCloseRange(AdvancedRTSGameLayer layerInterface, int32_t targetDistance){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return targetDistance < this->closeRange +layerInterface.getHalfHeight();
    
}


    public: bool isInSensorRange(CollidableDestroyableDamageableLayer layerInterface, int32_t targetDistance){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return targetDistance < this->sensorRange +layerInterface.getHalfHeight();
    
}


    public: std::string getCurrentTargetingStateString(){

    StringMaker stringBuffer = StringMaker();;
    

                        if(this->currentTargetLayerInterfaceP != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    stringBuffer.append(UnitWaypointBehavior2::TARGET_LAYER);
    
stringBuffer.append(this->commonSeps.SPACE);
    
stringBuffer.append(this->currentTargetLayerInterfaceP.getName());
    
stringBuffer.append(" with ");
    
stringBuffer.append(UnitWaypointBehavior2::TARGET_DISTANCE);
    
stringBuffer.append(this->commonSeps.SPACE);
    
stringBuffer.appendint(this->getCurrentTargetDistance());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


                //@Throws(Exception.constructor)
            
    protected: void addWaypointFromUser(AdvancedRTSGameLayer advancedRTSGameLayer){

                        if(advancedRTSGameLayer.isDestroyed())
                        
                                    {
                                    


                            throw Exception("Trying to add a dead: " +advancedRTSGameLayer);
                    

                                    }
                                
this->associatedAdvancedRTSGameLayer.waypoint2LogHelperP.addWaypointFromUser(this->associatedAdvancedRTSGameLayer, advancedRTSGameLayer);
    
this->targetList.clear();
    
this->targetList.add(advancedRTSGameLayer);
    
this->clearTarget();
    
}


//inner= member=true isStatic=
class BuildingSteeringVisitor: public SteeringVisitor {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const BasicArrayList positionList = BasicArrayListD();

    public: Object* visit(Object* anyType){

    LogUtil logUtil = LogUtil::getInstance();;
    

        try {
            
                        if(this->getList().size() > 0)
                        
                                    {
                                    
    AllBinaryLayer allbinaryLayer = this->getList().get(0) as AllBinaryLayer;;
    

    GeographicMapCellPosition cellPosition = this->getPositionList().get(0) as GeographicMapCellPosition;;
    

    bool clear = this->buildingChase(allbinaryLayer, cellPosition);;
    

                        if(clear)
                        
                                    {
                                    this->getList().clear();
    
this->positionList.clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance().FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, this, "visit", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    
}

}


    public: BasicArrayList getPositionList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->positionList;
    
}


};

            
    private: const buildingSteeringVisitor = BuildingSteeringVisitor();

                //@Throws(Exception.constructor)
            
    public: void addBuildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition){

                        if(!this->buildingSteeringVisitor.getList().contains(allbinaryLayer))
                        
                                    {
                                    this->buildingSteeringVisitor.getList().add(allbinaryLayer);
    
this->buildingSteeringVisitor.getPositionList().add(cellPosition);
    

                                    }
                                

                        if(!this->getSteeringVisitorList().contains(this->buildingSteeringVisitor))
                        
                                    {
                                    this->getSteeringVisitorList().add(this->buildingSteeringVisitor);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->associatedAdvancedRTSGameLayer.buildingChase(allbinaryLayer, cellPosition);;
    
}


};

            

