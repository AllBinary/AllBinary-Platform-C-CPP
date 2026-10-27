
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_RECTANGLERESOURCEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_GAME_RESOURCE_RECTANGLERESOURCEFACTORYINTERFACE_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RectangleResourceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: virtual Rectangle* getRectangle(std::string resource) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::vector<std::vector<Rectangle*>> getRectangleArrayOfArrays(std::string resource) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RECTANGLERESOURCEFACTORYINTERFACE_H
