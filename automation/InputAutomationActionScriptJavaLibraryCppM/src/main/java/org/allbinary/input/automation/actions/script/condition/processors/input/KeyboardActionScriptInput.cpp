
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/event/KeyEvent.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
#include <org/allbinary/input/KeyUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputJPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputData.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardInputAutomationProcessor.h"

class KeyboardActionScriptInput: public BasicProfileActionScriptInput, public KeyboardActionScriptInputInterface {

    private: static inline const std::string NAME = "Keyboard";

    private: static std::string getText(std::vector<int32_t> integerArray){

    int32_t index = 0;;
    

    StringMaker* stringBuffer = new StringMaker();;
    

        while(index < integerArray.size())
        {

    int32_t nextInteger = integerArray[index];;
    

                        if(KeyUtil::isNormallyDisplayed(nextInteger))
                        
                                    {
                                    stringBuffer->append(KeyEvent::getKeyText(nextInteger));
    

                                    }
                                
                        else {
                            stringBuffer->append("&#" +nextInteger +";");
    

                        }
                            
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::vector<int32_t> keyArray = 
                                                        {
                                                            KeySingletonFactory::getInstance(KeyEvent::VK_0)
                                                        };

    private: KeyboardActionScriptInputJPanel* keyboardActionScriptInputJPanel;

    private: bool press= false;

    private: bool release= false;

    private: int32_t delayBetweenKeys= 0;

public: KeyboardActionScriptInput(Node* node) : BasicProfileActionScriptInput(NAME, node){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

    Node* actionNode = DomSearchHelper::getNode(KeyboardActionScriptInputData::NAME, node->getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList* nodeList = actionNode->getChildNodes();;
    

    BasicArrayList* vector = new BasicArrayListD();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* childNode = nodeList->item(index);;
    

                        if(childNode->getNodeName()->startsWith(KeyboardActionScriptInputData::KEY))
                        
                                    {
                                    
    std::string keyString = DomNodeHelper::getTextNodeValue(childNode);;
    
vector->add(keyString.valueOf());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(KeyboardActionScriptInputData::DELAY_BETWEEN_KEYS) == 0)
                        
                                    {
                                    
    std::string time = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setDelayBetweenKeys(Integer.valueOf(time)->intValue());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(KeyboardActionScriptInputData::PRESS) == 0)
                        
                                    {
                                    
    std::string value = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setPress(value.slice(, ).join(''));
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(KeyboardActionScriptInputData::RELEASE) == 0)
                        
                                    {
                                    
    std::string value = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setRelease(value.slice(, ).join(''));
    

                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Input Unknown Node");
                    

                        }
                            
}

this->setKeyArray(vector->toArrayType(std::vector<int32_t>(vector->size())) as Integer[]);
    

                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Input Node Null");
                    

                        }
                            
this->setAllowsChildren(false);
    

                        if(!this->isPress() && !this->isRelease())
                        
                                    {
                                    this->setNormal();
    

                                    }
                                
this->keyboardActionScriptInputJPanel= new KeyboardActionScriptInputJPanel(this);
    
}


public: KeyboardActionScriptInput() : BasicProfileActionScriptInput(NAME){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(!this->isPress() && !this->isRelease())
                        
                                    {
                                    this->setNormal();
    

                                    }
                                
this->setAllowsChildren(false);
    
this->setTime(120);
    
this->keyboardActionScriptInputJPanel= new KeyboardActionScriptInputJPanel(this);
    
}


    public: int32_t getDelayBetweenKeys(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->delayBetweenKeys;
    
}


    public: void setDelayBetweenKeys(int32_t delayBetweenKeys){
this->delayBetweenKeys= delayBetweenKeys;
    
}


    public: bool isPress(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->press;
    
}


    public: void setPress(bool press){
this->press= press;
    
}


    public: bool isRelease(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->release;
    
}


    public: void setRelease(bool release){
this->release= release;
    
}


    public: bool isNormal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isRelease() && this->isPress();
    
}


    public: void setNormal(){
this->setPress(true);
    
this->setRelease(true);
    
}


    public: std::vector<int32_t> getKeyArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyArray;
    
}


    public: void setKeyArray(std::vector<int32_t> keyArray){

                        if(keyArray != 
                                    nullptr
                                )
                        this->logUtil->putF(CommonLabels::getInstance()->START +keyArray.size(), this, "setKeyArray");
                                
this->keyArray= keyArray;
    
}


    public: void showDialog(){
this->keyboardActionScriptInputJPanel->getKeyActionJDialog()->setVisible(true);
    
}


    public: std::string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getText(this->getKeyArray());;
    
}


    public: void setText(std::string text){
this->logUtil->putF(CommonLabels::getInstance()->START +text, this, "setText");
    

    std::vector<int32_t> integerArray = this->integerArrayValue(text);;
    
this->setKeyArray(integerArray);
    
}


    private: std::vector<int32_t> integerArrayValue(std::string text){
this->logUtil->putF(CommonLabels::getInstance()->START +text, this, "integerArrayValue");
    

    BasicArrayList* vector = new BasicArrayListD();;
    

    int32_t index = 0;;
    

        while(index < text.size())
        {

    char aChar = text[index];;
    

                        if(aChar == '&')
                        
                                    {
                                    
                        if(text[index +1] == '#')
                        
                                    {
                                    
    int32_t endIndex = JavaString::indexOf(text, ';', index +1);;
    

                        if(endIndex !=  -1)
                        
                                    {
                                    
    std::string nextCharString = JavaString::substring(text, index +2, endIndex);;
    
this->logUtil->putF(CommonLabels::getInstance()->NEXT +" Char String: " +nextCharString, this, "integerArrayValue");
    
vector->add(substring.valueOf());
    
index= index +nextCharString.size() +3;
    


                        continue
                    

                                    }
                                

                                    }
                                

                                    }
                                
vector->add(KeySingletonFactory::getHashtable()->get(aChar.slice(, ).join('')));
    
index++;
    
}


    std::vector<int32_t> integerArray = vector->toArrayType(std::vector<int32_t>(vector->size())) as Integer[];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return integerArray;
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    




                        for (
    int32_t index = 0;index < this->getKeyArray().length; index++)
        {
hashMap->put(KeyboardActionScriptInputData::KEY +index, std::to_string());
    
}

hashMap->put(KeyboardActionScriptInputData::DELAY_BETWEEN_KEYS, std::to_string(getDelayBetweenKeys));
    
hashMap->put(KeyboardActionScriptInputData::PRESS, Boolean::toString(this->isPress()));
    
hashMap->put(KeyboardActionScriptInputData::RELEASE, Boolean::toString(this->isRelease()));
    
this->logUtil->putF("HashMap: " +hashMap->toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    Node* node = super.toXmlNode(document);;
    
node->appendChild(ModDomHelper::createNodeWithValueNodes(document, KeyboardActionScriptInputData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(int64_t frame){
KeyboardInputAutomationProcessor::process(this);
    
}


    public: void log(){
this->logUtil->putF(this->toString(), this, "log");
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(super.toString());
    
stringBuffer->append(" Text: ");
    
stringBuffer->append(this->getText());
    
stringBuffer->append(" isPress: ");
    
stringBuffer->appendboolean(this->isPress());
    
stringBuffer->append(" isRelease: ");
    
stringBuffer->appendboolean(this->isRelease());
    
stringBuffer->append(" Between Key Delay: ");
    
stringBuffer->appendint(this->getDelayBetweenKeys());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

