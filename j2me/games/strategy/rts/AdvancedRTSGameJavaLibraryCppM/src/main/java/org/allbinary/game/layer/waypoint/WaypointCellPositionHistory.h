
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;
class CellPosition;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointCellPositionHistory
            : public virtual Object
         {

    private: static WaypointCellPositionHistory* SINGLETON_owner();
    private: static WaypointCellPositionHistory* SINGLETON;

    public: static WaypointCellPositionHistory* getInstance();


            
    public: WaypointCellPositionHistory();
        
    private: BasicArrayList* positionList;

    private: BasicArrayList* layerList;

    public: void add(CellPosition* cellPosition, AllBinaryLayer* layerInterface);

    public: void addList(BasicArrayList* list, AllBinaryLayer* layerInterface);

    public: void remove(CellPosition* cellPosition);

    public: void removeLayer(AllBinaryLayer* layerInterface);

    public: void clear();

    public: bool isCellPositionWithDrop(CellPosition* cellPosition);

    public: bool anyCellPositionWithDrop(BasicArrayList* list);

    public: AllBinaryLayer* getLayerInterface(CellPosition* cellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTCELLPOSITIONHISTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPosition.h>)
#include <org/allbinary/graphics/CellPosition.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif

        #endif
    
