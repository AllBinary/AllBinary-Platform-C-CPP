
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Cloneable.h"
        
#include <java/awt.h>

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Rectangle.h"

class MotionRectangle
            : public Object
        : public Cloneable {

    private: Rectangle rectangle;

    private: Vector pixelDeltaVector;

public: MotionRectangle(Rectangle rectangle){
this->setRectangle(rectangle);
    
this->setPixelDeltaVector(Vector());
    
}


    public: Rectangle getRectangle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangle;
    
}


    public: void setRectangle(Rectangle rectangle){
this->rectangle= rectangle;
    
}


    public: Vector getPixelDeltaVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pixelDeltaVector;
    
}


    public: void setPixelDeltaVector(Vector pixelDeltaVector){
this->pixelDeltaVector= pixelDeltaVector;
    
}


    public: Object* clone(){

    MotionRectangle motionRectangle = MotionRectangle(this->getRectangle().clone() as Rectangle);;
    
motionRectangle.setPixelDeltaVector(this->getPixelDeltaVector().clone() as Vector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return motionRectangle;
    
}


};

            

