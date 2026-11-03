
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_MOTIONRECTANGLECONSTRAINTS_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_MOTIONRECTANGLECONSTRAINTS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/MotionRectangleConstraints.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/Dimension.h"
#include "org/allbinary/input/automation/module/Rectangle.h"


MotionRectangleConstraints::MotionRectangleConstraints(){
}


    auto MotionRectangleConstraints::getMinDimension() -> Dimension*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minDimension;
    
}


    auto MotionRectangleConstraints::getMaxDimension() -> Dimension*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxDimension;
    
}


    auto MotionRectangleConstraints::isTooSmall(Rectangle* rectangle) -> bool{

                        if(rectangle->width < this->getMinDimension()->width || rectangle->height < this->getMinDimension()->height)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto MotionRectangleConstraints::isAreaTooSmall(Rectangle* rectangle) -> bool{

                        if(rectangle->width *rectangle->height < this->getMinArea())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto MotionRectangleConstraints::isTooBig(Rectangle* rectangle) -> bool{

                        if(rectangle->width > this->getMaxDimension()->width || rectangle->height > this->getMaxDimension()->height)
                        
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
            
    auto MotionRectangleConstraints::isValid(int64_t frame, BufferedImage* bufferedImage, Rectangle* rectangle) -> bool{



                            throw RuntimeException();
                    
}


    auto MotionRectangleConstraints::setMinDimension(Dimension* minDimension) -> void{
this->minDimension= minDimension;
    
}


    auto MotionRectangleConstraints::setMaxDimension(Dimension* maxDimension) -> void{
this->maxDimension= maxDimension;
    
}


    auto MotionRectangleConstraints::getMaxMotionRectangles() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->maxMotionRectangles;
    
}


    auto MotionRectangleConstraints::setMaxMotionRectangles(int32_t maxMotionRectangles) -> void{
this->maxMotionRectangles= maxMotionRectangles;
    
}


    auto MotionRectangleConstraints::getMinArea() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->minArea;
    
}


    auto MotionRectangleConstraints::setMinArea(int32_t minArea) -> void{
this->minArea= minArea;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_MOTIONRECTANGLECONSTRAINTS_CPP
