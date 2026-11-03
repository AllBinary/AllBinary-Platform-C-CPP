
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
        



        #ifndef ORG_ALLBINARY_GAME_NULLINTERMISSIONENABLELISTENER_H
        #define ORG_ALLBINARY_GAME_NULLINTERMISSIONENABLELISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/IntermissionEnableListenerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullIntermissionEnableListener
            : public virtual Object
        , public virtual IntermissionEnableListenerInterface {

    private: static IntermissionEnableListenerInterface* SINGLETON;

    public: static IntermissionEnableListenerInterface* getInstance();

private: NullIntermissionEnableListener();

    public: void notifyIntermission(bool enable);

};

            


        #endif //ORG_ALLBINARY_GAME_NULLINTERMISSIONENABLELISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_NULLINTERMISSIONENABLELISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_NULLINTERMISSIONENABLELISTENER_H_COMPLETE
        #if __has_include("org/allbinary/game/IntermissionEnableListenerInterface.h")
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"
#endif

        #endif
    
