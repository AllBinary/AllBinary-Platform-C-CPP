
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H
        #define ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LevelLayersFinder
            : public Object
         {

    private: static LevelLayersFinder instance() { return LevelLayersFinder(); }

    public: static LevelLayersFinder getInstance();

    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    public: BasicArrayList get(Hashtable<any, any> hashtable);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H
