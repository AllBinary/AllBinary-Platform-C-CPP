
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
        
            #include "java/lang/Long.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing.h>

      
#include <javax/swing/tree/TreePath.h>

      
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputFactory.h>

      
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h>

      
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h>

      
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/GenericProfileActionScriptConditionData.h"
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h"
#include "org/allbinary/input/automation/actions/script/condition/JMenu.h"
#include "org/allbinary/input/automation/actions/script/condition/JMenuItem.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h"

class BasicProfileActionScriptCondition: public ProfileActionScriptItem, public ProfileActionScriptConditionInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayList* profileActionProcessorInterfaceVector;

    private: BasicArrayList* profileActionConditionInterfaceVector;

public: BasicProfileActionScriptCondition(std::string label, Node* node) : ProfileActionScriptItem(label, node){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    

    NodeList* nodeList = node->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* actionItemNode = nodeList->item(index);;
    

                        if(actionItemNode->getNodeType() == Node::ELEMENT_NODE)
                        
                                    {
                                    
                        if(actionItemNode->getNodeName()->compareTo(GenericProfileActionScriptConditionData::NAME) == 0)
                        
                                    {
                                    this->addCondition(ProfileActionScriptConditionFactory::getInstance(actionItemNode));
    

                                    }
                                
                             else 
                        if(actionItemNode->getNodeName()->compareTo(GenericProfileActionScriptInputData::NAME) == 0)
                        
                                    {
                                    this->addProcessor(ProfileActionScriptInputFactory::getInstance(actionItemNode));
    

                                    }
                                
                             else 
                        if(actionItemNode->getNodeName()->compareTo(GenericProfileActionScriptOutputData::NAME) == 0)
                        
                                    {
                                    this->addProcessor(ProfileActionScriptOutputFactory::getInstance(actionItemNode));
    

                                    }
                                

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void addProcessorNodes(Node* node){

    NodeList* nodeList = node->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* processorActionItemNode = nodeList->item(index);;
    

                        if(processorActionItemNode->getNodeName()->compareTo(GenericProfileActionScriptInputData::NAME) == 0)
                        
                                    {
                                    this->addProcessor(ProfileActionScriptInputFactory::getInstance(processorActionItemNode));
    

                                    }
                                
                             else 
                        if(processorActionItemNode->getNodeName()->compareTo(GenericProfileActionScriptOutputData::NAME) == 0)
                        
                                    {
                                    this->addProcessor(ProfileActionScriptOutputFactory::getInstance(processorActionItemNode));
    

                                    }
                                
}

}


public: BasicProfileActionScriptCondition(std::string label) : ProfileActionScriptItem(label){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
}


    private: void init(){
this->setProfileActionProcessorInterfaceVector(new BasicArrayListD());
    
this->setProfileActionConditionInterfaceVector(new BasicArrayListD());
    
this->getJPopupMenu()->add(this->getConditionJPopupMenu());
    
this->getJPopupMenu()->add(this->getInputJPopupMenu());
    
this->getJPopupMenu()->add(this->getOutputJPopupMenu());
    
}


    private: JMenu* getConditionJPopupMenu(){

    JMenu* jMenu = new JMenu(NEW_CONDITION);;
    

    JMenuItem* jMenuItemColorAt = new JMenuItem(NEW_COLOR_AT);;
    

    JMenuItem* jMenuItemAlways = new JMenuItem(NEW_ALWAYS);;
    

    JMenuItem* jMenuItemTimeInterval = new JMenuItem(NEW_TIME_INTERVAL);;
    
jMenuItemColorAt->addActionListener(this);
    
jMenuItemAlways->addActionListener(this);
    
jMenuItemTimeInterval->addActionListener(this);
    
jMenu->add(jMenuItemColorAt);
    
jMenu->add(jMenuItemAlways);
    
jMenu->add(jMenuItemTimeInterval);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return jMenu;
    
}


    private: JMenu* getInputJPopupMenu(){

    JMenu* jMenu = new JMenu(NEW_INPUT);;
    

    JMenuItem* jMenuItemKey = new JMenuItem(NEW_KEY_INPUT);;
    

    JMenuItem* jMenuItemMouse = new JMenuItem(NEW_MOUSE_INPUT);;
    

    JMenuItem* jMenuItemJoystick = new JMenuItem(NEW_JOYSTICK_INPUT);;
    
jMenuItemKey->addActionListener(this);
    
jMenuItemMouse->addActionListener(this);
    
jMenuItemJoystick->addActionListener(this);
    
jMenu->add(jMenuItemKey);
    
jMenu->add(jMenuItemMouse);
    
jMenu->add(jMenuItemJoystick);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return jMenu;
    
}


    private: JMenu* getOutputJPopupMenu(){

    JMenu* jMenu = new JMenu(NEW_OUTPUT);;
    

    JMenuItem* jMenuItemImage = new JMenuItem(NEW_IMAGE_OUTPUT);;
    
jMenuItemImage->addActionListener(this);
    
jMenu->add(jMenuItemImage);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return jMenu;
    
}


    public: void addProcessor(ProfileActionScriptProcessorInterface* profileActionProcessorInterface){
this->logUtil->putF(this->commonStrings.START, this, "addInput");
    
this->getProfileActionProcessorInterfaceVector()->add(profileActionProcessorInterface);
    
this->add(profileActionProcessorInterface);
    
}


    public: void removeProcessor(ProfileActionScriptProcessorInterface* profileActionProcessorInterface){
this->logUtil->putF(this->commonStrings.START, this, "removeInput");
    
this->getProfileActionProcessorInterfaceVector()->remove(profileActionProcessorInterface);
    
this->remove(profileActionProcessorInterface);
    
}


    public: void removeCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface){
this->logUtil->putF(this->commonStrings.START, this, "removeCondition");
    
this->getProfileActionConditionInterfaceVector()->remove(profileActionScriptNodeInterface);
    
this->remove(profileActionScriptNodeInterface);
    
}


    public: void addCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface){
this->logUtil->putF(this->commonStrings.START, this, "addCondition");
    
this->getProfileActionConditionInterfaceVector()->add(profileActionScriptNodeInterface);
    
this->add(profileActionScriptNodeInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document){

    Node* node = document->createElement(GenericProfileActionScriptConditionData::NAME);;
    

    BasicArrayList* profileActionConditionInterfaceVector = this->getProfileActionConditionInterfaceVector();;
    

    int32_t size = profileActionConditionInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ProfileActionScriptConditionInterface* profileActionConditionInterface = dynamic_cast<ProfileActionScriptConditionInterface*>(profileActionConditionInterfaceVector->get(index));;
    
node->appendChild(profileActionConditionInterface->toXmlNode(document));
    
}


    BasicArrayList* profileActionProcessorInterfaceVector = this->getProfileActionProcessorInterfaceVector();;
    

    int32_t size2 = profileActionProcessorInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {

    ProfileActionScriptProcessorInterface* profileActionProcessorInterface = dynamic_cast<ProfileActionScriptProcessorInterface*>(profileActionProcessorInterfaceVector->get(index));;
    
node->appendChild(profileActionProcessorInterface->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: BasicArrayList* getProfileActionConditionInterfaceVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->profileActionConditionInterfaceVector;
    
}


    public: void setProfileActionConditionInterfaceVector(BasicArrayList* profileActionConditionInterfaceVector){
this->profileActionConditionInterfaceVector= profileActionConditionInterfaceVector;
    
}


    public: void actionPerformed(ActionEvent* actionEvent){

        try {
            super.actionPerformed(actionEvent);
    

                        if(actionEvent->getActionCommand()->compareTo(DELETE) == 0)
                        
                                    {
                                    
                        if(
                                        (dynamic_cast<const ProfileActionScriptNodeInterface*>(this->getParent()) != nullptr)
                                    )
                        
                                    {
                                    
    ProfileActionScriptNodeInterface* profileActionScriptNodeInterface = dynamic_cast<ProfileActionScriptNodeInterface*>(this->getParent());;
    
profileActionScriptNodeInterface->removeCondition(this);
    
JTreeInterfaceFactory::getInstance()->getJTreeInterface()->updateJTree();
    

                                    }
                                

                                    }
                                
                             else 
                        if(actionEvent->getActionCommand()->compareTo(NEW_COLOR_AT) == 0)
                        
                                    {
                                    this->addCondition(new ColorAtActionScriptCondition());
    
this->updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent->getActionCommand()->compareTo(NEW_ALWAYS) == 0)
                        
                                    {
                                    this->addCondition(new AlwaysActionScriptCondition());
    
this->updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent->getActionCommand()->compareTo(NEW_TIME_INTERVAL) == 0)
                        
                                    {
                                    this->addCondition(new TimeIntervalActionScriptCondition());
    
this->updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent->getActionCommand()->compareTo(NEW_KEY_INPUT) == 0)
                        
                                    {
                                    this->addProcessor(new KeyboardActionScriptInput());
    
this->updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent->getActionCommand()->compareTo(NEW_MOUSE_INPUT) == 0)
                        
                                    {
                                    this->addProcessor(new MouseActionScriptInput());
    
this->updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent->getActionCommand()->compareTo(NEW_IMAGE_OUTPUT) == 0)
                        
                                    {
                                    this->addProcessor(new ImageActionScriptOutput());
    
this->updateTree();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Error", this, "actionPerformed", &e);
    
}

}


    public: BasicArrayList* getProfileActionProcessorInterfaceVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->profileActionProcessorInterfaceVector;
    
}


    public: void setProfileActionProcessorInterfaceVector(BasicArrayList* profileActionProcessorInterfaceVector){
this->profileActionProcessorInterfaceVector= profileActionProcessorInterfaceVector;
    
}


    private: void updateTree(){
JTreeInterfaceFactory::getInstance()->getJTreeInterface()->updateJTree();
    

    TreePath* treePath = new TreePath(this);;
    
JTreeInterfaceFactory::getInstance()->getJTreeInterface()->getActionScriptJTree()->expandPath(treePath);
    
}


                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(int64_t frame){

    BasicArrayList* profileActionConditionInterfaceVector = this->getProfileActionConditionInterfaceVector();;
    

    int32_t size = profileActionConditionInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ProfileActionScriptConditionInterface* profileActionScriptConditionInterface = dynamic_cast<ProfileActionScriptConditionInterface*>(profileActionConditionInterfaceVector->get(index));;
    

                        if(!profileActionScriptConditionInterface->shouldProcess(frame))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(int64_t frame){
this->logUtil->putF((new StringMaker())->append("Start - Processing ")->appendint(this->getProfileActionProcessorInterfaceVector()->size())->append(" inputs")->toString(), this, this->commonStrings.PROCESS);
    

    BasicArrayList* profileActionProcessorInterfaceVector = this->getProfileActionProcessorInterfaceVector();;
    

    int32_t size = profileActionProcessorInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ProfileActionScriptProcessorInterface* profileActionScriptProcessorInterface = dynamic_cast<ProfileActionScriptProcessorInterface*>(profileActionProcessorInterfaceVector->get(index));;
    
profileActionScriptProcessorInterface->process(frame);
    
}

}


};

            

