
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

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Direction
            : public Object
         {
        

    private: static directionArray: std::vector<Direction> = new Array(13);

    public static Direction getInstance(int32_t direction);

    private: name: string;

    private: otherName: string;

    private: value: int32_t;

    private: frameFactor: int32_t;

 constructor (string name, string otherName, int32_t value, int32_t frameFactor);

    public int32_t getValue();

    public int32_t getFrameFactor();

    public string getOtherName();

    public string getName();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTION_H
