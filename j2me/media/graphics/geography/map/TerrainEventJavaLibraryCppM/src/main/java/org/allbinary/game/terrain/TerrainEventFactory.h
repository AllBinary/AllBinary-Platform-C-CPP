
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
class AllBinaryEventObject;
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TerrainEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TerrainEventFactory
            : public virtual Object
        , public AllBinaryEventObjectFactoryInterface {

public: TerrainEventFactory();

    public: AllBinaryEventObject* getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEvent.h")
#include "org/allbinary/game/terrain/TerrainEvent.h"
#endif

        #endif
    
