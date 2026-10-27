
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H
        #define ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/init/Init.h>
class LogUtil;
class SmallIntegerSingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeyFactoryInitializer: public Init {


            
    public: KeyFactoryInitializer();
        
    /*protected*/ public: LogUtil* logUtil;

    public: void init();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_KEYFACTORYINITIALIZER_H_COMPLETE
        #if __has_include(<org/allbinary/init/Init.h>)
#include <org/allbinary/init/Init.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif

        #endif
    
