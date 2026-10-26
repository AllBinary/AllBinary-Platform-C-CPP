
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WaypointCellPositionHistory
            : public Object
         {

    private: static const WaypointCellPositionHistory SINGLETON = WaypointCellPositionHistory();

    public: static WaypointCellPositionHistory getInstance();

    private: BasicArrayList positionList = BasicArrayListD();

    private: BasicArrayList layerList = BasicArrayListD();

    public: void add(CellPosition cellPosition, AllBinaryLayer layerInterface);

    public: void addList(BasicArrayList list, AllBinaryLayer layerInterface);

    public: void remove(CellPosition cellPosition);

    public: void removeLayer(AllBinaryLayer layerInterface);

    public: void clear();

    public: bool isCellPositionWithDrop(CellPosition cellPosition);

    public: bool anyCellPositionWithDrop(BasicArrayList list);

    public: AllBinaryLayer getLayerInterface(CellPosition cellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_H
