
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CommandListener;
class BasicColor;
class CommandForm;
class Init;
class NullUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InGameOptionsForm;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InGameOptionsFormFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static InGameOptionsFormFactory* getInstance();


            
    public: InGameOptionsFormFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommandForm* SINGLETON;

    public: void init(CommandListener* commandListener, Init* initInterface, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: CommandForm* get();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORMFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif
#if __has_include(<org/allbinary/init/Init.h>)
#include <org/allbinary/init/Init.h>
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
#if __has_include("org/allbinary/game/configuration/InGameOptionsForm.h")
#include "org/allbinary/game/configuration/InGameOptionsForm.h"
#endif

        #endif
    
