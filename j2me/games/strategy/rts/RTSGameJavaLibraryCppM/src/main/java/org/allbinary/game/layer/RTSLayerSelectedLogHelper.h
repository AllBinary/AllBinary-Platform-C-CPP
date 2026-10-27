
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERSELECTEDLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERSELECTEDLOGHELPER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/NamedAngle.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayerLogHelper.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

class RTSLayerSelectedLogHelper: public RTSLayerLogHelper {

    private: static RTSLayerSelectedLogHelper* instanceC() { static std::unique_ptr<RTSLayerSelectedLogHelper> value(new RTSLayerSelectedLogHelper()); return value.get(); }

    public: static RTSLayerSelectedLogHelper* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: PositionStrings* positionStrings = PositionStrings::getInstance();

    private: const std::string TRACKTO_TURNTO = "trackTo:turnTo";

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

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERSELECTEDLOGHELPER_H
