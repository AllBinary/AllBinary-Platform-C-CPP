
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Direction
            : public Object
         {

    private: static std::vector<Direction> directionArray = std::vector<Direction>(13);

    public: static Direction getInstance(int32_t direction);

    private: std::string name;

    private: std::string otherName;

    private: int32_t value;

    private: int32_t frameFactor;

: Direction(std::string name, std::string otherName, int32_t value, int32_t frameFactor);

    public: int32_t getValue();

    public: int32_t getFrameFactor();

    public: std::string getOtherName();

    public: std::string getName();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTION_H
