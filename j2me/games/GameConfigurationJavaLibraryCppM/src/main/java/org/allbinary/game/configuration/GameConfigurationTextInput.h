
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TextField;
class StdUtil;
class StringUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameConfigurationTextInput
            : public virtual Object
         {

    private: static ABHashtable<Object*, Object*>* hashtable;

    private: static GameConfigurationTextInput* SIMULATOR_IP_owner();
    public: static GameConfigurationTextInput* SIMULATOR_IP;

    private: static GameConfigurationTextInput* SIMULATOR_PORT_owner();
    public: static GameConfigurationTextInput* SIMULATOR_PORT;

    public: static void update(TextField* textField);

    public: static ABHashtable<Object*, Object*>* getHashtable();

    private: std::string label;

    private: std::string text;

public: GameConfigurationTextInput(std::string label, std::string text);

    public: void setText(std::string text);

    public: std::string getText();

    public: void setLabel(std::string label);

    public: std::string getLabel();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONTEXTINPUT_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/TextField.h>)
#include <javax/microedition/lcdui/TextField.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
