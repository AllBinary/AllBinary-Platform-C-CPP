
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class PositionStrings;
class CommonPhoneStrings;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PCGameKey;
class Input;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PCKeyFactory
            : public virtual Object
         {

    private: static PCKeyFactory* SINGLETON_owner();
    private: static PCKeyFactory* SINGLETON;

    public: static PCKeyFactory* getInstance();


            
    public: PCKeyFactory();
        
    public: PCGameKey* UNKNOWN;

    public: PCGameKey* ENTER;

    public: PCGameKey* _A;

    public: PCGameKey* _B;

    public: PCGameKey* _C;

    public: PCGameKey* _D;

    public: PCGameKey* _E;

    public: PCGameKey* _F;

    public: PCGameKey* _G;

    public: PCGameKey* _H;

    public: PCGameKey* _I;

    public: PCGameKey* _J;

    public: PCGameKey* _K;

    public: PCGameKey* _L;

    public: PCGameKey* _M;

    public: PCGameKey* _N;

    public: PCGameKey* _O;

    public: PCGameKey* _P;

    public: PCGameKey* _Q;

    public: PCGameKey* _R;

    public: PCGameKey* _S;

    public: PCGameKey* _T;

    public: PCGameKey* _U;

    public: PCGameKey* _V;

    public: PCGameKey* _W;

    public: PCGameKey* _X;

    public: PCGameKey* _Y;

    public: PCGameKey* _Z;

    public: PCGameKey* a;

    public: PCGameKey* b;

    public: PCGameKey* c;

    public: PCGameKey* d;

    public: PCGameKey* e;

    public: PCGameKey* f;

    public: PCGameKey* g;

    public: PCGameKey* h;

    public: PCGameKey* i;

    public: PCGameKey* j;

    public: PCGameKey* k;

    public: PCGameKey* l;

    public: PCGameKey* m;

    public: PCGameKey* n;

    public: PCGameKey* o;

    public: PCGameKey* p;

    public: PCGameKey* q;

    public: PCGameKey* r;

    public: PCGameKey* s;

    public: PCGameKey* t;

    public: PCGameKey* u;

    public: PCGameKey* v;

    public: PCGameKey* w;

    public: PCGameKey* x;

    public: PCGameKey* y;

    public: PCGameKey* z;

    public: PCGameKey* ZERO;

    public: PCGameKey* ONE;

    public: PCGameKey* TWO;

    public: PCGameKey* THREE;

    public: PCGameKey* FOUR;

    public: PCGameKey* FIVE;

    public: PCGameKey* SIX;

    public: PCGameKey* SEVEN;

    public: PCGameKey* EIGHT;

    public: PCGameKey* NINE;

    public: PCGameKey* DPAD_UP;

    public: PCGameKey* DPAD_DOWN;

    public: PCGameKey* DPAD_LEFT;

    public: PCGameKey* DPAD_RIGHT;

    public: PCGameKey* DPAD_UP2;

    public: PCGameKey* DPAD_DOWN2;

    public: PCGameKey* DPAD_LEFT2;

    public: PCGameKey* DPAD_RIGHT2;

    public: PCGameKey* COMMA;

    public: PCGameKey* SPACE;

    public: PCGameKey* DEL;

    public: PCGameKey* STAR;

    public: PCGameKey* QUESTION;

    public: PCGameKey* PERIOD;

    public: PCGameKey* ESCAPE;

    public: PCGameKey* BACK_SPACE;

    public: bool isSubmission(Input* input);

    public: bool isDelete(Input* input);

    public: bool isBackSpace(Input* input);

    public: bool isUp(Input* input);

    public: bool isDown(Input* input);

    public: bool isLeft(Input* input);

    public: bool isRight(Input* input);

    public: bool isEnter(Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/game/input/PCGameKey.h")
#include "org/allbinary/game/input/PCGameKey.h"
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif

        #endif
    
