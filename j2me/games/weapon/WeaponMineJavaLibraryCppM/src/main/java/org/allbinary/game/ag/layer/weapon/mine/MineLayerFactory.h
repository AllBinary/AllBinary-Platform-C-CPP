
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
#include <org/allbinary/view/ViewPositionFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MineLayer.h"

class MineLayerFactory
            : public Object
        : public AllBinaryLayerFactoryInterface {

    private: ViewPositionFactoryInterface viewPositionFactoryInterface;

public: MineLayerFactory(ViewPositionFactoryInterface viewPositionFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H
