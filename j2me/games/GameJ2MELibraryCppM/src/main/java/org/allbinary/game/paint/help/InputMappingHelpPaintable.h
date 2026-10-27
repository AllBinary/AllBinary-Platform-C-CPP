
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class GameKey;
class GameKeyFactory;
class Input;
class PlatformInputMappingFactory;
class GameInputMapping;
class PersistentInputMapping;
class BasicColor;
class BasicColorFactory;
class BasicColorUtil;
class NullUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonLabels;
class CommonSeps;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/help/HelpPaintable.h"
//class UpdateMyFontProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputMappingHelpPaintable: public HelpPaintable {
private: class UpdateMyFontProperties;

    private: static inline const std::string AND = " and ";

    private: static inline const std::string SEP = ", ";

    private: static inline const std::string MORE_THAN_TWO_IN_LIST_AND = ", and ";

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: CommonSeps* commonSeps;

    /*protected*/ public: StringUtil* stringUtil;

    private: BasicColorFactory* basicColorFactory;

    private: GameKey* NONE;

    private: const std::string EMPTY_STRING;

    private: std::vector<GameInputMapping*> gameInputMappingArray;

    private: std::vector<BasicArrayList*> keyMappingArray;

    private: std::vector<BasicColor*> actionBasicColor;

    private: std::vector<std::vector<BasicColor*>> inputBasicColorArray;

    private: BasicColor* selectedBasicColor;

//inner= member=true isStatic=
private: class UpdateMyFontProperties
            : public virtual Object
         {
/*Static stuff is not allowed for CPP inner classes*//**/



            
    public: UpdateMyFontProperties();
        
    public: std::vector<std::string> actionStringArray;

    public: std::vector<int32_t> keymappingBeginWidthArray;

    public: std::vector<int32_t> actionStringDeltaXArray;

    public: std::vector<std::vector<int32_t>> inputDeltaXArray;

    public: std::vector<std::vector<std::string>> sepArray;

    public: std::vector<std::vector<int32_t>> sepWidthArray;

    public: int32_t charHeight= 0;

};

            
    private: UpdateMyFontProperties* updateMyFontProperties;

/*protected*/ public: InputMappingHelpPaintable(std::vector<GameInputMapping*> gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: void update(GameKey* selectedGameKey, Input* selectedInput);

    private: std::string get(BasicArrayList* keyList);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKey.h>)
#include <org/allbinary/game/input/GameKey.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/PlatformInputMappingFactory.h>)
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/GameInputMapping.h>)
#include <org/allbinary/game/input/mapping/GameInputMapping.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/PersistentInputMapping.h>)
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorUtil.h>)
#include <org/allbinary/graphics/color/BasicColorUtil.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/paint/help/HelpPaintable.h")
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#endif

        #endif
    
