
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RTSLAYERFORMFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_RTSLAYERFORMFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayerFormFactoryInterface.h"

class RTSLayerFormFactory
            : public Object
        : public RTSLayerFormFactoryInterface {

    public: ScrollSelectionForm getInstance(RTSLayer rtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_RTSLAYERFORMFACTORY_H
