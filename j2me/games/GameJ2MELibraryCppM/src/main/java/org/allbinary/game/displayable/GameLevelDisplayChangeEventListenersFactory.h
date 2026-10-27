
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DisplayChangeEventHandler;
class DisplayChangeEventListener;
class BasicEventHandler;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameLevelDisplayChangeEventListenersFactory
            : public virtual Object
         {

    private: static GameLevelDisplayChangeEventListenersFactory* instance_owner();
    private: static GameLevelDisplayChangeEventListenersFactory* instance;

    public: static GameLevelDisplayChangeEventListenersFactory* getInstance();


            
    public: GameLevelDisplayChangeEventListenersFactory();
        
    private: BasicArrayList* list;

    public: void add(DisplayChangeEventListener* displayChangeEventListener);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>)
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
