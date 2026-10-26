
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
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Dimension.h"
#include "Rectangle.h"

class MotionRectangleConstraints
            : public Object
        : public MotionRectangleConstraintsInterface {

    private: Dimension minDimension;

    private: Dimension maxDimension;

    private: int32_t maxMotionRectangles= 0;

    private: int32_t minArea= 0;

public: MotionRectangleConstraints(){
}


    public: Dimension getMinDimension(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minDimension;
    
}


    public: Dimension getMaxDimension(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxDimension;
    
}


    public: bool isTooSmall(Rectangle rectangle){

                        if(rectangle.width < this->getMinDimension().width || rectangle.height < this->getMinDimension().height)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: bool isAreaTooSmall(Rectangle rectangle){

                        if(rectangle.width *rectangle.height < this->getMinArea())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: bool isTooBig(Rectangle rectangle){

                        if(rectangle.width > this->getMaxDimension().width || rectangle.height > this->getMaxDimension().height)
                        
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
            
    public: bool isValid(Long frame, BufferedImage bufferedImage, Rectangle rectangle){



                            throw RuntimeException();
                    
}


    public: void setMinDimension(Dimension minDimension){
this->minDimension= minDimension;
    
}


    public: void setMaxDimension(Dimension maxDimension){
this->maxDimension= maxDimension;
    
}


    public: int32_t getMaxMotionRectangles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxMotionRectangles;
    
}


    public: void setMaxMotionRectangles(int32_t maxMotionRectangles){
this->maxMotionRectangles= maxMotionRectangles;
    
}


    public: int32_t getMinArea(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minArea;
    
}


    public: void setMinArea(int32_t minArea){
this->minArea= minArea;
    
}


};

            

