
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LapInfo
            : public virtual Object
         {

    private: static LapInfo* NULL_LAP_INFO_owner();
    public: static LapInfo* NULL_LAP_INFO;

    private: int32_t numberOfLaps;

    private: int32_t totalLaps;

public: LapInfo(int32_t totalLaps);

    public: void add();

    public: int32_t getCurrentLap();

    public: int32_t getTotalLaps();

    public: bool isDone();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_HUD_LAPINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
