
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H
        #define ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Graphics;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/TestInputInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TestInputExample
            : public virtual Object
        , public virtual TestInputInterface {


            
    public: TestInputExample();
        
    private: int32_t testValue= 0;

    public: void up();

    public: void down();

    public: void left();

    public: void right();

    public: void strafeLeft();

    public: void strafeRight();

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include("org/allbinary/game/input/TestInputInterface.h")
#include "org/allbinary/game/input/TestInputInterface.h"
#endif

        #endif
    
