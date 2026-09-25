
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileActionJPanel.h"
#include "GenericProfileActionData.h"

class GenericProfileAction
            : public Object
        : public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string name;

    private: GenericProfileActionScript genericProfileActionScript;

    private: GenericProfileActionJPanel genericProfileActionJPanel;

public: GenericProfileAction(GenericProfileActionJPanel genericProfileActionJPanel, Node node){

    Node actionNameNode = DomSearchHelper::getNode(GenericProfileActionData::NAME, node.getChildNodes());;
    

                        if(actionNameNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->name= DomNodeHelper::getTextNodeValue(actionNameNode);
    

                                    }
                                
                        else {
                            


                            throw Exception("Profile Action Name Node Null");
                    

                        }
                            
this->setGenericProfileActionScript(GenericProfileActionScript(this->genericProfileActionJPanel, node));
    
}


public: GenericProfileAction(std::string name){
this->name= name;
    
this->setGenericProfileActionScript(GenericProfileActionScript(this->genericProfileActionJPanel));
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(GenericProfileActionData::NAME, this->name);
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = ModDomHelper::createNodeWithValueNodes(document, GenericProfileActionData::NAME, this->toHashMap());;
    
node.appendChild(getGenericProfileActionScript().toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: GenericProfileActionScript getGenericProfileActionScript(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActionScript;
    
}


    public: void setGenericProfileActionScript(GenericProfileActionScript genericProfileActionScript){
this->genericProfileActionScript= genericProfileActionScript;
    
}


};

            

