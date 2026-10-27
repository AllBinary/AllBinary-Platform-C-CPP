
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"

class RandomTranslation
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* getInstance(BasicArrayList* vector, int32_t howMuch){

    MyRandomFactory* myRandomFactory = MyRandomFactory::getInstance();;
    

    int32_t x =  -myRandomFactory->getNextInt(howMuch);;;
    

    int32_t y = myRandomFactory->getNextInt(howMuch);;
    

    BasicGraphicsPipeline* graphicsPipe = new BasicGraphicsPipeline(vector);;
    
graphicsPipe->createMatrix();
    
graphicsPipe->translate(x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe->getMatrix();;
    
}


};

            

