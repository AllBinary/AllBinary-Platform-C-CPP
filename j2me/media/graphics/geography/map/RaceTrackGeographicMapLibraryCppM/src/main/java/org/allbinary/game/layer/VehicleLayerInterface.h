
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_VEHICLELAYERINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_VEHICLELAYERINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/layer/LayerInterface.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VehiclePropertiesCompositeInterface.h"

class VehicleLayerInterface: public LayerInterface, public VehiclePropertiesCompositeInterface {
        

    BasicArrayList getGameKeyEventList();

    BasicDecimal getSpeedBasicDecimal();

    bool isReadyForExplosion();

    RotationAnimation getRotationAnimationInterface();

    setRotationAnimationInterface(RotationAnimation animationInterface);

    bool isDestroyed();

    bool isFinish();

    int32_t getFinalPosition();

                //@Throws(Exception.constructor)
            
    handleFinish();

    GeographicMapCellPositionTracking getGeographicMapCellPositionTracking();

    std::vector<GeographicMapCellHistory> getGeographicMapCellHistoryArray();

    setGeographicMapCellHistoryArray(std::vector<GeographicMapCellHistory> geographicMapCellHistory);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_VEHICLELAYERINTERFACE_H
