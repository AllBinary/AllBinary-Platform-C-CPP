
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CountedPickedUpLayerInterfaceFactoryPool
            : public Object
         {
        

    private: static SINGLETON: CountedPickedUpLayerInterfaceFactoryPool = new CountedPickedUpLayerInterfaceFactoryPool();

    public static CountedPickedUpLayerInterfaceFactoryPool getInstance();

    public static init();

    private: list: BasicArrayList;

private constructor ();

    public BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYPOOL_H
