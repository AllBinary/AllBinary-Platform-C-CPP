
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h"
        

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


KeyboardActionScriptInput::KeyboardActionScriptInput(Node* node) : BasicProfileActionScriptInput(NAME, node), logUtil(LogUtil::getInstance()), keyArray(
                                                        {
                                                            KeySingletonFactory::getInstance(KeyEvent::VK_0)
                                                        }){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

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
    
this->setDelayBetweenKeys(JavaBoxes::value<int32_t>(Integer.valueOf(time)));
    

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
                            


                            throw Exception("Action Script Input Unknown Node");
                    

                        }
                            
}

this->setKeyArray(JavaBoxes::unbox<std::vector<int32_t>>(vector->toArrayType(std::vector<int32_t>(vector->size()))));
    

                                    }
                                
                        else {
                            


                            throw Exception("Action Script Input Node Null");
                    

                        }
                            
this->setAllowsChildren(false);
    

                        if(!this->isPress() && !this->isRelease())
                        
                                    {
                                    this->setNormal();
    

                                    }
                                
this->keyboardActionScriptInputJPanel= new KeyboardActionScriptInputJPanel(this);
    
}


KeyboardActionScriptInput::KeyboardActionScriptInput() : BasicProfileActionScriptInput(NAME), logUtil(LogUtil::getInstance()), keyArray(
                                                        {
                                                            KeySingletonFactory::getInstance(KeyEvent::VK_0)
                                                        }){

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


    auto KeyboardActionScriptInput::getDelayBetweenKeys() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->delayBetweenKeys;
    
}


    auto KeyboardActionScriptInput::setDelayBetweenKeys(int32_t delayBetweenKeys) -> void{
this->delayBetweenKeys= delayBetweenKeys;
    
}


    auto KeyboardActionScriptInput::isPress() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->press;
    
}


    auto KeyboardActionScriptInput::setPress(bool press) -> void{
this->press= press;
    
}


    auto KeyboardActionScriptInput::isRelease() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->release;
    
}


    auto KeyboardActionScriptInput::setRelease(bool release) -> void{
this->release= release;
    
}


    auto KeyboardActionScriptInput::isNormal() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isRelease() && this->isPress();
    
}


    auto KeyboardActionScriptInput::setNormal() -> void{
this->setPress(true);
    
this->setRelease(true);
    
}


    auto KeyboardActionScriptInput::getKeyArray() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyArray;
    
}


    auto KeyboardActionScriptInput::setKeyArray(std::vector<int32_t> keyArray) -> void{

                        if(!keyArray.empty())
                        this->logUtil->putF(CommonLabels::getInstance()->START +keyArray.size(), this, "setKeyArray");
                                
this->keyArray= keyArray;
    
}


    auto KeyboardActionScriptInput::showDialog() -> void{
this->keyboardActionScriptInputJPanel->getKeyActionJDialog()->setVisible(true);
    
}


    auto KeyboardActionScriptInput::getText() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getText(this->getKeyArray());;
    
}


    auto KeyboardActionScriptInput::setText(std::string text) -> void{
this->logUtil->putF(JavaString::valueOf(CommonLabels::getInstance()->START) +JavaString::valueOf(text), this, "setText");
    

    std::vector<int32_t> integerArray = this->integerArrayValue(text);;
    
this->setKeyArray(integerArray);
    
}


    auto KeyboardActionScriptInput::getText(std::vector<int32_t> integerArray) -> std::string{

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
                            stringBuffer->append(JavaString::valueOf(JavaString::valueOf("&#") +JavaString::valueOf(nextInteger)) +JavaString::valueOf(";"));
    

                        }
                            
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto KeyboardActionScriptInput::integerArrayValue(std::string text) -> std::vector<int32_t>{
this->logUtil->putF(JavaString::valueOf(CommonLabels::getInstance()->START) +JavaString::valueOf(text), this, "integerArrayValue");
    

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
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(CommonLabels::getInstance()->NEXT) +JavaString::valueOf(" Char String: ")) +JavaString::valueOf(nextCharString), this, "integerArrayValue");
    
vector->add(substring.valueOf());
    
index= index +nextCharString.size() +3;
    


                        continue;
                    

                                    }
                                

                                    }
                                

                                    }
                                
vector->add(KeySingletonFactory::getHashtable()->get(aChar.slice(, ).join('')));
    
index++;
    
}


    std::vector<int32_t> integerArray = JavaBoxes::unbox<std::vector<int32_t>>(vector->toArrayType(std::vector<int32_t>(vector->size())));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return integerArray;
    
}


    auto KeyboardActionScriptInput::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    




                        for (
    int32_t index = 0;index < this->getKeyArray().length; index++)
        {
hashMap->put(KeyboardActionScriptInputData::KEY +index, std::to_string(this->getKeyArray()[index]));
    
}

hashMap->put(KeyboardActionScriptInputData::DELAY_BETWEEN_KEYS, std::to_string(this->getDelayBetweenKeys()));
    
hashMap->put(KeyboardActionScriptInputData::PRESS, Boolean::toString(this->isPress()));
    
hashMap->put(KeyboardActionScriptInputData::RELEASE, Boolean::toString(this->isRelease()));
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto KeyboardActionScriptInput::toXmlNode(Document* document) -> Node*{

    Node* node = BasicProfileActionScriptInput::toXmlNode(document);;
    
node->appendChild(ModDomHelper::createNodeWithValueNodes(document, KeyboardActionScriptInputData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto KeyboardActionScriptInput::process(int64_t frame) -> void{
KeyboardInputAutomationProcessor::process(this);
    
}


    auto KeyboardActionScriptInput::log() -> void{
this->logUtil->putF(this->toString(), this, "log");
    
}


    auto KeyboardActionScriptInput::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(BasicProfileActionScriptInput::toString());
    
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




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_CPP
