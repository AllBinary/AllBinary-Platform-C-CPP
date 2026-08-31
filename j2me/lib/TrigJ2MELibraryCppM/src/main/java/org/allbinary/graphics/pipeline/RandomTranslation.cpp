
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGraphicsPipeline.h"

class RandomTranslation
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static BasicArrayList getInstance(BasicArrayList vector, int32_t howMuch){

    myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;;
    

    x: int32_t =  -myRandomFactory!.getNextInt(howMuch);;;
    

    y: int32_t = myRandomFactory!.getNextInt(howMuch)!;;
    

    graphicsPipe: BasicGraphicsPipeline = new BasicGraphicsPipeline(vector);;
    
graphicsPipe!.createMatrix();
    
graphicsPipe!.translate(x, y);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe!.getMatrix();;
    
}


};

            

