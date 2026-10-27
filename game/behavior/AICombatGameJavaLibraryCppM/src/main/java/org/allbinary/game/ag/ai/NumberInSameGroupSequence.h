
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H
        #define ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class SmallIntegerSingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NumberInSameGroupSequence
            : public virtual Object
         {

    public: static NumberInSameGroupSequence* getInstance();

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_ZERO;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_ONE;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_TWO;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_THREE;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_FOUR;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_FIVE;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_SIX;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_SEVEN;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_EIGHT;

    public: int32_t NUMBER_ON_SAME_TEAM_SEQUENCE_NINE;

    public: std::vector<int32_t> NUMBER_ON_SAME_TEAM_SEQUENCE;

private: NumberInSameGroupSequence();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_NUMBERINSAMEGROUPSEQUENCE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif

        #endif
    
