
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H
        #define ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class StdUtil;
class SmallIntegerSingletonFactory;
class TimeDelayHelper;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputProbability
            : public virtual Object
         {

    public: static int32_t INPUT_PROBABILITY;

    private: std::vector<std::vector<int32_t>> likelyhoodIntegerArray;

    private: std::vector<int32_t> repeatLikelyhoodIntegerArray;

    private: int32_t max;

    private: TimeDelayHelper* timeDelayHelper;

public: InputProbability(std::vector<std::vector<int32_t>> likelyhoodIntegerArray, std::vector<int32_t> repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper* timeDelayHelper);

    public: std::vector<std::vector<int32_t>> getLikelyhoodIntegerArray();

    public: std::vector<int32_t> getRepeatLikelyhoodIntegerArray();

    public: int32_t getMax();

    public: TimeDelayHelper* getTimeDelayHelper();

    public: ABHashtable<Object*, Object*>* toHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
