
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryLayer;
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>
class ViewPositionFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MineLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MineLayerFactory
            : public virtual Object
        , public AllBinaryLayerFactoryInterface {

    private: ViewPositionFactoryInterface* viewPositionFactoryInterface;

public: MineLayerFactory(ViewPositionFactoryInterface* viewPositionFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer* getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerFactoryInterface.h>)
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionFactoryInterface.h>)
#include <org/allbinary/view/ViewPositionFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/ag/layer/weapon/mine/MineLayer.h")
#include "org/allbinary/game/ag/layer/weapon/mine/MineLayer.h"
#endif

        #endif
    
