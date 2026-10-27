
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_POINTFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_POINTFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/Point.h"

class PointFactory
            : public Object
         {

    private: static inline std::vector<std::vector<Point*>> pointArray = std::vector<std::vector<Point*>>(3000, std::vector<Point*>(3000));

    public: static Point* getInstance(int32_t x, int32_t y);

private: PointFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_POINTFACTORY_H
