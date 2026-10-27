
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
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"

class MotionRectanglesResultsEvent: public AllBinaryEventObject {

    private: int64_t frame;

    private: MotionRectangles* motionRectangles;

public: MotionRectanglesResultsEvent(Object* anyType, int64_t frame, MotionRectangles* motionRectangles) : AllBinaryEventObject(anyType){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->frame= frame;
    
this->setMotionRectangles(motionRectangles);
    
}


    public: MotionRectangles* getMotionRectangles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectangles;
    
}


    public: void setMotionRectangles(MotionRectangles* motionRectangles){
this->motionRectangles= motionRectangles;
    
}


    public: int64_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->frame;
    
}


};

            

