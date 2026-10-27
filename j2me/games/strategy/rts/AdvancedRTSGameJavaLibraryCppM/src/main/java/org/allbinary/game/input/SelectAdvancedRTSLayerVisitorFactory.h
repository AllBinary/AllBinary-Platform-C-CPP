
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITORFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Visitor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
class SelectAdvancedRTSLayerVisitor;
class SelectedRTSLayersPlayerGameInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectAdvancedRTSLayerVisitorFactory
            : public virtual Object
        , public SelectRTSLayerVisitorFactoryInterface {

    private: static SelectAdvancedRTSLayerVisitorFactory* instance_owner();
    private: static SelectAdvancedRTSLayerVisitorFactory* instance;

    public: static SelectAdvancedRTSLayerVisitorFactory* getInstance();

private: SelectAdvancedRTSLayerVisitorFactory();

    public: Visitor* create(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITORFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include("org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h")
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/input/SelectAdvancedRTSLayerVisitor.h")
#include "org/allbinary/game/input/SelectAdvancedRTSLayerVisitor.h"
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"
#endif

        #endif
    
