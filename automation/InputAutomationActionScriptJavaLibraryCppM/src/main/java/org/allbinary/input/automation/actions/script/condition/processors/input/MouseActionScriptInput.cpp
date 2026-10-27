
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

class MouseActionScriptInput: public BasicProfileActionScriptInput, public MouseActionScriptInputInterface {

    private: static inline const std::string NAME = "Mouse";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: Point* point;

    private: int32_t buttons= 0;

    private: MouseActionScriptInputJPanel* mouseActionScriptInputJPanel;

public: MouseActionScriptInput(Node* node) : BasicProfileActionScriptInput(NAME, node){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
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
                            


                            throw new Exception("Action Script Input Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Input Node Null");
                    

                        }
                            
this->setAllowsChildren(false);
    
this->mouseActionScriptInputJPanel= new MouseActionScriptInputJPanel(this);
    
}


public: MouseActionScriptInput() : BasicProfileActionScriptInput(NAME){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->point= new Point();
    
this->setAllowsChildren(false);
    
this->mouseActionScriptInputJPanel= new MouseActionScriptInputJPanel(this);
    
}


    public: void setPoint(Point* point){
this->point= point;
    
}


    public: Point* getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    public: int32_t getButtonClicks(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->buttons;
    
}


    public: void setButtonClicks(int32_t buttons){
this->buttons= buttons;
    
}


    public: void showDialog(){
this->mouseActionScriptInputJPanel->getMouseActionJDialog()->setVisible(true);
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(MouseActionScriptInputData::BUTTONS, std::to_string(getButtonClicks));
    
this->logUtil->putF("HashMap: " +hashMap->toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    Node* node = super.toXmlNode(document);;
    

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
            
    public: void process(int64_t frame){
MouseInputAutomationProcessor::process(this);
    
}


    public: void log(){

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
                            
this->logUtil->putF("Input Type: " +this->getInputRobotInterface()->getName() +" Point: " +this->getPoint() +" Buttons Clicked: " +buttonStringBuffer->toString(), this, "log");
    
}


};

            

