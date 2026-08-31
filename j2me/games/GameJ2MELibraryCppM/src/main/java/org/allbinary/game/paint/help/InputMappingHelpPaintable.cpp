
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

protected constructor (std::vector<GameInputMapping> gameInputMappingArray, BasicColor backgroundBasicColor, BasicColor basicColor){
            super("Input Mapping", backgroundBasicColor, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.gameInputMappingArray= gameInputMappingArray;
    
this.update(this.NONE, this.NONE);
    

                        if(backgroundBasicColor == this.basicColorFactory!.WHITE || basicColor == this.basicColorFactory!.WHITE)
                        
                                    {
                                    this.selectedBasicColor= this.basicColorFactory!.RED;
    

                                    }
                                
                        else {
                            this.selectedBasicColor= this.basicColorFactory!.WHITE;
    

                        }
                            
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    

    updateMyFontProperties = new this.UpdateMyFontProperties();;
    
updateMyFontProperties!.charHeight= font.getHeight();
    

    stringMaker: StringMaker = new StringMaker();;
    

    inputInfo: std::vector<string> = this.inputInfo;;
    

    size: int32_t = inputInfo!.length
                ;;
    
updateMyFontProperties!.actionStringArray= new Array(size);
    
updateMyFontProperties!.keymappingBeginWidthArray= new Array(size);
    
updateMyFontProperties!.actionStringDeltaXArray= new Array(size);
    
updateMyFontProperties!.inputDeltaXArray= new Array(size).fill(null).map(() => new Array(0).fill(0));
    
updateMyFontProperties!.sepArray= new Array(size).fill(null).map(() => new Array(0).fill(0))
                                                            ;
    
updateMyFontProperties!.sepWidthArray= new Array(size).fill(null).map(() => new Array(0).fill(0));
    

    list: BasicArrayList;;
    

    keyMappings: string;;
    

    actionString: string;;
    

    input: Input;;
    

    size2: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
list= this.keyMappingArray[index]!;
    
keyMappings= this.get(list);
    
stringMaker!.delete(0, stringMaker!.length());
    
actionString= stringMaker!.append(inputInfo[index]!)!.append(commonSeps!.COLON)!.append(commonSeps!.SPACE)!.append(commonSeps!.SPACE)!.toString();
    
updateMyFontProperties!.actionStringArray[index]= actionString;
    
stringMaker!.delete(0, stringMaker!.length());
    
updateMyFontProperties!.keymappingBeginWidthArray[index]= (font.stringWidth(stringMaker!.append(updateMyFontProperties!.actionStringArray[index]!)!.append(keyMappings)!.toString())>>1);
    
updateMyFontProperties!.actionStringDeltaXArray[index]= font.stringWidth(actionString);
    
size2= list.size();
    
updateMyFontProperties!.inputDeltaXArray[index]= new Array(size2);
    
updateMyFontProperties!.sepArray[index]= new Array(size2);
    
updateMyFontProperties!.sepWidthArray[index]= new Array(size2);
    




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {
input= list.objectArray[index2]! as Input;
    
updateMyFontProperties!.inputDeltaXArray[index]![index2]= font.stringWidth(input.getName());
    
updateMyFontProperties!.sepArray[index]![index2]= EMPTY_STRING;
    

                        if(index2 +1 < list.size())
                        
                                    {
                                    
                        if(list.size() == 2)
                        
                                    {
                                    updateMyFontProperties!.sepArray[index]![index2]= InputMappingHelpPaintable.AND;
    

                                    }
                                
                        else {
                            
                        if(index2 +2 == list.size())
                        
                                    {
                                    updateMyFontProperties!.sepArray[index]![index2]= InputMappingHelpPaintable.MORE_THAN_TWO_IN_LIST_AND;
    

                                    }
                                
                        else {
                            updateMyFontProperties!.sepArray[index]![index2]= InputMappingHelpPaintable.SEP;
    

                        }
                            

                        }
                            

                                    }
                                

                        if(updateMyFontProperties!.sepArray[index]![index2] != EMPTY_STRING)
                        
                                    {
                                    updateMyFontProperties!.sepWidthArray[index]![index2]= font.stringWidth(updateMyFontProperties!.sepArray[index]![index2]!);
    

                                    }
                                
}

}

this.updateMyFontProperties= updateMyFontProperties;
    
super.updateMeasurement(graphics);
    
}


    public update(GameKey selectedGameKey, Input selectedInput){

    stringMaker: StringMaker = new StringMaker();;
    
this.logUtil!.putF(stringMaker!.append(CommonLabels.getInstance()!.START_LABEL)!.append("selected GameKey: ")!.append(this.stringUtil!.toString(selectedGameKey))!.append(" Input: ")!.append(this.stringUtil!.toString(selectedInput))!.toString(), this, this.commonStrings!.UPDATE);
    

    gameKeyMapping: PersistentInputMapping = PlatformInputMappingFactory.getInstance()!.getPersistentInputMappingInstance()!;;
    

    size: int32_t = this.gameInputMappingArray!.length
                ;;
    

    keyInfo: std::vector<string> = new Array(size);;
    

    keyMappingArray: std::vector<BasicArrayList> = new Array(size);;
    

    actionBasicColor: std::vector<BasicColor> = new Array(size);;
    

    inputBasicColorArray: std::vector<std::vector<BasicColor>> = new Array(size)
                                                            ;;
    

    gameInputMapping: GameInputMapping;;
    

    gameKey: GameKey;;
    

    list: BasicArrayList;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
gameInputMapping= this.gameInputMappingArray[index]!;
    
gameKey= gameInputMapping!.getGameKey();
    
list= gameKeyMapping!.getInputMapping()!.getMappedInput(gameKey);
    

    size2: int32_t = list.size()!;;
    
inputBasicColorArray[index]= new Array(size2);
    




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {
inputBasicColorArray[index]![index2]= this.basicColor;
    
}


                        if(gameKey == selectedGameKey)
                        
                                    {
                                    stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append("Found: selected GameKey: ")!.append(this.stringUtil!.toString(selectedGameKey))!.toString(), this, this.commonStrings!.UPDATE);
    
actionBasicColor[index]= this.selectedBasicColor;
    

    indexOfSelectedInput: int32_t = list.indexOf(selectedInput)!;;
    

                        if(indexOfSelectedInput >= 0)
                        
                                    {
                                    stringMaker!.delete(0, stringMaker!.length());
    
this.logUtil!.putF(stringMaker!.append("Found: selected Input: ")!.append(this.stringUtil!.toString(selectedInput))!.toString(), this, this.commonStrings!.UPDATE);
    
inputBasicColorArray[index]![indexOfSelectedInput]= this.selectedBasicColor;
    

                                    }
                                

                                    }
                                
                        else {
                            actionBasicColor[index]= this.basicColor;
    

                        }
                            
keyInfo[index]= gameInputMapping!.getName();
    
keyMappingArray[index]= list;
    
}

this.keyMappingArray= keyMappingArray;
    
this.actionBasicColor= actionBasicColor;
    
this.inputBasicColorArray= inputBasicColorArray;
    
super.setInputInfoP(keyInfo);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    string get(BasicArrayList keyList){

    stringBuffer: StringMaker = new StringMaker();;
    

    key: Input;;
    

    size: int32_t = keyList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
key= keyList!.objectArray[index]! as Input;
    
stringBuffer!.append(key.getName());
    

                        if(index +1 < keyList!.size())
                        
                                    {
                                    
                        if(keyList!.size() == 2)
                        
                                    {
                                    stringBuffer!.append(InputMappingHelpPaintable.AND);
    

                                    }
                                
                        else {
                            
                        if(index +2 == keyList!.size())
                        
                                    {
                                    stringBuffer!.append(InputMappingHelpPaintable.MORE_THAN_TWO_IN_LIST_AND);
    

                                    }
                                
                        else {
                            stringBuffer!.append(InputMappingHelpPaintable.SEP);
    

                        }
                            

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    halfWidth: int32_t = this.displayInfo!.getLastHalfWidth()!;;
    
graphics.setColor(this.basicColor!.intValue());
    
graphics.drawString(this.title, halfWidth -this.titleBeginWidth, this.updateMyFontProperties!.charHeight, this.anchor);
    

    inputInfo: std::vector<string> = this.inputInfo;;
    

    size: int32_t = inputInfo!.length
                ;;
    

    y: int32_t = 0;;
    

    deltaX: int32_t = 0;;
    

    size2: int32_t = 0;;
    

    actionString: string;;
    

    input: Input;;
    

    list: BasicArrayList;;
    

    sep: string;;
    

    beginWidth: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
y= (index +3) *this.updateMyFontProperties!.charHeight;
    
deltaX= 0;
    
list= this.keyMappingArray[index]!;
    
size2= list.size();
    
beginWidth= this.updateMyFontProperties!.keymappingBeginWidthArray[index]!;
    
graphics.setColor(this.actionBasicColor[index]!.intValue());
    
actionString= this.updateMyFontProperties!.actionStringArray[index]!;
    
graphics.drawString(actionString, halfWidth -beginWidth +deltaX, y, this.anchor);
    
deltaX += this.updateMyFontProperties!.actionStringDeltaXArray[index]!;
    




                        for (
    index2: int32_t = 0;index2 < size2; index2++)
        {
input= list.objectArray[index2]! as Input;
    
graphics.setColor(this.inputBasicColorArray[index]![index2]!.intValue());
    
graphics.drawString(input.getName(), halfWidth -beginWidth +deltaX, y, this.anchor);
    
deltaX += this.updateMyFontProperties!.inputDeltaXArray[index]![index2]!;
    
sep= this.updateMyFontProperties!.sepArray[index]![index2]!;
    
graphics.setColor(this.basicColor!.intValue());
    
graphics.drawString(sep, halfWidth -beginWidth +deltaX, y, this.anchor);
    
deltaX += this.updateMyFontProperties!.sepWidthArray[index]![index2]!;
    
}

}

}


};

            

