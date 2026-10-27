
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H
        #define ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CollidableBaseBehavior;
class CollidableInterfaceCompositeInterface;
class CollidableCompositeLayer;
class LayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryCollisionManager
            : public virtual Object
         {

    private: static AllBinaryCollisionManager* allBinaryCollisionManager_owner();
    private: static AllBinaryCollisionManager* allBinaryCollisionManager;

    public: static AllBinaryCollisionManager* getInstance();

private: AllBinaryCollisionManager();

                //@Throws(Exception.constructor)
            
    public: void process(LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, int32_t startIndex);

                //@Throws(Exception.constructor)
            
    private: void collide(LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2);

};

            


        #endif //ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COLLISION_LAYER_ALLBINARYCOLLISIONMANAGER_H_COMPLETE
        #if __has_include(<org/allbinary/game/collision/CollidableBaseBehavior.h>)
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>
#endif
#if __has_include(<org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>)
#include <org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/layer/LayerManager.h>)
#include <org/allbinary/layer/LayerManager.h>
#endif

        #endif
    
