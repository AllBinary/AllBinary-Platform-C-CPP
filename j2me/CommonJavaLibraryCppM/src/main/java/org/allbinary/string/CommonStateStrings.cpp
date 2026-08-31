
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonStateStrings
            : public Object
         {
        

    private: static const instance: CommonStateStrings = new CommonStateStrings();

    public static CommonStateStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonStateStrings.instance;
    
}


    public const CONTEXT: string = "Context: ";

    public const FINISH: string = "finish";

    public const CREATE: string = "onCreate";

    public const START: string = "onStart";

    public const RESTART: string = "onRestart";

    public const RESUME: string = "onResume";

    public const PAUSE: string = "onPause";

    public const STOP: string = "onStop";

    public const DESTROY: string = "onDestroy";

    public const BIND: string = "onBind";

    public const ON_SAVE_INSTANCE_STATE: string = "onSaveInstanceState";

    public const ON_START_COMMAND: string = "onStartCommand";

};

            

