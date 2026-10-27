
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class KeyEvent;
#include <org/allbinary/android/ActivityFractureUtil.h>
class CommonPhoneStrings;
class AbPathData;
class CommonStrings;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AndroidGameKey;
class Input;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidKeyFactory: public ActivityFractureUtil {


            
    public: AndroidKeyFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    public: AndroidGameKey* UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_L1;

    public: AndroidGameKey* KEYCODE_BUTTON_R1;

    public: AndroidGameKey* KEYCODE_BUTTON_THUMBR;

    public: AndroidGameKey* KEYCODE_BUTTON_THUMBL;

    public: AndroidGameKey* KEYCODE_BUTTON_START;

    public: AndroidGameKey* KEYCODE_BUTTON_MODE;

    public: AndroidGameKey* KEYCODE_BUTTON_B;

    public: AndroidGameKey* KEYCODE_BUTTON_A;

    public: AndroidGameKey* KEYCODE_BUTTON_X;

    public: AndroidGameKey* KEYCODE_BUTTON_Y;

    public: AndroidGameKey* KEYCODE_BUTTON_L2;

    public: AndroidGameKey* KEYCODE_BUTTON_R2;

    public: AndroidGameKey* KEYCODE_BUTTON_SELECT;

    public: AndroidGameKey* KEYCODE_BUTTON_C;

    public: AndroidGameKey* KEYCODE_BUTTON_Z;

    public: AndroidGameKey* KEYCODE_BUTTON_1;

    public: AndroidGameKey* KEYCODE_BUTTON_10;

    public: AndroidGameKey* KEYCODE_BUTTON_11;

    public: AndroidGameKey* KEYCODE_BUTTON_12;

    public: AndroidGameKey* KEYCODE_BUTTON_13;

    public: AndroidGameKey* KEYCODE_BUTTON_14;

    public: AndroidGameKey* KEYCODE_BUTTON_15;

    public: AndroidGameKey* KEYCODE_BUTTON_16;

    public: AndroidGameKey* KEYCODE_BUTTON_2;

    public: AndroidGameKey* KEYCODE_BUTTON_3;

    public: AndroidGameKey* KEYCODE_BUTTON_4;

    public: AndroidGameKey* KEYCODE_BUTTON_5;

    public: AndroidGameKey* KEYCODE_BUTTON_6;

    public: AndroidGameKey* KEYCODE_BUTTON_7;

    public: AndroidGameKey* KEYCODE_BUTTON_8;

    public: AndroidGameKey* KEYCODE_BUTTON_9;

    public: AndroidGameKey* SOFT_LEFT;

    public: AndroidGameKey* SOFT_RIGHT;

    public: AndroidGameKey* HOME;

    public: AndroidGameKey* BACK;

    public: AndroidGameKey* CALL;

    public: AndroidGameKey* ENDCALL;

    public: AndroidGameKey* ZERO;

    public: AndroidGameKey* ONE;

    public: AndroidGameKey* TWO;

    public: AndroidGameKey* THREE;

    public: AndroidGameKey* FOUR;

    public: AndroidGameKey* FIVE;

    public: AndroidGameKey* SIX;

    public: AndroidGameKey* SEVEN;

    public: AndroidGameKey* EIGHT;

    public: AndroidGameKey* NINE;

    public: AndroidGameKey* STAR;

    public: AndroidGameKey* POUND;

    public: AndroidGameKey* DPAD_UP;

    public: AndroidGameKey* DPAD_DOWN;

    public: AndroidGameKey* DPAD_LEFT;

    public: AndroidGameKey* DPAD_RIGHT;

    public: AndroidGameKey* DPAD_CENTER;

    public: AndroidGameKey* VOLUME_UP;

    public: AndroidGameKey* VOLUME_DOWN;

    public: AndroidGameKey* POWER;

    public: AndroidGameKey* CAMERA;

    public: AndroidGameKey* CLEAR;

    public: AndroidGameKey* A;

    public: AndroidGameKey* B;

    public: AndroidGameKey* C;

    public: AndroidGameKey* D;

    public: AndroidGameKey* E;

    public: AndroidGameKey* F;

    public: AndroidGameKey* G;

    public: AndroidGameKey* H;

    public: AndroidGameKey* I;

    public: AndroidGameKey* J;

    public: AndroidGameKey* K;

    public: AndroidGameKey* L;

    public: AndroidGameKey* M;

    public: AndroidGameKey* N;

    public: AndroidGameKey* O;

    public: AndroidGameKey* P;

    public: AndroidGameKey* Q;

    public: AndroidGameKey* R;

    public: AndroidGameKey* S;

    public: AndroidGameKey* T;

    public: AndroidGameKey* U;

    public: AndroidGameKey* V;

    public: AndroidGameKey* W;

    public: AndroidGameKey* X;

    public: AndroidGameKey* Y;

    public: AndroidGameKey* Z;

    public: AndroidGameKey* COMMA;

    public: AndroidGameKey* PERIOD;

    public: AndroidGameKey* ALT_LEFT;

    public: AndroidGameKey* ALT_RIGHT;

    public: AndroidGameKey* SHIFT_LEFT;

    public: AndroidGameKey* SHIFT_RIGHT;

    public: AndroidGameKey* TAB;

    public: AndroidGameKey* SPACE;

    public: AndroidGameKey* SYM;

    public: AndroidGameKey* EXPLORER;

    public: AndroidGameKey* ENVELOPE;

    public: AndroidGameKey* ENTER;

    public: AndroidGameKey* DEL;

    public: AndroidGameKey* GRAVE;

    public: AndroidGameKey* MINUS;

    public: AndroidGameKey* EQUALS;

    public: AndroidGameKey* LEFT_BRACKET;

    public: AndroidGameKey* RIGHT_BRACKET;

    public: AndroidGameKey* BACKSLASH;

    public: AndroidGameKey* SEMICOLON;

    public: AndroidGameKey* APOSTROPHE;

    public: AndroidGameKey* SLASH;

    public: AndroidGameKey* AT;

    public: AndroidGameKey* NUM;

    public: AndroidGameKey* HEADSETHOOK;

    public: AndroidGameKey* FOCUS;

    public: AndroidGameKey* PLUS;

    public: AndroidGameKey* MENU;

    public: AndroidGameKey* NOTIFICATION;

    public: AndroidGameKey* SEARCH;

    public: void init();

    public: bool isSubmission(Input* input);

    public: bool isDelete(Input* input);

    public: bool isBackSpace(Input* input);

    public: bool isLeft(Input* input);

    public: bool isRight(Input* input);

    public: bool isUp(Input* input);

    public: bool isDown(Input* input);

    public: bool isEnter(Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H_COMPLETE
        #if __has_include(<android/view/KeyEvent.h>)
#include <android/view/KeyEvent.h>
#endif
#if __has_include(<org/allbinary/android/ActivityFractureUtil.h>)
#include <org/allbinary/android/ActivityFractureUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/game/input/AndroidGameKey.h")
#include "org/allbinary/game/input/AndroidGameKey.h"
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif

        #endif
    
