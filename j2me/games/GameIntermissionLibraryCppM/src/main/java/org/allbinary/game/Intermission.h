
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

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IntermissionInterface.h"
#include "NullIntermissionEnableListener.h"
#include "IntermissionEnableListenerInterface.h"

class Intermission
            : public Object
        : public IntermissionInterface {
        

    private: enabled: bool= false;

    private: const timeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: intermissionEnableListener: IntermissionEnableListenerInterface = NullIntermissionEnableListener.getInstance()!;

public constructor ();

    public setListener(IntermissionEnableListenerInterface enableListener);

    public TimeDelayHelper getTimeDelayHelper();

    public setEnabled(bool enabled);

    public bool isEnabled();

};

            


        #endif //ORG_ALLBINARY_GAME_INTERMISSION_H
