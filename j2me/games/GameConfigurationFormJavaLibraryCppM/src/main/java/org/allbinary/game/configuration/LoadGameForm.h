
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class Choice;
class ChoiceGroup;
class CommandListener;
class Item;
class NullImage;
class StringItem;
class GameCommandsFactory;
class GamePersistanceSingleton;
class BasicColor;
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
class MEUtil;
class StringMaker;
class StringUtil;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LoadGameForm: public CommandForm {

    private: MEUtil* meUtil;

    private: bool areChoices= false;

public: LoadGameForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

                //@Throws(Exception.constructor)
            
    public: void update();

    private: void add(BasicArrayList* list, std::string name, int32_t option);

    private: ChoiceGroup* getChoiceGroup(BasicArrayList* list, std::string name, int32_t option);

    public: int32_t getSelectedId();

    public: int32_t getSelectedText();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Choice.h>)
#include <javax/microedition/lcdui/Choice.h>
#endif
#if __has_include(<javax/microedition/lcdui/ChoiceGroup.h>)
#include <javax/microedition/lcdui/ChoiceGroup.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Item.h>)
#include <javax/microedition/lcdui/Item.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<javax/microedition/lcdui/StringItem.h>)
#include <javax/microedition/lcdui/StringItem.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h>)
#include <org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif
#if __has_include(<org/allbinary/logic/MEUtil.h>)
#include <org/allbinary/logic/MEUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
