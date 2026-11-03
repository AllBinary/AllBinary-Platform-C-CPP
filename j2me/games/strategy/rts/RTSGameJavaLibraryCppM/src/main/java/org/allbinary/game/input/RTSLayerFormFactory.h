
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class RTSLayer;
class ScrollSelectionForm;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/RTSLayerFormFactoryInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerFormFactory
            : public virtual Object
        , public virtual RTSLayerFormFactoryInterface {


            
    public: RTSLayerFormFactory();
        
    public: ScrollSelectionForm* getInstance(RTSLayer* rtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_RTSLAYERFORMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_RTSLAYERFORMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_RTSLAYERFORMFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include("org/allbinary/game/input/RTSLayerFormFactoryInterface.h")
#include "org/allbinary/game/input/RTSLayerFormFactoryInterface.h"
#endif

        #endif
    
