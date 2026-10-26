
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
        



            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/input/automation/module/ImageComparatorConstraints.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"

class NoImageComparatorConstraints: public ImageComparatorConstraints {

public: NoImageComparatorConstraints() : ImageComparatorConstraints(1){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setMaxNonMatchingPixelDeltas(.MAX_VALUE());
    
}


    public: bool isColorAllowed(int32_t frame, GPoint point, Color color){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool isImageValid(BufferedImage bufferedImage){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

