
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPLAYERFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPLAYERFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackAdjacentDropLayerFactory
            : public Object
         {

    private: static RaceTrackAdjacentDropLayerFactory* DROP_LAYER_FACTORY() { static std::unique_ptr<RaceTrackAdjacentDropLayerFactory> value(new RaceTrackAdjacentDropLayerFactory()); return value.get(); }

    public: static RaceTrackAdjacentDropLayerFactory* getInstance();

    private: BasicArrayList* list = new BasicArrayListD();

private: RaceTrackAdjacentDropLayerFactory();

    public: void clear();

    public: int32_t getSize();

    private: BasicArrayListUtil* basicArrayListUtil = BasicArrayListUtil::getInstance();

    public: LayerInterfaceFactoryInterface* getRandomInstance();

    public: void add(LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPLAYERFACTORY_H
