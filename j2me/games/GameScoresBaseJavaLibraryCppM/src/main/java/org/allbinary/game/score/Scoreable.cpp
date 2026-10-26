
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
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScoreableInterface.h"

class Scoreable
            : public Object
        : public ScoreableInterface {

    public: static Integer ID = SmallIntegerSingletonFactory::getInstance().getAt(3);

    private: int32_t points;

public: Scoreable(int32_t points){
this->points= points;
    
}


    public: void addPoints(int32_t points){
this->points += points;
    
}


    public: void removePoints(int32_t points){
this->points -= points;
    
}


    protected: void setPoints(int32_t points){
this->points= points;
    
}


    public: int32_t getPoints(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->points;
    
}


};

            

