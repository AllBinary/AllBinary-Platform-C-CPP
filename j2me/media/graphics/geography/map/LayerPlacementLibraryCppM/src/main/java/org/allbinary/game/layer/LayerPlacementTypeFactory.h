
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/direction/DirectionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/LayerPlacementType.h"

class LayerPlacementTypeFactory
            : public Object
         {

    private: static LayerPlacementTypeFactory* instance() { static std::unique_ptr<LayerPlacementTypeFactory> value(new LayerPlacementTypeFactory()); return value.get(); }

    public: static LayerPlacementTypeFactory* getInstance();

    public: LayerPlacementType* MAP = new LayerPlacementType(Integer.MAX_VALUE);

    public: LayerPlacementType* LEFT = new LayerPlacementType(DirectionFactory::getInstance()->LEFT->getValue());

    public: LayerPlacementType* DOWN = new LayerPlacementType(DirectionFactory::getInstance()->DOWN->getValue());

    public: LayerPlacementType* UP = new LayerPlacementType(DirectionFactory::getInstance()->UP->getValue());

    public: LayerPlacementType* RIGHT = new LayerPlacementType(DirectionFactory::getInstance()->RIGHT->getValue());

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H
