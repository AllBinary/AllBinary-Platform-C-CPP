
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
        



        #ifndef ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H
        #define ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommonStateStrings
            : public virtual Object
         {

    private: static CommonStateStrings* instance_owner();
    private: static CommonStateStrings* instance;

    public: static CommonStateStrings* getInstance();


            
    public: CommonStateStrings();
        
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

            


        #endif //ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_STRING_COMMONSTATESTRINGS_H_COMPLETE
        
        #endif
    
