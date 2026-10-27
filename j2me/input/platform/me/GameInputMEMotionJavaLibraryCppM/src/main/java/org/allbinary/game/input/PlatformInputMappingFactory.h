
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class PersistentInputMapping;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MotionJ2MEGameInputMapping;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformInputMappingFactory
            : public virtual Object
         {

    private: static PlatformInputMappingFactory* instance_owner();
    private: static PlatformInputMappingFactory* instance;

    public: static PlatformInputMappingFactory* getInstance();


            
    public: PlatformInputMappingFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    private: PersistentInputMapping* inputToGameKeyMapping;

    public: PersistentInputMapping* getPersistentInputMappingInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_PLATFORMINPUTMAPPINGFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/mapping/PersistentInputMapping.h>)
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/input/MotionJ2MEGameInputMapping.h")
#include "org/allbinary/game/input/MotionJ2MEGameInputMapping.h"
#endif

        #endif
    
