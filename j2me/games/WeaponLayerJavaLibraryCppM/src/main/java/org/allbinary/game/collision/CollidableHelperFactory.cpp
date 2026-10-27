
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/SourceCollisionHelper.h"
#include "org/allbinary/game/collision/CollisionHelper.h"

class CollidableHelperFactory
            : public Object
         {

    public: static CollisionHelper* getInstance(){

                        if(Features::getInstance()->isFeature(GameFeatureFactory::getInstance()->COLLISIONS_WITH_SOURCE))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CollisionHelper(AllBinaryLayer::NULL_ALLBINARY_LAYER);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new SourceCollisionHelper(AllBinaryLayer::NULL_ALLBINARY_LAYER);
    

                        }
                            
}


};

            

