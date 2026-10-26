
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
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameFeatureImageCacheFactory.h"

class AnimationFrameToImageUtil
            : public Object
         {

    private: static AnimationFrameToImageUtil instance() { return AnimationFrameToImageUtil(); }

    public: static AnimationFrameToImageUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationFrameToImageUtil::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: Image getInstanceTranslate(int32_t width, int32_t height, Animation animationInterface){

    Image image = GameFeatureImageCacheFactory::getInstance().get(AnimationFrameToImageUtil::instance.constructor.name.toString(), ((width *3)>>1), ((height *3)>>1));;
    

    Graphics graphics = image.getGraphics();;
    

    int32_t tranlateX = (width>>2);;
    

    int32_t tranlateY = (height>>2);;
    
graphics.translate(tranlateX, tranlateY);
    
animationInterface.paintXY(graphics, 0, 0);
    
graphics.translate( -tranlateX,  -tranlateY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    public: Image getInstanceWH(int32_t width, int32_t height, Animation animationInterface){

    Image image = GameFeatureImageCacheFactory::getInstance().get(AnimationFrameToImageUtil::instance.constructor.name.toString(), width, height);;
    

    Graphics graphics = image.getGraphics();;
    
animationInterface.paintXY(graphics, 0, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


};

            

