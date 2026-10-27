
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/layer/LayerInterface.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/VehiclePropertiesCompositeInterface.h"

class VehicleLayerInterface: public LayerInterface, public VehiclePropertiesCompositeInterface {

    public: virtual BasicArrayList* getGameKeyEventList() = 0;

    public: virtual BasicDecimal* getSpeedBasicDecimal() = 0;

    public: virtual bool isReadyForExplosion() = 0;

    public: virtual RotationAnimation* getRotationAnimationInterface() = 0;

    public: virtual void setRotationAnimationInterface(RotationAnimation* animationInterface) = 0;

    public: virtual bool isDestroyed() = 0;

    public: virtual bool isFinish() = 0;

    public: virtual int32_t getFinalPosition() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void handleFinish() = 0;

    public: virtual GeographicMapCellPositionTracking* getGeographicMapCellPositionTracking() = 0;

    public: virtual std::vector<GeographicMapCellHistory*> getGeographicMapCellHistoryArray() = 0;

    public: virtual void setGeographicMapCellHistoryArray(std::vector<GeographicMapCellHistory*> geographicMapCellHistory) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_VEHICLELAYERINTERFACE_H
