
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/PointFactory.h"

class RectangleFactory
            : public Object
         {

    public: static Rectangle* SINGLETON() { static std::unique_ptr<Rectangle> value(new Rectangle(PointFactory::getInstance()->ZERO_ZERO, 0, 0)); return value.get(); }

    public: static inline const std::vector<std::vector<Rectangle*>> ARRAY_OF_ARRAYS = std::vector<std::vector<Rectangle*>>(0, std::vector<Rectangle*>(0));

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_RECTANGLEFACTORY_H
