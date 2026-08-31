
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/direction/DirectionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerPlacementType.h"

class LayerPlacementTypeFactory
            : public Object
         {
        

    private: static const instance: LayerPlacementTypeFactory = new LayerPlacementTypeFactory();

    public static LayerPlacementTypeFactory getInstance();

    public const MAP: LayerPlacementType = new LayerPlacementType(Integer.MAX_VALUE);

    public const LEFT: LayerPlacementType = new LayerPlacementType(DirectionFactory.getInstance()!.LEFT.getValue());

    public const DOWN: LayerPlacementType = new LayerPlacementType(DirectionFactory.getInstance()!.DOWN.getValue());

    public const UP: LayerPlacementType = new LayerPlacementType(DirectionFactory.getInstance()!.UP.getValue());

    public const RIGHT: LayerPlacementType = new LayerPlacementType(DirectionFactory.getInstance()!.RIGHT.getValue());

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H
