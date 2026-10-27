
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/mapping/GameInputMapping.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/help/HelpPaintable.h"
//#include "org/allbinary/game/paint/help/UpdateMyFontProperties.h"

class InputMappingHelpPaintable: public HelpPaintable {

    private: static inline const std::string AND = " and ";

    private: static inline const std::string SEP = ", ";

    private: static inline const std::string MORE_THAN_TWO_IN_LIST_AND = ", and ";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: CommonSeps* commonSeps = CommonSeps::getInstance();

    protected: StringUtil* stringUtil = StringUtil::getInstance();

    private: BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();

    private: GameKey* NONE = GameKeyFactory::getInstance()->NONE;

    private: const std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;

    private: std::vector<GameInputMapping*> gameInputMappingArray;

    private: std::vector<BasicArrayList*> keyMappingArray = {};

    private: std::vector<BasicColor*> actionBasicColor = BasicColorUtil::getInstance()->ZERO_ARRAY;

    private: std::vector<std::vector<BasicColor*>> inputBasicColorArray = std::vector<std::vector<BasicColor*>>(0, std::vector<BasicColor*>(0));

    private: BasicColor* selectedBasicColor;

//inner= member=true isStatic=
class UpdateMyFontProperties
            : public Object
         {
/*Static stuff is not allowed for CPP inner classes*//**/


    std::vector<std::string> actionStringArray = StringUtil::getInstance()->getArrayInstance();

    std::vector<int32_t> keymappingBeginWidthArray = NullUtil::getInstance()->NULL_INT_ARRAY;

    std::vector<int32_t> actionStringDeltaXArray = NullUtil::getInstance()->NULL_INT_ARRAY;

    std::vector<std::vector<int32_t>> inputDeltaXArray = NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY;

    std::vector<std::vector<std::string>> sepArray = std::vector<std::vector<std::string>>(0, std::vector<std::string>(0));

    std::vector<std::vector<int32_t>> sepWidthArray = NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY;

    int32_t charHeight= 0;

};

            
    private: updateMyFontProperties = new UpdateMyFontProperties();

protected: InputMappingHelpPaintable(std::vector<GameInputMapping*> gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: void update(GameKey* selectedGameKey, Input* selectedInput);

    private: std::string get(BasicArrayList* keyList);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H
