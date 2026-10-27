
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Cloneable.h"
        
#include <java/awt/Rectangle.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionRectangle
            : public Object
        , public Cloneable {

    private: Rectangle* rectangle;

    private: BasicArrayList* pixelDeltaVector;

public: MotionRectangle(Rectangle* rectangle){
this->setRectangle(rectangle);
    
this->setPixelDeltaVector(new BasicArrayListD());
    
}


    public: Rectangle* getRectangle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangle;
    
}


    public: void setRectangle(Rectangle* rectangle){
this->rectangle= rectangle;
    
}


    public: BasicArrayList* getPixelDeltaVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pixelDeltaVector;
    
}


    public: void setPixelDeltaVector(BasicArrayList* pixelDeltaVector){
this->pixelDeltaVector= pixelDeltaVector;
    
}


    public: Object* clone(){

    MotionRectangle* motionRectangle = new MotionRectangle(dynamic_cast<Rectangle*>(this->getRectangle()->clone()));;
    
motionRectangle->setPixelDeltaVector(dynamic_cast<BasicArrayList*>(this->getPixelDeltaVector()->clone()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return motionRectangle;
    
}


};

            

