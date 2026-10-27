
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"

class PickedUpLayerTypeFactory
            : public Object
         {

    private: static PickedUpLayerTypeFactory* instance() { static std::unique_ptr<PickedUpLayerTypeFactory> value(new PickedUpLayerTypeFactory()); return value.get(); }

    public: static PickedUpLayerTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PickedUpLayerTypeFactory::instance();
    
}


    public: PickedUpLayerType* NONE = new PickedUpLayerType(StringUtil::getInstance()->NULL_STRING);

    public: PickedUpLayerType* BEAM = new PickedUpLayerType("BEAM");

    public: PickedUpLayerType* MINE = new PickedUpLayerType("MINE");

    public: PickedUpLayerType* PROJECTILE = new PickedUpLayerType("PROJECTILE");

    public: PickedUpLayerType* ENHANCEMENT = new PickedUpLayerType("Enhancement");

    public: PickedUpLayerType* MORPH = new PickedUpLayerType("Morph");

    public: PickedUpLayerType* PART = new PickedUpLayerType("Part");

    public: PickedUpLayerType* HEAL = new PickedUpLayerType("Heal");

    public: PickedUpLayerType* LIFE = new PickedUpLayerType("Life");

    public: PickedUpLayerType* POINTS = new PickedUpLayerType("Points");

};

            

