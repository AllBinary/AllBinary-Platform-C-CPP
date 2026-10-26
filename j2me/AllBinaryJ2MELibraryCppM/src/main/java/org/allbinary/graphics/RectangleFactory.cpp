
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Rectangle.h"
#include "PointFactory.h"

class RectangleFactory
            : public Object
         {

    public: static const Rectangle SINGLETON = Rectangle(PointFactory::getInstance().ZERO_ZERO, 0, 0);

    public: static const std::vector<std::vector<Rectangle>> ARRAY_OF_ARRAYS = std::vector<std::vector<Rectangle>>(0, std::vector<Rectangle>(0));

};

            

