
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORYINTERFACE_H
        #define ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Visitor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SelectedRTSLayersPlayerGameInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectRTSLayerVisitorFactoryInterface
            : public virtual Object
         {

    public: virtual Visitor* create(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"
#endif

        #endif
    
