
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

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/LeftToRightImageAnimation.h"
#include "org/allbinary/animation/image/AdjustedLeftToRightImageAnimation.h"

class LeftToRightImageAnimationFactory: public BaseImageAnimationFactory {

public: LeftToRightImageAnimationFactory(Image* image, std::vector<int32_t> sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, sequenceArray, image->getWidth(), image->getHeight(), dx, dy, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){

    Image* scaledImage = this->animationFactoryImageScaleUtil.createImage(this->getImage(), this->animationFactoryInitializationVisitor.width, this->animationFactoryInitializationVisitor.height, this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);;
    

                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    this->animationFactoryImageScaleUtil.processAdjust(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AdjustedLeftToRightImageAnimation(scaledImage, this->getSequenceArray(), this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new LeftToRightImageAnimation(scaledImage, this->getSequenceArray(), this->animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


};

            

