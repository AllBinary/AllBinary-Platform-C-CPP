
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

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/PostGameCommandFactory.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoreUtil.h"

class HighScoreTextBox: public CustomTextBox {

    private: const VirtualKeyboardEventHandler virtualKeyboardEventHandler = VirtualKeyboardEventHandler::getInstance();

    private: HighScoreUtil highScoreUtil;

    private: const Paintable pleaseWait = SimpleTextPaintable(this->commonStrings.PLEASE_WAIT, BasicColorFactory::getInstance().WHITE);

    private: Paintable paintable = NullPaintable::getInstance();

    public: bool submitted = false;

public: HighScoreTextBox(HighScoresFactoryInterface highScoresFactoryInterface, HighScoresHelperBaseInterface highScoresHelper, AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, CommandListener cmdListener, std::string name, HighScore highScore, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

    public: void initCommands(CommandListener cmdListener);

    public: void open();

    public: void close();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: void paint(Graphics graphics);

    public: void saveHighScore();

    public: void submit();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORETEXTBOX_H
