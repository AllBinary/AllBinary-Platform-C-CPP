
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

#include <jsinterop/annotations/JsType.h>

      
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

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HelpPaintable.h"
//#include "UpdateMyFontProperties.h"

class InputMappingHelpPaintable: public HelpPaintable {
        

    private: static const AND: string = " and ";

    private: static const SEP: string = ", ";

    private: static const MORE_THAN_TWO_IN_LIST_AND: string = ", and ";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    private: const NONE: GameKey = GameKeyFactory.getInstance()!.NONE;

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: gameInputMappingArray: std::vector<GameInputMapping>;

    private: keyMappingArray: std::vector<BasicArrayList> = [];

    private: actionBasicColor: std::vector<BasicColor> = [];

    private: inputBasicColorArray: std::vector<std::vector<BasicColor>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    private: selectedBasicColor: BasicColor;

//inner= member=true isStatic=
class UpdateMyFontProperties
            : public Object
         {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    actionStringArray: std::vector<string> = StringUtil.getInstance()!.getArrayInstance()!;

    keymappingBeginWidthArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    actionStringDeltaXArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    inputDeltaXArray: std::vector<std::vector<int32_t>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY;

    sepArray: std::vector<std::vector<string>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    sepWidthArray: std::vector<std::vector<int32_t>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY;

    charHeight: int32_t= 0;

};

            
    private: updateMyFontProperties = new this.UpdateMyFontProperties();

protected constructor (std::vector<GameInputMapping> gameInputMappingArray, BasicColor backgroundBasicColor, BasicColor basicColor);

    public updateMeasurement(Graphics graphics);

    public update(GameKey selectedGameKey, Input selectedInput);

    string get(BasicArrayList keyList);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_HELP_INPUTMAPPINGHELPPAINTABLE_H
