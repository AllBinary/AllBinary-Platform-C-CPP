
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GameTypeFactory;
class NullPaintable;
class LogUtil;
class AbeClientInformationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryGameCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DemoGameBehavior
            : public virtual Object
         {

    private: static DemoGameBehavior* instance_owner();
    private: static DemoGameBehavior* instance;

    public: static DemoGameBehavior* getInstance();


            
    public: DemoGameBehavior();
        
    /*protected*/ public: LogUtil* logUtil;

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

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMEBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameTypeFactory.h>)
#include <org/allbinary/game/GameTypeFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

        #endif
    
