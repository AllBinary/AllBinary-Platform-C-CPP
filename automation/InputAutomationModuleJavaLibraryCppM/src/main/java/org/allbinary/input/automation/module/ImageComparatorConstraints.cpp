
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/collision/RectangleCollisionUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"
#include "Rectangle.h"

class ImageComparatorConstraints
            : public Object
        : public ImageComparatorConstraintsInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Vector avoidVector;

    private: int32_t maxNonMatchingPixelDeltas= 0;

    private: int32_t doImageComparisonEveryNthFrame;

public: ImageComparatorConstraints(int32_t doImageComparisonEveryNthFrame){
this->doImageComparisonEveryNthFrame= doImageComparisonEveryNthFrame;
    
this->setAvoidVector(Vector());
    
}


    public: Vector getAvoidVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->avoidVector;
    
}


    public: bool isColorAllowed(int32_t frame, GPoint point, Color color){



                            throw RuntimeException();
                    
}


    public: bool isCollisionWithAvoidRectangles(Rectangle rectangle){

    bool isCollsionWithAvoidRectangles = false;;
    

    Vector avoidVector = this->getAvoidVector();;
    

    int32_t size = avoidVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Rectangle avoidRectangle = avoidVector.get(index) as Rectangle;;
    

                        if(RectangleCollisionUtil::isCollision(avoidRectangle, rectangle))
                        
                                    {
                                    isCollsionWithAvoidRectangles= true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isCollsionWithAvoidRectangles;
    
}


    public: bool isCollisionWithAvoidRectangles(GPoint point){

    bool isCollsionWithAvoidRectangles = false;;
    

    Vector avoidVector = this->getAvoidVector();;
    

    int32_t size = avoidVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Rectangle avoidRectangle = avoidVector.get(index) as Rectangle;;
    

                        if(RectangleCollisionUtil::isCollision(avoidRectangle, point))
                        
                                    {
                                    isCollsionWithAvoidRectangles= true;
    
break;

                    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isCollsionWithAvoidRectangles;
    
}


    public: void setAvoidVector(Vector avoidVector){
this->avoidVector= avoidVector;
    
}


    public: int32_t getMaxNonMatchingPixelDeltas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxNonMatchingPixelDeltas;
    
}


    public: void setMaxNonMatchingPixelDeltas(int32_t maxNonMatchingPixelDeltas){
this->maxNonMatchingPixelDeltas= maxNonMatchingPixelDeltas;
    
}


    public: bool isFrameAllowed(int32_t frame){

    int32_t remainder = ((frame +1) % this->doImageComparisonEveryNthFrame);;
    
this->logUtil.putF(" Frame: " +frame +" remainder: " +remainder +" this.doImageComparisonEveryNthFrame: " +this->doImageComparisonEveryNthFrame, this, "isCollisionWithAvoidRectangles");
    

                        if(remainder == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: bool isImageValid(BufferedImage bufferedImage){



                            throw RuntimeException();
                    
}


    public: void log(){

    Vector avoidVector = this->getAvoidVector();;
    

    int32_t size = avoidVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Rectangle avoidRectangle = avoidVector.get(index) as Rectangle;;
    
this->logUtil.putF("Avoid Rectangle: " +avoidRectangle, this, "log");
    
}

}


};

            

