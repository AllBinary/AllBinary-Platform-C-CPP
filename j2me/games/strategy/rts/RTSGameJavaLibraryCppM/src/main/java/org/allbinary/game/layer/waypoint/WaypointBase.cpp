
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/NoSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/MultipassState.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WaypointBase
            : public Object
        : public EventListenerInterface {
        

    public static NULL_WAYPOINT_BASE: WaypointBase = new WaypointBase(NoSound.getInstance());

    private: const connectedWaypointList: BasicArrayList = new BasicArrayListD();

    private: const sound: Sound;

    allBinaryGameLayerManagerP: AllBinaryGameLayerManager = AllBinaryGameLayerManager.getNullInstance()!;

public constructor (Sound sound){

            super();
        this.sound= sound;
    
}


    public Sound getSound(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sound;
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
this.allBinaryGameLayerManagerP= allBinaryGameLayerManager;
    
}


    public BasicArrayList getConnectedWaypointList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.connectedWaypointList;
    
}


    public onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil.log(EventStrings.getInstance()!.PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    public PathFindingInfo getPathFindingInfo(GeographicMapCellPosition geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getPathsList(GeographicMapCellPosition geographicMapCellPosition, PathFindingInfo pathFindingInfo, MultipassState multipassState){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getPathsListRunnable(GeographicMapCellPosition geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getPathsListFromCacheOnly(GeographicMapCellPosition geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public visit(PathFindingLayerInterface unitLayer){
}


    public reset(){
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


};

            

