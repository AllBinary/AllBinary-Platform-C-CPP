
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Choice.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/persistance/GameDifficultyFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameDifficultyOptions: public CommandForm {

    private: BasicArrayList list;

public: GameDifficultyOptions(CommandListener commandListener, std::string title, BasicArrayList list, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

    public: void open();

    public: void close();

                //@Throws(Exception.constructor)
            
    public: void save();

    public: void initCommands(CommandListener cmdListener);

                //@Throws(Exception.constructor)
            
    public: void update();

    private: void add(BasicArrayList list, std::string name, int32_t option);

    private: ChoiceGroup getChoiceGroup(BasicArrayList list, std::string name, int32_t option);

    public: void setSelectedId(int32_t id);

    public: int32_t getSelectedId();

    public: int32_t getSelectedText();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_H
