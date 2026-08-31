
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H

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

    public static RandomRotationFactory getInstance();

    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    private: const angleFactory: AngleFactory = AngleFactory.getInstance()!;

                //@Throws(Exception.constructor)
            
    public BasicArrayList getInstanceList(BasicArrayList vector, int32_t howMuch);

    public int32_t getNextRandomAngle(int32_t howMuch);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H
