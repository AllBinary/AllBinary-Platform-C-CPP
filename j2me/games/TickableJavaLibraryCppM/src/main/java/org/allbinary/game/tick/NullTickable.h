
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
        



        #ifndef ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H
        #define ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TickableInterface.h"

class NullTickable
            : public Object
        : public TickableInterface {

    private: static const NullTickable SINGLETON = NullTickable();

    public: static NullTickable getInstance();

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager);

    private: const std::string NAME = "NulLTickable";

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_H
