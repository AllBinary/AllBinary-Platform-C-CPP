
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

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGraphicsPipeline.h"

class RandomRotationFactory
            : public Object
         {
        

    private: static const instance: RandomRotationFactory = new RandomRotationFactory();

    public static RandomRotationFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RandomRotationFactory.instance;
    
}


    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    private: const angleFactory: AngleFactory = AngleFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    public BasicArrayList getInstanceList(BasicArrayList vector, int32_t howMuch){

    graphicsPipe: BasicGraphicsPipeline = new BasicGraphicsPipeline(vector);;
    
graphicsPipe!.createMatrix();
    
graphicsPipe!.rotateToAngle(this.angleFactory!.getAt(this.getNextRandomAngle(howMuch)));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe!.getMatrix();;
    
}


    public int32_t getNextRandomAngle(int32_t howMuch){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.myRandomFactory!.getNextInt(howMuch *10);;
    
}


};

            

