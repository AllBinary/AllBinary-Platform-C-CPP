
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWLAYERBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWLAYERBEHAVIOR_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellTypeFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/TopViewGameLayerBehavior.h"

class GeographicMapTopViewLayerBehavior: public TopViewGameLayerBehavior {

public: GeographicMapTopViewLayerBehavior(int32_t maxGravityActionIndex);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getGeographicMapCellPositionIfNotSolidBlockOrOffMap(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getGeographicMapCellPositionFromListIfNotSolidBlockOrOffMap(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, BasicArrayList* geographicMapCellPositionList, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    public: void gravity(VelocityProperties* velocityProperties, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void left(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    public: bool move(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void moveAndLand(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void right(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

    public: bool hasSolidBlock(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray);

    public: bool isOffMap(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWLAYERBEHAVIOR_H
