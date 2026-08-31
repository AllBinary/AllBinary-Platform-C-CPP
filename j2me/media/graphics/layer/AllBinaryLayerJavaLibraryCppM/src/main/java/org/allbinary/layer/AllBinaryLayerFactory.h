
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
        



        #ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryLayerFactoryInterface.h"
#include "AllBinaryLayer.h"

class AllBinaryLayerFactory
            : public Object
        : public AllBinaryLayerFactoryInterface {
        

    private: const rectangle: Rectangle;

public constructor (Rectangle rectangle);

    public AllBinaryLayer getInstance();

};

            


        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H
