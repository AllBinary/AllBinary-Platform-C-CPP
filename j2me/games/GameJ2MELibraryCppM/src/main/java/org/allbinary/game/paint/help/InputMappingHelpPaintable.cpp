
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
        



            #include <vector>
        
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
        #include "HelpPaintable.h"
//#include "UpdateMyFontProperties.h"

class InputMappingHelpPaintable: public HelpPaintable {

    private: static const std::string AND = " and ";

    private: static const std::string SEP = ", ";

    private: static const std::string MORE_THAN_TWO_IN_LIST_AND = ", and ";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CommonSeps commonSeps = CommonSeps::getInstance();

    protected: const StringUtil stringUtil = StringUtil::getInstance();

    private: const BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();

    private: const GameKey NONE = GameKeyFactory::getInstance().NONE;

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    private: std::vector<GameInputMapping> gameInputMappingArray;

    private: std::vector<BasicArrayList> keyMappingArray = {};

    private: std::vector<BasicColor> actionBasicColor = BasicColorUtil::getInstance().ZERO_ARRAY;

    private: std::vector<std::vector<BasicColor>> inputBasicColorArray = std::vector<std::vector<BasicColor>>(0, std::vector<BasicColor>(0));

    private: BasicColor selectedBasicColor;

//inner= member=true isStatic=
class UpdateMyFontProperties
            : public Object
         {
/*Static stuff is not allowed for CPP inner classes*//**/


    std::vector<std::string> actionStringArray = StringUtil::getInstance().getArrayInstance();

    std::vector<int32_t> keymappingBeginWidthArray = NullUtil::getInstance().NULL_INT_ARRAY;

    std::vector<int32_t> actionStringDeltaXArray = NullUtil::getInstance().NULL_INT_ARRAY;

    std::vector<std::vector<int32_t>> inputDeltaXArray = NullUtil::getInstance().NULL_INT_ARRAY_ARRAY;

    std::vector<std::vector<std::string>> sepArray = std::vector<std::vector<std::string>>(0, std::vector<std::string>(0));

    std::vector<std::vector<int32_t>> sepWidthArray = NullUtil::getInstance().NULL_INT_ARRAY_ARRAY;

    int32_t charHeight= 0;

};

            
    private: updateMyFontProperties = UpdateMyFontProperties();

protected: InputMappingHelpPaintable(std::vector<GameInputMapping> gameInputMappingArray, BasicColor backgroundBasicColor, BasicColor basicColor) : HelpPaintable("Input Mapping", backgroundBasicColor, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->gameInputMappingArray= gameInputMappingArray;
    
this->update(this->NONE, this->NONE);
    

                        if(backgroundBasicColor == this->basicColorFactory.WHITE || basicColor == this->basicColorFactory.WHITE)
                        
                                    {
                                    this->selectedBasicColor= this->basicColorFactory.RED;
    

                                    }
                                
                        else {
                            this->selectedBasicColor= this->basicColorFactory.WHITE;
    

                        }
                            
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    

    updateMyFontProperties = UpdateMyFontProperties();;
    
updateMyFontProperties.charHeight= font.getHeight();
    

    StringMaker stringMaker = StringMaker();;
    

    std::vector<std::string> inputInfo = this->inputInfo;;
    

    int32_t size = inputInfo.size();;
    
updateMyFontProperties.actionStringArray= std::vector<std::string>(size);
    
updateMyFontProperties.keymappingBeginWidthArray= std::vector<int32_t>(size);
    
updateMyFontProperties.actionStringDeltaXArray= std::vector<int32_t>(size);
    
updateMyFontProperties.inputDeltaXArray= std::vector<std::vector<int32_t>>(size, std::vector<int32_t>(0));
    
updateMyFontProperties.sepArray= std::vector<std::vector<std::string>>(size, std::vector<std::string>(0));
    
updateMyFontProperties.sepWidthArray= std::vector<std::vector<int32_t>>(size, std::vector<int32_t>(0));
    

    BasicArrayList list;;
    

    std::string keyMappings;;
    

    std::string actionString;;
    

    Input input;;
    

    int32_t size2 = 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
list= this->keyMappingArray[index];
    
keyMappings= this->get(list);
    
stringMaker.delete(0, stringMaker.length());
    
actionString= stringMaker.append(inputInfo[index]).append(commonSeps.COLON).append(commonSeps.SPACE).append(commonSeps.SPACE).toString();
    
updateMyFontProperties.actionStringArray[index]= actionString;
    
stringMaker.delete(0, stringMaker.length());
    
updateMyFontProperties.keymappingBeginWidthArray[index]= (font.stringWidth(stringMaker.append(updateMyFontProperties.actionStringArray[index]).append(keyMappings).toString())>>1);
    
updateMyFontProperties.actionStringDeltaXArray[index]= font.stringWidth(actionString);
    
size2= list.size();
    
updateMyFontProperties.inputDeltaXArray[index]= std::vector<int32_t>(size2);
    
updateMyFontProperties.sepArray[index]= std::vector<std::string>(size2);
    
updateMyFontProperties.sepWidthArray[index]= std::vector<int32_t>(size2);
    




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {
input= list.objectArray[index2];
    
updateMyFontProperties.inputDeltaXArray[index][index2]= font.stringWidth(input.getName());
    
updateMyFontProperties.sepArray[index][index2]= EMPTY_STRING;
    

                        if(index2 +1 < list.size())
                        
                                    {
                                    
                        if(list.size() == 2)
                        
                                    {
                                    updateMyFontProperties.sepArray[index][index2]= InputMappingHelpPaintable::AND;
    

                                    }
                                
                        else {
                            
                        if(index2 +2 == list.size())
                        
                                    {
                                    updateMyFontProperties.sepArray[index][index2]= InputMappingHelpPaintable::MORE_THAN_TWO_IN_LIST_AND;
    

                                    }
                                
                        else {
                            updateMyFontProperties.sepArray[index][index2]= InputMappingHelpPaintable::SEP;
    

                        }
                            

                        }
                            

                                    }
                                

                        if(updateMyFontProperties.sepArray[index][index2] != EMPTY_STRING)
                        
                                    {
                                    updateMyFontProperties.sepWidthArray[index][index2]= font.stringWidth(updateMyFontProperties.sepArray[index][index2]);
    

                                    }
                                
}

}

this->updateMyFontProperties= updateMyFontProperties;
    
super.updateMeasurement(graphics);
    
}


    public: void update(GameKey selectedGameKey, Input selectedInput){

    StringMaker stringMaker = StringMaker();;
    
this->logUtil.putF(stringMaker.append(CommonLabels::getInstance().START_LABEL).append("selected GameKey: ").append(this->stringUtil.toString(selectedGameKey)).append(" Input: ").append(this->stringUtil.toString(selectedInput)).toString(), this, this->commonStrings.UPDATE);
    

    PersistentInputMapping gameKeyMapping = PlatformInputMappingFactory::getInstance().getPersistentInputMappingInstance();;
    

    int32_t size = this->gameInputMappingArray.size();;
    

    std::vector<std::string> keyInfo = std::vector<std::string>(size);;
    

    std::vector<BasicArrayList> keyMappingArray = std::vector<BasicArrayList>(size);;
    

    std::vector<BasicColor> actionBasicColor = std::vector<BasicColor>(size);;
    

    std::vector<std::vector<BasicColor>> inputBasicColorArray = std::vector<std::vector<BasicColor>>(size);;
    

    GameInputMapping gameInputMapping;;
    

    GameKey gameKey;;
    

    BasicArrayList list;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameInputMapping= this->gameInputMappingArray[index];
    
gameKey= gameInputMapping.getGameKey();
    
list= gameKeyMapping.getInputMapping().getMappedInput(gameKey);
    

    int32_t size2 = list.size();;
    
inputBasicColorArray[index]= std::vector<BasicColor>(size2);
    




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {
inputBasicColorArray[index][index2]= this->basicColor;
    
}


                        if(gameKey == selectedGameKey)
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
this->logUtil.putF(stringMaker.append("Found: selected GameKey: ").append(this->stringUtil.toString(selectedGameKey)).toString(), this, this->commonStrings.UPDATE);
    
actionBasicColor[index]= this->selectedBasicColor;
    

    int32_t indexOfSelectedInput = list.indexOf(selectedInput);;
    

                        if(indexOfSelectedInput >= 0)
                        
                                    {
                                    stringMaker.delete(0, stringMaker.length());
    
this->logUtil.putF(stringMaker.append("Found: selected Input: ").append(this->stringUtil.toString(selectedInput)).toString(), this, this->commonStrings.UPDATE);
    
inputBasicColorArray[index][indexOfSelectedInput]= this->selectedBasicColor;
    

                                    }
                                

                                    }
                                
                        else {
                            actionBasicColor[index]= this->basicColor;
    

                        }
                            
keyInfo[index]= gameInputMapping.getName();
    
keyMappingArray[index]= list;
    
}

this->keyMappingArray= keyMappingArray;
    
this->actionBasicColor= actionBasicColor;
    
this->inputBasicColorArray= inputBasicColorArray;
    
super.setInputInfoP(keyInfo);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    private: std::string get(BasicArrayList keyList){

    StringMaker stringBuffer = StringMaker();;
    

    Input key;;
    

    int32_t size = keyList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
key= keyList.objectArray[index];
    
stringBuffer.append(key.getName());
    

                        if(index +1 < keyList.size())
                        
                                    {
                                    
                        if(keyList.size() == 2)
                        
                                    {
                                    stringBuffer.append(InputMappingHelpPaintable::AND);
    

                                    }
                                
                        else {
                            
                        if(index +2 == keyList.size())
                        
                                    {
                                    stringBuffer.append(InputMappingHelpPaintable::MORE_THAN_TWO_IN_LIST_AND);
    

                                    }
                                
                        else {
                            stringBuffer.append(InputMappingHelpPaintable::SEP);
    

                        }
                            

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    

    int32_t halfWidth = this->displayInfo.getLastHalfWidth();;
    
graphics.setColor(this->basicColor.intValue());
    
graphics.drawString(this->title, halfWidth -this->titleBeginWidth, this->updateMyFontProperties.charHeight, this->anchor);
    

    std::vector<std::string> inputInfo = this->inputInfo;;
    

    int32_t size = inputInfo.size();;
    

    int32_t y = 0;;
    

    int32_t deltaX = 0;;
    

    int32_t size2 = 0;;
    

    std::string actionString;;
    

    Input input;;
    

    BasicArrayList list;;
    

    std::string sep;;
    

    int32_t beginWidth= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
y= (index +3) *this->updateMyFontProperties.charHeight;
    
deltaX= 0;
    
list= this->keyMappingArray[index];
    
size2= list.size();
    
beginWidth= this->updateMyFontProperties.keymappingBeginWidthArray[index];
    
graphics.setColor(this->actionBasicColor[index].intValue());
    
actionString= this->updateMyFontProperties.actionStringArray[index];
    
graphics.drawString(actionString, halfWidth -beginWidth +deltaX, y, this->anchor);
    
deltaX += this->updateMyFontProperties.actionStringDeltaXArray[index];
    




                        for (
    int32_t index2 = 0;index2 < size2; index2++)
        {
input= list.objectArray[index2];
    
graphics.setColor(this->inputBasicColorArray[index][index2].intValue());
    
graphics.drawString(input.getName(), halfWidth -beginWidth +deltaX, y, this->anchor);
    
deltaX += this->updateMyFontProperties.inputDeltaXArray[index][index2];
    
sep= this->updateMyFontProperties.sepArray[index][index2];
    
graphics.setColor(this->basicColor.intValue());
    
graphics.drawString(sep, halfWidth -beginWidth +deltaX, y, this->anchor);
    
deltaX += this->updateMyFontProperties.sepWidthArray[index][index2];
    
}

}

}


};

            

