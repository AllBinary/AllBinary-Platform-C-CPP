
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <java/util/Vector.h>

      
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
        #include "ProfileActionScriptConditionInterface.h"
#include "GenericProfileActionScriptConditionData.h"
#include "ProfileActionScriptConditionFactory.h"
#include "JMenu.h"
#include "JMenuItem.h"
#include "TimeIntervalActionScriptCondition.h"
#include "AlwaysActionScriptCondition.h"
#include "ColorAtActionScriptCondition.h"

class BasicProfileActionScriptCondition: public ProfileActionScriptItem: public ProfileActionScriptConditionInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: profileActionProcessorInterfaceVector: Vector;

    private: profileActionConditionInterfaceVector: Vector;

public constructor (string label, Node node){
            super(label, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.init();
    

    nodeList: NodeList = node.getChildNodes()!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    actionItemNode: Node = nodeList!.item(index)!;;
    

                        if(actionItemNode!.getNodeType() == Node.ELEMENT_NODE)
                        
                                    {
                                    
                        if(actionItemNode!.getNodeName()!.compareTo(GenericProfileActionScriptConditionData.NAME) == 0)
                        
                                    {
                                    this.addCondition(ProfileActionScriptConditionFactory.getInstance(actionItemNode));
    

                                    }
                                
                             else 
                        if(actionItemNode!.getNodeName()!.compareTo(GenericProfileActionScriptInputData.NAME) == 0)
                        
                                    {
                                    this.addProcessor(ProfileActionScriptInputFactory.getInstance(actionItemNode));
    

                                    }
                                
                             else 
                        if(actionItemNode!.getNodeName()!.compareTo(GenericProfileActionScriptOutputData.NAME) == 0)
                        
                                    {
                                    this.addProcessor(ProfileActionScriptOutputFactory.getInstance(actionItemNode));
    

                                    }
                                

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public addProcessorNodes(Node node){

    nodeList: NodeList = node.getChildNodes()!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    processorActionItemNode: Node = nodeList!.item(index)!;;
    

                        if(processorActionItemNode!.getNodeName()!.compareTo(GenericProfileActionScriptInputData.NAME) == 0)
                        
                                    {
                                    this.addProcessor(ProfileActionScriptInputFactory.getInstance(processorActionItemNode));
    

                                    }
                                
                             else 
                        if(processorActionItemNode!.getNodeName()!.compareTo(GenericProfileActionScriptOutputData.NAME) == 0)
                        
                                    {
                                    this.addProcessor(ProfileActionScriptOutputFactory.getInstance(processorActionItemNode));
    

                                    }
                                
}

}


public constructor (string label){
            super(label);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.init();
    
}


    init(){
this.setProfileActionProcessorInterfaceVector(new Vector());
    
this.setProfileActionConditionInterfaceVector(new Vector());
    
this.getJPopupMenu()!.add(this.getConditionJPopupMenu());
    
this.getJPopupMenu()!.add(this.getInputJPopupMenu());
    
this.getJPopupMenu()!.add(this.getOutputJPopupMenu());
    
}


    JMenu getConditionJPopupMenu(){

    jMenu: JMenu = new JMenu(NEW_CONDITION);;
    

    jMenuItemColorAt: JMenuItem = new JMenuItem(NEW_COLOR_AT);;
    

    jMenuItemAlways: JMenuItem = new JMenuItem(NEW_ALWAYS);;
    

    jMenuItemTimeInterval: JMenuItem = new JMenuItem(NEW_TIME_INTERVAL);;
    
jMenuItemColorAt!.addActionListener(this);
    
jMenuItemAlways!.addActionListener(this);
    
jMenuItemTimeInterval!.addActionListener(this);
    
jMenu!.add(jMenuItemColorAt);
    
jMenu!.add(jMenuItemAlways);
    
jMenu!.add(jMenuItemTimeInterval);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return jMenu;
    
}


    JMenu getInputJPopupMenu(){

    jMenu: JMenu = new JMenu(NEW_INPUT);;
    

    jMenuItemKey: JMenuItem = new JMenuItem(NEW_KEY_INPUT);;
    

    jMenuItemMouse: JMenuItem = new JMenuItem(NEW_MOUSE_INPUT);;
    

    jMenuItemJoystick: JMenuItem = new JMenuItem(NEW_JOYSTICK_INPUT);;
    
jMenuItemKey!.addActionListener(this);
    
jMenuItemMouse!.addActionListener(this);
    
jMenuItemJoystick!.addActionListener(this);
    
jMenu!.add(jMenuItemKey);
    
jMenu!.add(jMenuItemMouse);
    
jMenu!.add(jMenuItemJoystick);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return jMenu;
    
}


    JMenu getOutputJPopupMenu(){

    jMenu: JMenu = new JMenu(NEW_OUTPUT);;
    

    jMenuItemImage: JMenuItem = new JMenuItem(NEW_IMAGE_OUTPUT);;
    
jMenuItemImage!.addActionListener(this);
    
jMenu!.add(jMenuItemImage);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return jMenu;
    
}


    public addProcessor(ProfileActionScriptProcessorInterface profileActionProcessorInterface){
this.logUtil!.putF(this.commonStrings!.START, this, "addInput");
    
this.getProfileActionProcessorInterfaceVector()!.add(profileActionProcessorInterface);
    
this.add(profileActionProcessorInterface);
    
}


    public removeProcessor(ProfileActionScriptProcessorInterface profileActionProcessorInterface){
this.logUtil!.putF(this.commonStrings!.START, this, "removeInput");
    
this.getProfileActionProcessorInterfaceVector()!.remove(profileActionProcessorInterface);
    
this.remove(profileActionProcessorInterface);
    
}


    public removeCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface){
this.logUtil!.putF(this.commonStrings!.START, this, "removeCondition");
    
this.getProfileActionConditionInterfaceVector()!.remove(profileActionScriptNodeInterface);
    
this.remove(profileActionScriptNodeInterface);
    
}


    public addCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface){
this.logUtil!.putF(this.commonStrings!.START, this, "addCondition");
    
this.getProfileActionConditionInterfaceVector()!.add(profileActionScriptNodeInterface);
    
this.add(profileActionScriptNodeInterface);
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(GenericProfileActionScriptConditionData.NAME)!;;
    

    profileActionConditionInterfaceVector: Vector = this.getProfileActionConditionInterfaceVector()!;;
    

    size: int32_t = profileActionConditionInterfaceVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    profileActionConditionInterface: ProfileActionScriptConditionInterface = profileActionConditionInterfaceVector!.get(index) as ProfileActionScriptConditionInterface;;
    
node.appendChild(profileActionConditionInterface!.toXmlNode(document));
    
}


    profileActionProcessorInterfaceVector: Vector = this.getProfileActionProcessorInterfaceVector()!;;
    

    size2: int32_t = profileActionProcessorInterfaceVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {

    profileActionProcessorInterface: ProfileActionScriptProcessorInterface = profileActionProcessorInterfaceVector!.get(index) as ProfileActionScriptProcessorInterface;;
    
node.appendChild(profileActionProcessorInterface!.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public Vector getProfileActionConditionInterfaceVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.profileActionConditionInterfaceVector;
    
}


    public setProfileActionConditionInterfaceVector(Vector profileActionConditionInterfaceVector){
this.profileActionConditionInterfaceVector= profileActionConditionInterfaceVector;
    
}


    public actionPerformed(ActionEvent actionEvent){

        try {
            super.actionPerformed(actionEvent);
    

                        if(actionEvent!.getActionCommand()!.compareTo(DELETE) == 0)
                        
                                    {
                                    
                        if(this.getParent() instanceof ProfileActionScriptNodeInterface)
                        
                                    {
                                    
    profileActionScriptNodeInterface: ProfileActionScriptNodeInterface = this.getParent() as ProfileActionScriptNodeInterface;;
    
profileActionScriptNodeInterface!.removeCondition(this);
    
JTreeInterfaceFactory.getInstance()!.getJTreeInterface()!.updateJTree();
    

                                    }
                                

                                    }
                                
                             else 
                        if(actionEvent!.getActionCommand()!.compareTo(NEW_COLOR_AT) == 0)
                        
                                    {
                                    this.addCondition(new ColorAtActionScriptCondition());
    
this.updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent!.getActionCommand()!.compareTo(NEW_ALWAYS) == 0)
                        
                                    {
                                    this.addCondition(new AlwaysActionScriptCondition());
    
this.updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent!.getActionCommand()!.compareTo(NEW_TIME_INTERVAL) == 0)
                        
                                    {
                                    this.addCondition(new TimeIntervalActionScriptCondition());
    
this.updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent!.getActionCommand()!.compareTo(NEW_KEY_INPUT) == 0)
                        
                                    {
                                    this.addProcessor(new KeyboardActionScriptInput());
    
this.updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent!.getActionCommand()!.compareTo(NEW_MOUSE_INPUT) == 0)
                        
                                    {
                                    this.addProcessor(new MouseActionScriptInput());
    
this.updateTree();
    

                                    }
                                
                             else 
                        if(actionEvent!.getActionCommand()!.compareTo(NEW_IMAGE_OUTPUT) == 0)
                        
                                    {
                                    this.addProcessor(new ImageActionScriptOutput());
    
this.updateTree();
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put("Error", this, "actionPerformed", e);
    
}

}


    public Vector getProfileActionProcessorInterfaceVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.profileActionProcessorInterfaceVector;
    
}


    public setProfileActionProcessorInterfaceVector(Vector profileActionProcessorInterfaceVector){
this.profileActionProcessorInterfaceVector= profileActionProcessorInterfaceVector;
    
}


    updateTree(){
JTreeInterfaceFactory.getInstance()!.getJTreeInterface()!.updateJTree();
    

    treePath: TreePath = new TreePath(this);;
    
JTreeInterfaceFactory.getInstance()!.getJTreeInterface()!.getActionScriptJTree()!.expandPath(treePath);
    
}


                //@Throws(Exception.constructor)
            
    public bool shouldProcess(Long frame){

    profileActionConditionInterfaceVector: Vector = this.getProfileActionConditionInterfaceVector()!;;
    

    size: int32_t = profileActionConditionInterfaceVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    profileActionScriptConditionInterface: ProfileActionScriptConditionInterface = profileActionConditionInterfaceVector!.get(index) as ProfileActionScriptConditionInterface;;
    

                        if(!profileActionScriptConditionInterface!.shouldProcess(frame))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public process(Long frame){
this.logUtil!.putF(new StringMaker().append("Start - Processing ")!.appendint(this.getProfileActionProcessorInterfaceVector()!.size())!.append(" inputs")!.toString(), this, this.commonStrings!.PROCESS);
    

    profileActionProcessorInterfaceVector: Vector = this.getProfileActionProcessorInterfaceVector()!;;
    

    size: int32_t = profileActionProcessorInterfaceVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    profileActionScriptProcessorInterface: ProfileActionScriptProcessorInterface = profileActionProcessorInterfaceVector!.get(index) as ProfileActionScriptProcessorInterface;;
    
profileActionScriptProcessorInterface!.process(frame);
    
}

}


};

            

