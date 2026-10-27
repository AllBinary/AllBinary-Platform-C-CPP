
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/InputProbability.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
int32_t InputProbability::INPUT_PROBABILITY = SmallIntegerSingletonFactory::getInstance()->getAt(0);

InputProbability::InputProbability(std::vector<std::vector<int32_t>> likelyhoodIntegerArray, std::vector<int32_t> repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper){
this->likelyhoodIntegerArray= likelyhoodIntegerArray;
    
this->repeatLikelyhoodIntegerArray= repeatLikelyhoodIntegerArray;
    
this->max= max;
    
this->timeDelayHelper= timeDelayHelper;
    
}


    auto InputProbability::getLikelyhoodIntegerArray() -> std::vector<std::vector<int32_t>>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->likelyhoodIntegerArray;
    
}


    auto InputProbability::getRepeatLikelyhoodIntegerArray() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->repeatLikelyhoodIntegerArray;
    
}


    auto InputProbability::getMax() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->max;
    
}


    auto InputProbability::getTimeDelayHelper() -> TimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeDelayHelper;
    
}


    auto InputProbability::toHashtable() -> ABHashtable<Object*, Object*>*{

    ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();;
    
hashtable->put(InputProbability::INPUT_PROBABILITY, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_CPP
