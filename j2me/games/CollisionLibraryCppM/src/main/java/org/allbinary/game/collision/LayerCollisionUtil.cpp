
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
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/LayerCollisionUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollisionProcessor.h"
#include "org/allbinary/game/collision/Collision2DProcessor.h"
#include "org/allbinary/game/collision/CollisionThreedProcessor.h"

auto LayerCollisionUtil::instance_owner() -> LayerCollisionUtil* { static std::unique_ptr<LayerCollisionUtil> value(new LayerCollisionUtil()); return value.get(); }
LayerCollisionUtil* LayerCollisionUtil::instance = LayerCollisionUtil::instance_owner();

    auto LayerCollisionUtil::getInstance() -> LayerCollisionUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerCollisionUtil::instance;
    
}


LayerCollisionUtil::LayerCollisionUtil(){

    Features* features = Features::getInstance();;
    

    GameFeatureFactory* gameFeatureFactory = GameFeatureFactory::getInstance();;
    

                        if(OpenGLFeatureUtil::getInstance()->isAnyThreed() && !features->isFeature(gameFeatureFactory->COLLISIONS_FORCED_TWO_DIMENSIONAL))
                        
                                    {
                                    this->collisionProcessor= new CollisionThreedProcessor();
    

                                    }
                                
                        else {
                            this->collisionProcessor= new Collision2DProcessor();
    

                        }
                            
}


    auto LayerCollisionUtil::isCollision(AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->collisionProcessor->isCollision(myLayer, myLayer2);;
    
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_LAYERCOLLISIONUTIL_CPP
