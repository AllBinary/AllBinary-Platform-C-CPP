
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
        



        #ifndef ORG_ALLBINARY_GAME_INTERMISSION_H
        #define ORG_ALLBINARY_GAME_INTERMISSION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/IntermissionInterface.h"
class NullIntermissionEnableListener;
class IntermissionEnableListenerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Intermission
            : public virtual Object
        , public IntermissionInterface {

    private: bool enabled= false;

    private: TimeDelayHelper* timeElapsedHelper;

    private: IntermissionEnableListenerInterface* intermissionEnableListener;

public: Intermission();

    public: void setListener(IntermissionEnableListenerInterface* enableListener);

    public: TimeDelayHelper* getTimeDelayHelper();

    public: void setEnabled(bool enabled);

    public: bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_GAME_INTERMISSION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INTERMISSION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INTERMISSION_H_COMPLETE
        #if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/game/IntermissionInterface.h")
#include "org/allbinary/game/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/game/NullIntermissionEnableListener.h")
#include "org/allbinary/game/NullIntermissionEnableListener.h"
#endif
#if __has_include("org/allbinary/game/IntermissionEnableListenerInterface.h")
#include "org/allbinary/game/IntermissionEnableListenerInterface.h"
#endif

        #endif
    
