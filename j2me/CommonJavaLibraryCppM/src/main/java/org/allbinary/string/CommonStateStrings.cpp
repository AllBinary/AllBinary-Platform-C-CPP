
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonStateStrings
            : public Object
         {

    private: static CommonStateStrings* instance() { static std::unique_ptr<CommonStateStrings> value(new CommonStateStrings()); return value.get(); }

    public: static CommonStateStrings* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonStateStrings::instance();
    
}


    public: const std::string CONTEXT = "Context: ";

    public: const std::string FINISH = "finish";

    public: const std::string CREATE = "onCreate";

    public: const std::string START = "onStart";

    public: const std::string RESTART = "onRestart";

    public: const std::string RESUME = "onResume";

    public: const std::string PAUSE = "onPause";

    public: const std::string STOP = "onStop";

    public: const std::string DESTROY = "onDestroy";

    public: const std::string BIND = "onBind";

    public: const std::string ON_SAVE_INSTANCE_STATE = "onSaveInstanceState";

    public: const std::string ON_START_COMMAND = "onStartCommand";

};

            

