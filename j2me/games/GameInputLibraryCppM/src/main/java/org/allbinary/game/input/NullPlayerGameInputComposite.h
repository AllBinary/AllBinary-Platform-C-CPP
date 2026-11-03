
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H
        #define ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryLayerManager;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
class NoPlayerGameInput;
class PlayerGameInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullPlayerGameInputComposite
            : public virtual Object
        , public virtual PlayerGameInputCompositeInterface {

    private: static NullPlayerGameInputComposite* NULL_PLAYER_GAME_INPUT_COMPOSITE_owner();
    public: static NullPlayerGameInputComposite* NULL_PLAYER_GAME_INPUT_COMPOSITE;


            
    public: NullPlayerGameInputComposite();
        
    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager);

    public: void initInputProcessors();

    public: PlayerGameInput* getPlayerGameInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInputCompositeInterface.h")
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#endif
#if __has_include("org/allbinary/game/input/NoPlayerGameInput.h")
#include "org/allbinary/game/input/NoPlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInput.h")
#include "org/allbinary/game/input/PlayerGameInput.h"
#endif

        #endif
    
