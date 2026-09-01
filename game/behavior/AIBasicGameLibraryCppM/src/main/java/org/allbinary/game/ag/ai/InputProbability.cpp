
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputProbability
            : public Object
         {

    public: static Integer INPUT_PROBABILITY = SmallIntegerSingletonFactory::getInstance().getAt(0);

    private: std::vector<std::vector<Integer>> likelyhoodIntegerArray;

    private: std::vector<Integer> repeatLikelyhoodIntegerArray;

    private: int32_t max;

    private: TimeDelayHelper timeDelayHelper;

public: InputProbability(std::vector<std::vector<Integer>> likelyhoodIntegerArray, std::vector<Integer> repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper timeDelayHelper){
this->likelyhoodIntegerArray= likelyhoodIntegerArray;
    
this->repeatLikelyhoodIntegerArray= repeatLikelyhoodIntegerArray;
    
this->max= max;
    
this->timeDelayHelper= timeDelayHelper;
    
}


    public: std::vector<std::vector<Integer>> getLikelyhoodIntegerArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->likelyhoodIntegerArray;
    
}


    public: std::vector<Integer> getRepeatLikelyhoodIntegerArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->repeatLikelyhoodIntegerArray;
    
}


    public: int32_t getMax(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->max;
    
}


    public: TimeDelayHelper getTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeDelayHelper;
    
}


    public: Hashtable<any, any> toHashtable(){

    Hashtable<any, any> hashtable = Hashtable<any, any>();;
    
hashtable.put(InputProbability::INPUT_PROBABILITY, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


};

            

