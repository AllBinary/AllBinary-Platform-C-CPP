
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommandListener;
class Font;
class Graphics;
class TextField;
class PostGameCommandFactory;
class GameInfo;
class HighScore;
class HighScoresHelperBaseInterface;
class HighScoresFactoryInterface;
class BasicColor;
class BasicColorFactory;
#include <org/allbinary/graphics/form/item/CustomTextBox.h>
class NullPaintable;
class Paintable;
class SimpleTextPaintable;
class VirtualKeyboardEventHandler;
class GenericOperatingSystem;
class OperatingSystemFactory;
class AbeClientInformationInterface;
class InApplicationPurchaseFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class HighScoreUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoreTextBox: public CustomTextBox {

    private: VirtualKeyboardEventHandler* virtualKeyboardEventHandler;

    private: HighScoreUtil* highScoreUtil;

    private: Paintable* pleaseWait;

    private: Paintable* paintable;

    public: bool submitted = false;

public: HighScoreTextBox(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, std::string name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

    public: void open();

    public: void close();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: void paint(Graphics* graphics);

    public: void saveHighScore();

    public: void submit();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/TextField.h>)
#include <javax/microedition/lcdui/TextField.h>
#endif
#if __has_include(<org/allbinary/PostGameCommandFactory.h>)
#include <org/allbinary/PostGameCommandFactory.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScore.h>)
#include <org/allbinary/game/score/HighScore.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresHelperBaseInterface.h>)
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresFactoryInterface.h>)
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CustomTextBox.h>)
#include <org/allbinary/graphics/form/item/CustomTextBox.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/SimpleTextPaintable.h>)
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventHandler.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystemFactory.h>)
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>)
#include <org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>
#endif
#if __has_include("org/allbinary/game/score/displayable/HighScoreUtil.h")
#include "org/allbinary/game/score/displayable/HighScoreUtil.h"
#endif

        #endif
    
