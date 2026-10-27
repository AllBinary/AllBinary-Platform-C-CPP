
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/collision/Collision2DProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/collision/CollisionProcessor.h"


Collision2DProcessor::Collision2DProcessor() {
        }
        
    auto Collision2DProcessor::isCollision(AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) -> bool{

                        if(myLayer2->getXP() >= myLayer->getX2() || myLayer2->getYP() >= myLayer->getY2() || myLayer2->getX2() <= myLayer->getXP() || myLayer2->getY2() <= myLayer->getYP())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_COLLISION_COLLISION2DPROCESSOR_CPP
