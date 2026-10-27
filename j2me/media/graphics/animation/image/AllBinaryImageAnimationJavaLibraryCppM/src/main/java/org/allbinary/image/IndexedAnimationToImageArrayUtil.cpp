
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/AnimationFrameToImageUtil.h"

class IndexedAnimationToImageArrayUtil
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static std::vector<Image*> getInstance(int32_t width, int32_t height, IndexedAnimation* sequentialAnimationInterface){

    int32_t size = sequentialAnimationInterface->getAnimationSize();;
    

    std::vector<Image*> imageArray = std::vector<Image*>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
sequentialAnimationInterface->setFrame(index);
    
imageArray[index]= AnimationFrameToImageUtil::getInstance().getInstanceWH(width, height, sequentialAnimationInterface);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageArray;
    
}


};

            

