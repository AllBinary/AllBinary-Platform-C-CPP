
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/direction/DirectionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerPlacementType.h"

class LayerPlacementTypeFactory
            : public Object
         {

    private: static LayerPlacementTypeFactory instance() { return LayerPlacementTypeFactory(); }

    public: static LayerPlacementTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerPlacementTypeFactory::instance();
    
}


    public: const LayerPlacementType MAP = LayerPlacementType(Integer::MAX_VALUE);

    public: const LayerPlacementType LEFT = LayerPlacementType(DirectionFactory::getInstance().LEFT.getValue());

    public: const LayerPlacementType DOWN = LayerPlacementType(DirectionFactory::getInstance().DOWN.getValue());

    public: const LayerPlacementType UP = LayerPlacementType(DirectionFactory::getInstance().UP.getValue());

    public: const LayerPlacementType RIGHT = LayerPlacementType(DirectionFactory::getInstance().RIGHT.getValue());

};

            

