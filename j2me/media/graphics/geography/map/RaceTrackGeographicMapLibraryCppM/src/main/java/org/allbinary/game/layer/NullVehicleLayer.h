
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VehicleLayerInterface.h"
#include "VehicleProperties.h"

class NullVehicleLayer
            : public Object
        : public VehicleLayerInterface {

    public: static const NullVehicleLayer NULL_VEHICLE_LAYER = NullVehicleLayer();

    public: std::string getName();

    public: std::vector<Group> getGroupInterface();

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

    public: VehicleProperties getVehicleProperties();

    public: BasicArrayList getGameKeyEventList();

    public: BasicDecimal getSpeedBasicDecimal();

    public: bool isReadyForExplosion();

    public: RotationAnimation getRotationAnimationInterface();

    public: void setRotationAnimationInterface(RotationAnimation animationInterface);

    public: bool isDestroyed();

    public: bool isFinish();

    public: int32_t getFinalPosition();

                //@Throws(Exception.constructor)
            
    public: void handleFinish();

    public: GeographicMapCellPositionTracking getGeographicMapCellPositionTracking();

    public: std::vector<GeographicMapCellHistory> getGeographicMapCellHistoryArray();

    public: void setGeographicMapCellHistoryArray(std::vector<GeographicMapCellHistory> geographicMapCellHistory);

    public: void paint(Graphics graphics);

    public: void paintThreed(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_NULLVEHICLELAYER_H
