
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
        



            #include <vector>
        
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

    public: static const NullPathFindingLayer NULL_PATH_FINDING_LAYER = NullPathFindingLayer();

    public: std::string getName(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getEndGeographicMapCellPositionList(){



                            throw RuntimeException();
                    
}


    public: bool shouldHandleStartSameAsEnd(){



                            throw RuntimeException();
                    
}


    public: GeographicMapCellPositionAreaBase getGeographicMapCellPositionArea(){



                            throw RuntimeException();
                    
}


    public: SelectionHudPaintable getHudPaintable(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void handleCost(PathFindingLayerInterface ownerLayer){



                            throw RuntimeException();
                    
}


    public: PathFindingLayerInterface getParentLayer(){



                            throw RuntimeException();
                    
}


    public: RTSLayer2LogHelper getRTSLayer2LogHelper(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setTarget(PathFindingLayerInterface targetGameLayer){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList){



                            throw RuntimeException();
                    
}


    public: BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setClosestGeographicMapCellHistory(BasicArrayList pathsList){



                            throw RuntimeException();
                    
}


    public: void teleportTo(GeographicMapCellPosition geographicMapCellPosition){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void setLoad(int32_t resource){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getSurroundingGeographicMapCellPositionList(){



                            throw RuntimeException();
                    
}


    public: bool isSelected(){



                            throw RuntimeException();
                    
}


    public: bool shouldAddWaypointFromBuilding(){



                            throw RuntimeException();
                    
}


    public: bool isShowMoreCaptionStates(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void trackTo(std::string reason){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void trackToDXY(int32_t dx, int32_t dy){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition){



                            throw RuntimeException();
                    
}


    public: TrackingEvent getTrackingEvent(){



                            throw RuntimeException();
                    
}


    public: void allStop(){



                            throw RuntimeException();
                    
}


    public: bool isWaypointListEmptyOrOnlyTargets(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getCurrentGeographicMapCellPosition(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getTopLeftGeographicMapCellPosition(){



                            throw RuntimeException();
                    
}


    public: CaptionAnimationHelperBase getCaptionAnimationHelper(){



                            throw RuntimeException();
                    
}


    public: WaypointBehaviorBase getWaypointBehavior(){



                            throw RuntimeException();
                    
}


    public: WaypointLogHelper getWaypointLogHelper(){



                            throw RuntimeException();
                    
}


    public: Waypoint2LogHelper getWaypoint2LogHelper(){



                            throw RuntimeException();
                    
}


    public: WaypointRunnableLogHelper getWaypointRunnableLogHelper(){



                            throw RuntimeException();
                    
}


    public: std::vector<Group> getGroupInterface(){



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: bool isDestroyed(){



                            throw RuntimeException();
                    
}


    public: int32_t getSourceId(){



                            throw RuntimeException();
                    
}


};

            

