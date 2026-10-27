
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
        #define ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/BasicDecimal.h"

class Orientation
            : public Object
         {

    public: static Orientation* NONE() { static std::unique_ptr<Orientation> value(new Orientation(0, 0, 0)); return value.get(); }

    private: static Orientation* SINGLETON() { static std::unique_ptr<Orientation> value(new Orientation(0, 0, 0)); return value.get(); }

    public: static Orientation* getInstance(int32_t yaw, int32_t pitch, int32_t roll);

    public: BasicDecimal* yaw = new BasicDecimal(0);

    public: BasicDecimal* pitch = new BasicDecimal(0);

    public: BasicDecimal* roll = new BasicDecimal(0);

private: Orientation(int32_t yaw, int32_t pitch, int32_t roll);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_ORIENTATION_H
