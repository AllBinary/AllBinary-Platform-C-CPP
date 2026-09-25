
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
        



            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GenericProfileActionScript: public DefaultMutableTreeNode, public ProfileActionScriptNodeInterface {

    private: static const std::string NAME = "Root";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: GenericProfileActionJPanel genericProfileActionJPanel;

    private: BasicArrayList profileActionConditionInterfaceVector;

public: GenericProfileActionScript(GenericProfileActionJPanel genericProfileActionJPanel, Node node){
            super(NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
this->setProfileActionConditionInterfaceVector(BasicArrayListD());
    

    Node actionScriptNode = DomSearchHelper::getNode(GenericProfileActionData::SCRIPT, node.getChildNodes());;
    

                        if(actionScriptNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList nodeList = actionScriptNode.getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node actionConditionNode = nodeList.item(index);;
    

                        if(actionConditionNode.getNodeType() == Node::ELEMENT_NODE)
                        
                                    {
                                    this->addCondition(ProfileActionScriptConditionFactory::getInstance(actionConditionNode));
    

                                    }
                                
}


                                    }
                                
                        else {
                            


                            throw Exception("Profile Action Script Node Null");
                    

                        }
                            
}


public: GenericProfileActionScript(GenericProfileActionJPanel genericProfileActionJPanel){
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
this->setProfileActionConditionInterfaceVector(BasicArrayListD());
    
}


    public: void addCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface){
this->logUtil.putF(this->commonStrings.START, this, "addCondition");
    
this->getProfileActionConditionInterfaceVector().add(profileActionScriptNodeInterface);
    
this->add(profileActionScriptNodeInterface);
    
}


    public: void removeCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface){
this->logUtil.putF(this->commonStrings.START, this, "removeCondition");
    
this->getProfileActionConditionInterfaceVector().remove(profileActionScriptNodeInterface);
    
this->remove(profileActionScriptNodeInterface);
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: BasicArrayList getProfileActionConditionInterfaceVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->profileActionConditionInterfaceVector;
    
}


    public: void setProfileActionConditionInterfaceVector(BasicArrayList profileActionConditionInterfaceVector){
this->profileActionConditionInterfaceVector= profileActionConditionInterfaceVector;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(GenericProfileActionData::SCRIPT);;
    

    BasicArrayList vector = this->getProfileActionConditionInterfaceVector();;
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ProfileActionScriptConditionInterface profileActionConditionInterface = vector.get(index) as ProfileActionScriptConditionInterface;;
    
node.appendChild(profileActionConditionInterface.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

