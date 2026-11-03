
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PickedUpLayerInterface;
#include <org/allbinary/layer/LayerInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DropLayerInterface: public virtual LayerInterface {

                //@Throws(Exception.constructor)
            
    public: virtual PickedUpLayerInterface* getDroppedLayer() = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/pickup/PickedUpLayerInterface.h>)
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterface.h>
#endif
#if __has_include(<org/allbinary/layer/LayerInterface.h>)
#include <org/allbinary/layer/LayerInterface.h>
#endif

        #endif
    
