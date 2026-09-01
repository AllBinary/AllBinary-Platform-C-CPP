
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

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameLevelDisplayChangeEventListenersFactory
            : public Object
         {

    private: static GameLevelDisplayChangeEventListenersFactory instance() { return GameLevelDisplayChangeEventListenersFactory(); }

    public: static GameLevelDisplayChangeEventListenersFactory getInstance();

    private: const BasicArrayList list = BasicArrayListD();

    public: void add(DisplayChangeEventListener displayChangeEventListener);

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_GAMELEVELDISPLAYCHANGEEVENTLISTENERSFACTORY_H
