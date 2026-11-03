
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_NULLVEHICLELAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_NULLVEHICLELAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class Graphics;
class RotationAnimation;
class Group;
class BasicDecimal;
class GeographicMapCellHistory;
class GeographicMapCellPositionTracking;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/VehicleLayerInterface.h"
class VehicleProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullVehicleLayer
            : public virtual Object
        , public virtual VehicleLayerInterface {

    private: static NullVehicleLayer* NULL_VEHICLE_LAYER_owner();
    public: static NullVehicleLayer* NULL_VEHICLE_LAYER;


            
    public: NullVehicleLayer();
        
    public: std::string getName();

    public: std::vector<Group*> getGroupInterface();

    public: void setPosition(int32_t x, int32_t y, int32_t z);

    public: int32_t getHeight();

    public: int32_t getWidth();

    public: int32_t getHalfHeight();

    public: int32_t getHalfWidth();

    public: int32_t getXP();

    public: int32_t getYP();

    public: int32_t getZP();

    public: int32_t getX2();

    public: int32_t getY2();

    public: int32_t getZ2();

    public: bool isVisible();

    public: void moveDXYZ(int32_t dx, int32_t dy, int32_t dz);

    public: void setVisible(bool visible);

    public: bool implmentsTickableInterface();

    public: bool implmentsCollidableInterface();

    public: bool implmentsGameInputInterface();

    public: bool implmentsArtificialIntelligenceCompositeInterface();

    public: int32_t getType();

    public: VehicleProperties* getVehicleProperties();

    public: BasicArrayList* getGameKeyEventList();

    public: BasicDecimal* getSpeedBasicDecimal();

    public: bool isReadyForExplosion();

    public: RotationAnimation* getRotationAnimationInterface();

    public: void setRotationAnimationInterface(RotationAnimation* animationInterface);

    public: bool isDestroyed();

    public: bool isFinish();

    public: int32_t getFinalPosition();

                //@Throws(Exception.constructor)
            
    public: void handleFinish();

    public: GeographicMapCellPositionTracking* getGeographicMapCellPositionTracking();

    public: std::vector<GeographicMapCellHistory*> getGeographicMapCellHistoryArray();

    public: void setGeographicMapCellHistoryArray(std::vector<GeographicMapCellHistory*> geographicMapCellHistory);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_NULLVEHICLELAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_NULLVEHICLELAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_NULLVEHICLELAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimation.h>)
#include <org/allbinary/animation/RotationAnimation.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/layer/VehicleLayerInterface.h")
#include "org/allbinary/game/layer/VehicleLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/VehicleProperties.h")
#include "org/allbinary/game/layer/VehicleProperties.h"
#endif

        #endif
    
