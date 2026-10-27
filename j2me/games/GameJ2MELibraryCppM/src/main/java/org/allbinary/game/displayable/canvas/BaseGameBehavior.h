
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GameAdStateFactory;
class GameAdState;
class Features;
class CurrentDisplayableFactory;
class OpenGLFeatureFactory;
class AbeClientInformationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
class AllBinaryGameCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseGameBehavior: public DemoGameBehavior {

    private: static BaseGameBehavior* instanceC_owner();
    private: static BaseGameBehavior* instanceC;

    public: static DemoGameBehavior* getInstance();


            
    public: BaseGameBehavior();
        
                //@Throws(Exception.constructor)
            
    public: void init();

    public: void pause(AllBinaryGameCanvas* allBinaryGameCanvas);

    public: void unPause(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateTouch(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateScreenButtonPaintable(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void setGameState(AllBinaryGameCanvas* allBinaryGameCanvas);

    public: void removeAllGameKeyInputListeners(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void updateEndGameProcessor(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void buildGame(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void run(AllBinaryGameCanvas* allBinaryGameCanvas);

                //@Throws(Exception.constructor)
            
    public: void setHighScore(AbeClientInformationInterface* abeClientInformation, AllBinaryGameCanvas* allBinaryGameCanvas, std::string name, int64_t score, bool autoSubmit, bool isLast);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASEGAMEBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/business/advertisement/GameAdStateFactory.h>)
#include <org/allbinary/business/advertisement/GameAdStateFactory.h>
#endif
#if __has_include(<org/allbinary/game/GameAdState.h>)
#include <org/allbinary/game/GameAdState.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>)
#include <org/allbinary/graphics/opengles/CurrentDisplayableFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/DemoGameBehavior.h")
#include "org/allbinary/game/displayable/canvas/DemoGameBehavior.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

        #endif
    
