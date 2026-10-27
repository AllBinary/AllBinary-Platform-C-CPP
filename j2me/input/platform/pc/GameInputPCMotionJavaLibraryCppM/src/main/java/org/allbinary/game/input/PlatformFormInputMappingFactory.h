
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class InputToGameKeyMapping;
class BasicTouchInputFactory;
class NullUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PCKeyFactory;
class GameKeyFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformFormInputMappingFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static PlatformFormInputMappingFactory* getInstance();


            
    public: PlatformFormInputMappingFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    private: InputToGameKeyMapping* inputToGameKeyMapping;

    public: InputToGameKeyMapping* getOrCreate();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMFORMINPUTMAPPINGFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/BasicTouchInputFactory.h>)
#include <org/allbinary/input/motion/button/BasicTouchInputFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/input/PCKeyFactory.h")
#include "org/allbinary/game/input/PCKeyFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif

        #endif
    
