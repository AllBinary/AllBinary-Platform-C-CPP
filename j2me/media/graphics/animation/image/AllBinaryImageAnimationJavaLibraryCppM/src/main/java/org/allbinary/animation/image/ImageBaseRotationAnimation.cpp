
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
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/DisposalUtil.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageBaseRotationAnimation: public RotationAnimation {

    private: Image image;

public: ImageBaseRotationAnimation(Image image, AngleInfo angleInfo, int16_t totalAngle, AnimationBehavior animationBehavior) : RotationAnimation(angleInfo, CircularIndexUtil::createInstance(totalAngle /angleInfo.getAngleIncrementInfo().getAngleIncrement()), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->image= image;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    protected: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
graphics.drawImage(this->image, x, y, this->anchor);
    
}


    protected: Image getImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->image;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->image.getWidth();;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->image.getHeight();;
    
}


    public: void close(){
DisposalUtil::getInstance().disposeImage(this->image);
    
}


                //@Throws(Throwable.constructor)
            
    protected: void finalize(){
DisposalUtil::getInstance().disposeImage(this->image);
    
}


};

            

