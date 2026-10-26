
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollisionProcessor.h"
#include "Collision2DProcessor.h"
#include "CollisionThreedProcessor.h"

class LayerCollisionUtil
            : public Object
         {

    private: static LayerCollisionUtil instance() { return LayerCollisionUtil(); }

    public: static LayerCollisionUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerCollisionUtil::instance();
    
}


    private: const CollisionProcessor collisionProcessor;

private: LayerCollisionUtil(){

    Features features = Features::getInstance();;
    

    GameFeatureFactory gameFeatureFactory = GameFeatureFactory::getInstance();;
    

                        if(OpenGLFeatureUtil::getInstance().isAnyThreed() && !features.isFeature(gameFeatureFactory.COLLISIONS_FORCED_TWO_DIMENSIONAL))
                        
                                    {
                                    this->collisionProcessor= CollisionThreedProcessor();
    

                                    }
                                
                        else {
                            this->collisionProcessor= Collision2DProcessor();
    

                        }
                            
}


    public: bool isCollision(AllBinaryLayer myLayer, AllBinaryLayer myLayer2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->collisionProcessor.isCollision(myLayer, myLayer2);;
    
}


};

            

