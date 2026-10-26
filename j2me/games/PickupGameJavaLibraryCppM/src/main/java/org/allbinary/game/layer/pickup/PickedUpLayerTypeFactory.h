
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerType.h"

class PickedUpLayerTypeFactory
            : public Object
         {

    private: static PickedUpLayerTypeFactory instance() { return PickedUpLayerTypeFactory(); }

    public: static PickedUpLayerTypeFactory getInstance();

    public: PickedUpLayerType NONE = PickedUpLayerType(StringUtil::getInstance().NULL_STRING);

    public: PickedUpLayerType BEAM = PickedUpLayerType("BEAM");

    public: PickedUpLayerType MINE = PickedUpLayerType("MINE");

    public: PickedUpLayerType PROJECTILE = PickedUpLayerType("PROJECTILE");

    public: PickedUpLayerType ENHANCEMENT = PickedUpLayerType("Enhancement");

    public: PickedUpLayerType MORPH = PickedUpLayerType("Morph");

    public: PickedUpLayerType PART = PickedUpLayerType("Part");

    public: PickedUpLayerType HEAL = PickedUpLayerType("Heal");

    public: PickedUpLayerType LIFE = PickedUpLayerType("Life");

    public: PickedUpLayerType POINTS = PickedUpLayerType("Points");

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H
