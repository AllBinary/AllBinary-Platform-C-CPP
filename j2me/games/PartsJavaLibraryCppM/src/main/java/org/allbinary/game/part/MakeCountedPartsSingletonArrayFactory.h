
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H
        #define ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>

      
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CountedLayerInterfaceFactoryPart.h"
#include "PartInterface.h"

class MakeCountedPartsSingletonArrayFactory
            : public Object
         {

    private: static MakeCountedPartsSingletonArrayFactory instance() { return MakeCountedPartsSingletonArrayFactory(); }

    public: static MakeCountedPartsSingletonArrayFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicArrayList list = BasicArrayListUtil::getInstance().getImmutableInstance();

                //@Throws(Exception.constructor)
            
    public: std::vector<PartInterface> getUpdated(std::vector<PartInterface> partInterfaceArray);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H
