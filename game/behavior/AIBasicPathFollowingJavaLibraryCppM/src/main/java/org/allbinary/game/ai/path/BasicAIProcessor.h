
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_AI_PATH_BASICAIPROCESSOR_H
        #define ORG_ALLBINARY_GAME_AI_PATH_BASICAIPROCESSOR_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/GeographicMapCellPathHistoryInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicDirectionAIHelper.h"

class BasicAIProcessor
            : public Object
         {
        

    private: name: string;

    private: geographicMapCellHistory: GeographicMapCellHistory;

    private: geographicMapCellPositionBasicArrayList: BasicArrayList;

    private: geographicMapCellPathHistoryInfo: GeographicMapCellPathHistoryInfo;

    private: basicAI: BasicDirectionAIHelper;

public constructor (string name, GeographicMapCellHistory geographicMapCellHistory, GeographicMapCellPathHistoryInfo geographicMapCellPathHistoryInfo, BasicArrayList chosenPathList, AngleInfo angleInfo, int32_t seed);

    setNewPath(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList chosenPathList);

    public init();

    private: const geographicMapDirectionUtil: GeographicMapDirectionUtil = GeographicMapDirectionUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    int32_t goTowardNextChosenOnPathPosition(GeographicMapCellPosition currentGeographicMapCellPosition);

    update();

                //@Throws(Exception.constructor)
            
    public int32_t processAI(AllBinaryLayerManager myManager, GeographicMapCellPosition currentGeographicMapCellPosition);

    public string getName();

    public setName(string name);

    public GeographicMapCellPathHistoryInfo getGeographicMapCellPathHistoryInfo();

    public setGeographicMapCellPathHistoryInfo(GeographicMapCellPathHistoryInfo geographicMapCellPathHistoryInfo);

    public GeographicMapCellHistory getGeographicMapCellHistory();

    public setGeographicMapCellHistory(GeographicMapCellHistory geographicMapCellHistory);

};

            


        #endif //ORG_ALLBINARY_GAME_AI_PATH_BASICAIPROCESSOR_H
