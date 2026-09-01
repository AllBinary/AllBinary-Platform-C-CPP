
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RectangleResourceFactoryInterface {

                //@Throws(Exception.constructor)
            
    Rectangle getRectangle(std::string resource);

                //@Throws(Exception.constructor)
            
    std::vector<std::vector<Rectangle>> getRectangleArrayOfArrays(std::string resource);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RECTANGLERESOURCEFACTORYINTERFACE_H
