
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
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationInterface.h>

      
#include <org/allbinary/game/health/HealthInterface.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HealthGraphic.h"

class ImageHealthGraphic: public HealthGraphic {

    private: std::vector<Image> image;

public: ImageHealthGraphic(AnimationInterface animationInterface, HealthInterface healthInterface, int32_t location, int32_t direction){
            super(animationInterface, healthInterface, location, direction);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->image= new Array(this->healthInterface.getMaxHealth());
    

    ImageCacheFactory imageCacheFactory = ImageCacheFactory::getInstance();;
    




                        for (
    int32_t numOfHealth = 0;numOfHealth <= max; numOfHealth++)
        {
this->image[numOfHealth]= imageCacheFactory.get(this, numOfHealth +1 *10, 10);
    
}





                        for (
    int32_t numOfHealth = 0;numOfHealth <= max; numOfHealth++)
        {




                        for (
    int32_t index = 0;index < numOfHealth; index++)
        {
this->animationInterface.paint(this->image[numOfHealth]!.getGraphics(), numOfHealth *10, 0);
    
}

}

}


    public: void paint(Graphics graphics){
graphics.drawImage(this->image[max]!, x, y, Anchor::TOP_LEFT);
    
}


};

            

