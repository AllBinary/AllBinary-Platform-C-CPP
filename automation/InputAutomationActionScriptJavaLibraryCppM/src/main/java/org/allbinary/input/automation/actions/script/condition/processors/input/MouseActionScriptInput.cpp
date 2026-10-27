
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/event/InputEvent.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Point.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputJPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputData.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseInputAutomationProcessor.h"


MouseActionScriptInput::MouseActionScriptInput(Node* node) : BasicProfileActionScriptInput(NAME, node), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->point= new Point();
    

    Node* actionNode = DomSearchHelper::getNode(MouseActionScriptInputData::NAME, node->getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList* nodeList = actionNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* childNode = nodeList->item(index);;
    

                        if(childNode->getNodeName()->compareTo(MouseActionScriptInputData::BUTTONS) == 0)
                        
                                    {
                                    
    std::string buttons = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setButtonClicks(Integer.valueOf(buttons)->intValue());
    

                                    }
                                
                             else 
                        if(childNode->getNodeName()->compareTo(MouseActionScriptInputData::MOVE) == 0)
                        
                                    {
                                    
    Node* mouseXNode = DomSearchHelper::getNode(MouseActionScriptInputData::MOVE_X, childNode->getChildNodes());;
    

    std::string mouseXString = DomNodeHelper::getTextNodeValue(mouseXNode);;
    

    int32_t mouseXInteger = Integer.valueOf(mouseXString);;
    

    Node* mouseYNode = DomSearchHelper::getNode(MouseActionScriptInputData::MOVE_Y, childNode->getChildNodes());;
    

    std::string mouseYString = DomNodeHelper::getTextNodeValue(mouseYNode);;
    

    int32_t mouseYInteger = Integer.valueOf(mouseYString);;
    

    Point* newPoint = new Point(mouseXInteger.intValue(), mouseYInteger.intValue());;
    
this->setPoint(newPoint);
    

                                    }
                                
                        else {
                            


                            throw Exception("Action Script Input Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw Exception("Action Script Input Node Null");
                    

                        }
                            
this->setAllowsChildren(false);
    
this->mouseActionScriptInputJPanel= new MouseActionScriptInputJPanel(this);
    
}


MouseActionScriptInput::MouseActionScriptInput() : BasicProfileActionScriptInput(NAME), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->point= new Point();
    
this->setAllowsChildren(false);
    
this->mouseActionScriptInputJPanel= new MouseActionScriptInputJPanel(this);
    
}


    auto MouseActionScriptInput::setPoint(Point* point) -> void{
this->point= point;
    
}


    auto MouseActionScriptInput::getPoint() -> Point*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    auto MouseActionScriptInput::getButtonClicks() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->buttons;
    
}


    auto MouseActionScriptInput::setButtonClicks(int32_t buttons) -> void{
this->buttons= buttons;
    
}


    auto MouseActionScriptInput::showDialog() -> void{
this->mouseActionScriptInputJPanel->getMouseActionJDialog()->setVisible(true);
    
}


    auto MouseActionScriptInput::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(MouseActionScriptInputData::BUTTONS, std::to_string(getButtonClicks));
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto MouseActionScriptInput::toXmlNode(Document* document) -> Node*{

    Node* node = BasicProfileActionScriptInput::toXmlNode(document);;
    

    Node* mouseNode = ModDomHelper::createNodeWithValueNodes(document, MouseActionScriptInputData::NAME, this->toHashMap());;
    
node->appendChild(mouseNode);
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(MouseActionScriptInputData::MOVE_X, std::to_string(x));
    
hashMap->put(MouseActionScriptInputData::MOVE_Y, std::to_string(y));
    
mouseNode->appendChild(ModDomHelper::createNodeWithValueNodes(document, MouseActionScriptInputData::MOVE, hashMap));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto MouseActionScriptInput::process(int64_t frame) -> void{
MouseInputAutomationProcessor::process(this);
    
}


    auto MouseActionScriptInput::log() -> void{

    StringMaker* buttonStringBuffer = new StringMaker();;
    
buttonStringBuffer->append("1: ");
    

    BooleanFactory* booleanFactory = BooleanFactory::getInstance();;
    

                        if((this->getButtonClicks()&InputEvent::BUTTON1_MASK) != 0)
                        
                                    {
                                    buttonStringBuffer->append(booleanFactory->TRUE_STRING);
    

                                    }
                                
                        else {
                            buttonStringBuffer->append(booleanFactory->FALSE_STRING);
    

                        }
                            
buttonStringBuffer->append(" 2: ");
    

                        if((this->getButtonClicks()&InputEvent::BUTTON2_MASK) != 0)
                        
                                    {
                                    buttonStringBuffer->append(booleanFactory->TRUE_STRING);
    

                                    }
                                
                        else {
                            buttonStringBuffer->append(booleanFactory->FALSE_STRING);
    

                        }
                            
buttonStringBuffer->append(" 3: ");
    

                        if((this->getButtonClicks()&InputEvent::BUTTON3_MASK) != 0)
                        
                                    {
                                    buttonStringBuffer->append(booleanFactory->TRUE_STRING);
    

                                    }
                                
                        else {
                            buttonStringBuffer->append(booleanFactory->FALSE_STRING);
    

                        }
                            
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Input Type: ") +JavaString::valueOf(this->getInputRobotInterface()->getName())) +JavaString::valueOf(" Point: ")) +JavaString::valueOf(this->getPoint())) +JavaString::valueOf(" Buttons Clicked: ")) +JavaString::valueOf(buttonStringBuffer->toString()), this, "log");
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_CPP
