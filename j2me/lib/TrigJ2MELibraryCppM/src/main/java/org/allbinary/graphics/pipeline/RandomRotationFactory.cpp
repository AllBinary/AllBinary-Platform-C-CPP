
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/pipeline/RandomRotationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"


RandomRotationFactory::RandomRotationFactory() : myRandomFactory(MyRandomFactory::getInstance()), angleFactory(AngleFactory::getInstance()) {
        }
        auto RandomRotationFactory::instance_owner() -> RandomRotationFactory* { static std::unique_ptr<RandomRotationFactory> value(new RandomRotationFactory()); return value.get(); }
RandomRotationFactory* RandomRotationFactory::instance = RandomRotationFactory::instance_owner();

    auto RandomRotationFactory::getInstance() -> RandomRotationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RandomRotationFactory::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto RandomRotationFactory::getInstanceList(BasicArrayList* vector, int32_t howMuch) -> BasicArrayList*{

    BasicGraphicsPipeline* graphicsPipe = new BasicGraphicsPipeline(vector);;
    
graphicsPipe->createMatrix();
    
graphicsPipe->rotateToAngle(this->angleFactory->getAt(this->getNextRandomAngle(howMuch)));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe->getMatrix();;
    
}


    auto RandomRotationFactory::getNextRandomAngle(int32_t howMuch) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->myRandomFactory->getNextInt(howMuch *10);;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_CPP
