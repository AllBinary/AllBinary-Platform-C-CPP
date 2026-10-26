
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
        
#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointFactory.h"
#include "Point.h"
#include "Rectangle.h"

class PointHelper
            : public Object
         {

    private: static const double two = 2;

    public: static Point getCenterPoint(Rectangle rectangle){

    double x = rectangle.getX() +rectangle.getWidth() /PointHelper::two;;
    

    double y = rectangle.getY() +rectangle.getHeight() /PointHelper::two;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointFactory::getInstance(static_cast<int32_t>(x), static_cast<int32_t>(y));;
    
}


public: PointHelper(){
}


};

            

