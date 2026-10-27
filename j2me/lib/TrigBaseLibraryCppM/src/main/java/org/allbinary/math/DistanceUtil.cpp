
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/math/MathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DistanceUtil
            : public Object
         {

    private: static DistanceUtil* instance() { static std::unique_ptr<DistanceUtil> value(new DistanceUtil()); return value.get(); }

    public: static DistanceUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DistanceUtil::instance();
    
}


    private: MathUtil* mathUtil = MathUtil::getInstance();

    public: int32_t getDistance(int32_t x1, int32_t y1, int32_t x2, int32_t y2){

    int32_t dx = x1 -x2;;
    

    int32_t dy = y1 -y2;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this->mathUtil->sqrt((dx *dx) +(dy *dy)));
    
}


};

            

