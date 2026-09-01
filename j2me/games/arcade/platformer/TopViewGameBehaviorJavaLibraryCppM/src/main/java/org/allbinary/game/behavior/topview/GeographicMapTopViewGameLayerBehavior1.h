
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR1_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR1_H

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/physics/acceleration/GravityUtil.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapTopViewLayerBehavior.h"
#include "TopViewCharacterInterface.h"

class GeographicMapTopViewGameLayerBehavior1: public GeographicMapTopViewLayerBehavior {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GravityUtil gravityUtil = GravityUtil::getInstance();

    private: const MultiGeographicMapBehavior geographicMapBehavior = MultiGeographicMapBehavior();

    private: bool autoStepBlocks;

    private: int32_t offsetY;

    private: GeographicMapCellPosition previousGeographicMapCellPosition;

public: GeographicMapTopViewGameLayerBehavior1(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY);

                //@Throws(Exception.constructor)
            
    public: void gravity(VelocityProperties velocityProperties, std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, AllBinaryLayer layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition getLeftPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, AllBinaryLayer layer);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition getRightPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, AllBinaryLayer layer);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void moveAndLand(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition, VelocityProperties velocityProperties, AllBinaryLayer layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: bool move(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void left(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer);

                //@Throws(Exception.constructor)
            
    public: void right(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR1_H
