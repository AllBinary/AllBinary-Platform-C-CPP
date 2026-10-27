
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_H
        #define ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GenericTrackingLayerCircularStaticPool: public AllBinaryLayerCircularPool {

    private: static GenericTrackingLayerCircularStaticPool* SINGLETON() { static std::unique_ptr<GenericTrackingLayerCircularStaticPool> value(new GenericTrackingLayerCircularStaticPool()); return value.get(); }

    public: static GenericTrackingLayerCircularStaticPool* getInstance();

private: GenericTrackingLayerCircularStaticPool();

};

            


        #endif //ORG_ALLBINARY_GAME_TRACKING_GENERICTRACKINGLAYERCIRCULARSTATICPOOL_H
