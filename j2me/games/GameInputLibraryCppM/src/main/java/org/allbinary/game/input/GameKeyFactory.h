
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Canvas;
class NullUtil;
class CommonPhoneStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameKey;
class InputFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameKeyFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static GameKeyFactory* getInstance();


            
    public: GameKeyFactory();
        
    public: GameKey* NONE;

    public: GameKey* UP;

    public: GameKey* DOWN;

    public: GameKey* LEFT;

    public: GameKey* RIGHT;

    public: GameKey* KEY_POUND;

    public: GameKey* KEY_STAR;

    public: GameKey* KEY_NUM0;

    public: GameKey* KEY_NUM1;

    public: GameKey* KEY_NUM2;

    public: GameKey* KEY_NUM3;

    public: GameKey* KEY_NUM4;

    public: GameKey* KEY_NUM5;

    public: GameKey* KEY_NUM6;

    public: GameKey* KEY_NUM7;

    public: GameKey* KEY_NUM8;

    public: GameKey* KEY_NUM9;

    public: GameKey* GAME_A;

    public: GameKey* GAME_B;

    public: GameKey* GAME_C;

    public: GameKey* GAME_D;

    public: GameKey* FIRE;

    public: GameKey* LEVEL_DOWN;

    public: GameKey* LEVEL_UP;

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif

        #endif
    
