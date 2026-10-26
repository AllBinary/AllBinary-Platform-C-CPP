
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    private: std::string name;

    private: GeographicMapCellHistory geographicMapCellHistory;

    private: BasicArrayList geographicMapCellPositionBasicArrayList;

    private: GeographicMapCellPathHistoryInfo geographicMapCellPathHistoryInfo;

    private: BasicDirectionAIHelper basicAI;

public: BasicAIProcessor(std::string name, GeographicMapCellHistory geographicMapCellHistory, GeographicMapCellPathHistoryInfo geographicMapCellPathHistoryInfo, BasicArrayList chosenPathList, AngleInfo angleInfo, int32_t seed);

    private: void setNewPath(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList chosenPathList);

    public: void init();

    private: const GeographicMapDirectionUtil geographicMapDirectionUtil = GeographicMapDirectionUtil::getInstance();

                //@Throws(Exception.constructor)
            
    private: int32_t goTowardNextChosenOnPathPosition(GeographicMapCellPosition currentGeographicMapCellPosition);

    private: void update();

                //@Throws(Exception.constructor)
            
    public: int32_t processAI(AllBinaryLayerManager myManager, GeographicMapCellPosition currentGeographicMapCellPosition);

    public: std::string getName();

    public: void setName(std::string name);

    public: GeographicMapCellPathHistoryInfo getGeographicMapCellPathHistoryInfo();

    public: void setGeographicMapCellPathHistoryInfo(GeographicMapCellPathHistoryInfo geographicMapCellPathHistoryInfo);

    public: GeographicMapCellHistory getGeographicMapCellHistory();

    public: void setGeographicMapCellHistory(GeographicMapCellHistory geographicMapCellHistory);

};

            


        #endif //ORG_ALLBINARY_GAME_AI_PATH_BASICAIPROCESSOR_H
