
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
        



        #ifndef ORG_ALLBINARY_DIRECTION_DIRECTION_H
        #define ORG_ALLBINARY_DIRECTION_DIRECTION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Direction
            : public virtual Object
         {

    private: static std::vector<Direction*> directionArray;

    public: static Direction* getInstance(int32_t direction);

    private: std::string name;

    private: std::string otherName;

    private: int32_t value;

    private: int32_t frameFactor;

public: Direction(std::string name, std::string otherName, int32_t value, int32_t frameFactor);

    public: int32_t getValue();

    public: int32_t getFrameFactor();

    public: std::string getOtherName();

    public: std::string getName();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DIRECTION_DIRECTION_H_COMPLETE)
        #define ORG_ALLBINARY_DIRECTION_DIRECTION_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

        #endif
    
