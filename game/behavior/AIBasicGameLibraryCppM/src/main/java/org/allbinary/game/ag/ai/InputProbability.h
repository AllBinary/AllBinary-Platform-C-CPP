
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputProbability
            : public Object
         {
        

    public static INPUT_PROBABILITY: Integer = SmallIntegerSingletonFactory.getInstance()!.getAt(0)!;

    private: const likelyhoodIntegerArray: std::vector<std::vector<Integer>>;

    private: const repeatLikelyhoodIntegerArray: std::vector<Integer>;

    private: const max: int32_t;

    private: const timeDelayHelper: TimeDelayHelper;

public constructor (std::vector<std::vector<Integer>> likelyhoodIntegerArray, std::vector<Integer> repeatLikelyhoodIntegerArray, int32_t max, TimeDelayHelper timeDelayHelper);

    public std::vector<std::vector<Integer>> getLikelyhoodIntegerArray();

    public std::vector<Integer> getRepeatLikelyhoodIntegerArray();

    public int32_t getMax();

    public TimeDelayHelper getTimeDelayHelper();

    public Hashtable<any, any> toHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_INPUTPROBABILITY_H
