
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AngleInfo;
class NamedAngle;
class GeographicMapCellHistory;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PathFindingLayerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerLogHelper
            : public virtual Object
         {

    private: static RTSLayerLogHelper* instance_owner();
    private: static RTSLayerLogHelper* instance;

    public: static RTSLayerLogHelper* getInstance();


            
    public: RTSLayerLogHelper();
        
    public: void setClosestGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList);

    public: void trackTo(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, std::string reason);

    public: void turnTo(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo* angleInfo, int32_t angle, NamedAngle* movementAngle, bool evading, int32_t targetAngle);

    public: void doneMoving(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void closeEnough(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void movingLeft(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void movingRight(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void movingUp(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void movingDown(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void currentMoveEnded(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void evade(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void rotateLeft(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void rotateRight(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void handle(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, NamedAngle* movementAngle);

    public: void noRotation(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void notOnPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPosition* currentGeographicMapCellPosition, BasicArrayList* pathList);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include(<org/allbinary/math/NamedAngle.h>)
#include <org/allbinary/math/NamedAngle.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/layer/PathFindingLayerInterface.h")
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#endif

        #endif
    
