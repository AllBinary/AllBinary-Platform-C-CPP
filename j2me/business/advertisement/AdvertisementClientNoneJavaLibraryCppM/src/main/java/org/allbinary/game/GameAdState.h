
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMEADSTATE_H
        #define ORG_ALLBINARY_GAME_GAMEADSTATE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/advertisement/GameAdStateBase.h>
class AdConfiguration;
class VirtualKeyboardEvent;
class VirtualKeyboardEventHandler;
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameAdState: public GameAdStateBase, public VirtualKeyboardEventListenerInterface {

public: GameAdState(AdConfiguration* adConfiguration);

                //@Throws(Exception.constructor)
            
    public: void onVirtualKeyboardEvent(VirtualKeyboardEvent* virtualKeyboardEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_GAMEADSTATE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GAMEADSTATE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GAMEADSTATE_H_COMPLETE
        #if __has_include(<org/allbinary/business/advertisement/GameAdStateBase.h>)
#include <org/allbinary/business/advertisement/GameAdStateBase.h>
#endif
#if __has_include(<org/allbinary/business/advertisement/AdConfiguration.h>)
#include <org/allbinary/business/advertisement/AdConfiguration.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEvent.h>)
#include <org/allbinary/input/event/VirtualKeyboardEvent.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventHandler.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h>
#endif

        #endif
    
