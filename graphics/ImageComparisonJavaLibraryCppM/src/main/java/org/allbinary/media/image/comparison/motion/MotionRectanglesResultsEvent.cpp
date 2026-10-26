
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
        



            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"

class MotionRectanglesResultsEvent: public AllBinaryEventObject {

    private: Long frame;

    private: MotionRectangles motionRectangles;

public: MotionRectanglesResultsEvent(Object* anyType, Long frame, MotionRectangles motionRectangles) : AllBinaryEventObject(anyType){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->frame= frame;
    
this->setMotionRectangles(motionRectangles);
    
}


    public: MotionRectangles getMotionRectangles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectangles;
    
}


    public: void setMotionRectangles(MotionRectangles motionRectangles){
this->motionRectangles= motionRectangles;
    
}


    public: Long getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


};

            

