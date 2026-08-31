
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingLayerInterface.h"
#include "GeographicMapCellPositionAreaBase.h"
#include "SelectionHudPaintable.h"
#include "RTSLayer2LogHelper.h"
#include "WaypointBehaviorBase.h"

class NullPathFindingLayer
            : public Object
        : public PathFindingLayerInterface {
        

    public static const NULL_PATH_FINDING_LAYER: NullPathFindingLayer = new NullPathFindingLayer();

    public string getName(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getEndGeographicMapCellPositionList(){



                            throw new RuntimeException();
                    
}


    public bool shouldHandleStartSameAsEnd(){



                            throw new RuntimeException();
                    
}


    public GeographicMapCellPositionAreaBase getGeographicMapCellPositionArea(){



                            throw new RuntimeException();
                    
}


    public SelectionHudPaintable getHudPaintable(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public handleCost(PathFindingLayerInterface ownerLayer){



                            throw new RuntimeException();
                    
}


    public PathFindingLayerInterface getParentLayer(){



                            throw new RuntimeException();
                    
}


    public RTSLayer2LogHelper getRTSLayer2LogHelper(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public setTarget(PathFindingLayerInterface targetGameLayer){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList){



                            throw new RuntimeException();
                    
}


    public BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public setClosestGeographicMapCellHistory(BasicArrayList pathsList){



                            throw new RuntimeException();
                    
}


    public teleportTo(GeographicMapCellPosition geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public setLoad(int32_t resource){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getSurroundingGeographicMapCellPositionList(){



                            throw new RuntimeException();
                    
}


    public bool isSelected(){



                            throw new RuntimeException();
                    
}


    public bool shouldAddWaypointFromBuilding(){



                            throw new RuntimeException();
                    
}


    public bool isShowMoreCaptionStates(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public trackTo(string reason){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public trackToDXY(int32_t dx, int32_t dy){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition){



                            throw new RuntimeException();
                    
}


    public TrackingEvent getTrackingEvent(){



                            throw new RuntimeException();
                    
}


    public allStop(){



                            throw new RuntimeException();
                    
}


    public bool isWaypointListEmptyOrOnlyTargets(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCurrentGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getTopLeftGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


    public CaptionAnimationHelperBase getCaptionAnimationHelper(){



                            throw new RuntimeException();
                    
}


    public WaypointBehaviorBase getWaypointBehavior(){



                            throw new RuntimeException();
                    
}


    public WaypointLogHelper getWaypointLogHelper(){



                            throw new RuntimeException();
                    
}


    public Waypoint2LogHelper getWaypoint2LogHelper(){



                            throw new RuntimeException();
                    
}


    public WaypointRunnableLogHelper getWaypointRunnableLogHelper(){



                            throw new RuntimeException();
                    
}


    public std::vector<Group> getGroupInterface(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public bool isDestroyed(){



                            throw new RuntimeException();
                    
}


    public int32_t getSourceId(){



                            throw new RuntimeException();
                    
}


};

            

