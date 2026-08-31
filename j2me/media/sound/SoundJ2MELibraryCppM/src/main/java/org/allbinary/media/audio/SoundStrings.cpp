
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
        



            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SoundStrings
            : public Object
         {
        

    private: static const instance: SoundStrings = new SoundStrings();

    public static SoundStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SoundStrings.instance;
    
}


    public const STOP_ALL: string = "stopAll";

    public const CLOSE_ALL: string = "closeAll";

    public const SOUND: string = " Sound: ";

    public const INIT_SOUND: string = "Initializing Sound: ";

    public const STOPPING_SOUND: string = "Stopping Sound: ";

    public const CLOSING_SOUND: string = "Closing Sound: ";

};

            

