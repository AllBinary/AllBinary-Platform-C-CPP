
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class MultiGeographicMapBehavior;
class AllBinaryTiledLayer;
class GravityUtil;
class VelocityProperties;
class AllBinaryLayer;
class BasicGeographicMap;
class GeographicMapCellPosition;
class GeographicMapCellType;
class SimpleGeographicMapCellPositionFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/GeographicMapTopViewLayerBehavior.h"
class TopViewCharacterInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapTopViewGameLayerBehavior2: public GeographicMapTopViewLayerBehavior {

    private: GravityUtil* gravityUtil;

    private: MultiGeographicMapBehavior* geographicMapBehavior;

    private: bool autoStepBlocks;

    private: int32_t offsetY;

    private: GeographicMapCellPosition* previousGeographicMapCellPosition;

public: GeographicMapTopViewGameLayerBehavior2(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY);

                //@Throws(Exception.constructor)
            
    public: void gravity(VelocityProperties* velocityProperties, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition* getPositionTopLeft(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition* getPositionTopRight(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition* getPositionBottomLeft(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition* getPositionBottomRight(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition* getLeftPosition(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition* getRightPosition(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getGeographicMapCellPositionIfNotSolidBlockOrOffMap(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    public: void moveAndLand(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: bool move(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void left(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

                //@Throws(Exception.constructor)
            
    public: void right(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>)
#include <org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/physics/acceleration/GravityUtil.h>)
#include <org/allbinary/game/physics/acceleration/GravityUtil.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/VelocityProperties.h>)
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include("org/allbinary/game/behavior/topview/GeographicMapTopViewLayerBehavior.h")
#include "org/allbinary/game/behavior/topview/GeographicMapTopViewLayerBehavior.h"
#endif
#if __has_include("org/allbinary/game/behavior/topview/TopViewCharacterInterface.h")
#include "org/allbinary/game/behavior/topview/TopViewCharacterInterface.h"
#endif

        #endif
    
