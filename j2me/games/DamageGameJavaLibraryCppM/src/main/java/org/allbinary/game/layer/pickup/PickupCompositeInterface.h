
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PickupBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickupCompositeInterface
            : public virtual Object
         {

    public: virtual PickupBehavior* getPickupBehavior() = 0;

    public: virtual void setPickupBehavior(PickupBehavior* pickupBehavior) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/game/layer/pickup/PickupBehavior.h")
#include "org/allbinary/game/layer/pickup/PickupBehavior.h"
#endif

        #endif
    
