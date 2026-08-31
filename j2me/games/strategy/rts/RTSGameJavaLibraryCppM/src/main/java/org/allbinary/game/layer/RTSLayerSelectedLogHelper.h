
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
        #include "RTSLayerLogHelper.h"
#include "PathFindingLayerInterface.h"

class RTSLayerSelectedLogHelper: public RTSLayerLogHelper {
        

    private: static const instanceC: RTSLayerSelectedLogHelper = new RTSLayerSelectedLogHelper();

    public static RTSLayerSelectedLogHelper getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const positionStrings: PositionStrings = PositionStrings.getInstance()!;

    private: const TRACKTO_TURNTO: string = "trackTo:turnTo";

    public setClosestGeographicMapCellHistory(PathFindingLayerInterface associatedAdvancedRTSGameLayer, BasicArrayList pathsList);

    public trackTo(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, string reason);

    public turnTo(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo angleInfo, int32_t angle, NamedAngle movementAngle, bool evading, int32_t targetAngle);

    public doneMoving(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public closeEnough(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public movingLeft(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public movingRight(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public movingUp(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public movingDown(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public currentMoveEnded(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public evade(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public rotateLeft(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public rotateRight(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public handle(PathFindingLayerInterface associatedAdvancedRTSGameLayer, NamedAngle movementAngle);

    public noRotation(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public notOnPath(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellHistory geographicMapCellHistory, GeographicMapCellPosition currentGeographicMapCellPosition, BasicArrayList pathList);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERSELECTEDLOGHELPER_H
