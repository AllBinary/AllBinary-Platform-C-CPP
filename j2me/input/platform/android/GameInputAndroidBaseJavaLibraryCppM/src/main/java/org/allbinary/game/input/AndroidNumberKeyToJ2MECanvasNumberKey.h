
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Canvas;
class KeyEvent;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidNumberKeyToJ2MECanvasNumberKey
            : public virtual Object
         {

    private: static std::vector<int32_t> androidtoJavaMicroEditionKeyMap;

    public: static void init();

    public: static int32_t getKey(int32_t key);

private: AndroidNumberKeyToJ2MECanvasNumberKey();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDNUMBERKEYTOJ2MECANVASNUMBERKEY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<android/view/KeyEvent.h>)
#include <android/view/KeyEvent.h>
#endif

        #endif
    
