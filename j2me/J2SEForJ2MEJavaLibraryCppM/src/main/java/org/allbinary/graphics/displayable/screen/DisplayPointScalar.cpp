
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisplayPointScalar
            : public Object
         {

    private: static DisplayPointScalar* instance() { static std::unique_ptr<DisplayPointScalar> value(new DisplayPointScalar()); return value.get(); }

    public: static DisplayPointScalar* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplayPointScalar::instance();
    
}


public: DisplayPointScalar(){
}


    public: int32_t processX(int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    public: int32_t processY(int32_t value){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    public: GPoint* process(GPoint* point){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}


};

            

