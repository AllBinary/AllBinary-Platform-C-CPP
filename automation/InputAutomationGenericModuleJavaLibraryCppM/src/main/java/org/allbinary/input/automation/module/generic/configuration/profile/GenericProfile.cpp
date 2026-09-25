
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileDataWorkerData.h"
#include "GenericProfileDataWorkerType.h"
#include "GenericProfileData.h"

class GenericProfile
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string name;

    private: BasicArrayList vector;

    private: GenericProfileActions genericProfileActions;

public: GenericProfile(Node node){
this->setName(DomNodeHelper::getTextNodeValue(node));
    
this->vector= BasicArrayListD();
    

    NodeList nodeList = node.getChildNodes();;
    
this->logUtil.putF("Name: " +this->getName() +" Child Nodes: " +nodeList.getLength(), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node profileNode = nodeList.item(index);;
    

                        if(profileNode.getNodeName().compareTo(GenericProfileDataWorkerData::NAME) == 0)
                        
                                    {
                                    
    GenericProfileDataWorkerType genericProfileDataWorkerType = GenericProfileDataWorkerType::getInstance(profileNode);;
    
this->logUtil.putF("Adding GenericProfileDataWorkerType: " +genericProfileDataWorkerType.toString(), this, "Contructor");
    
this->vector.add(genericProfileDataWorkerType);
    

                                    }
                                
}

}


public: GenericProfile(std::string name){
this->setName(name);
    
this->vector= BasicArrayListD();
    
}


    public: BasicArrayList getGenericProfileDataWorkerTypeVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->vector;
    
}


    public: void add(GenericProfileDataWorkerType genericProfileDataWorkerType){

                        if(!this->vector.contains(genericProfileDataWorkerType))
                        this->vector.add(genericProfileDataWorkerType);
                                
}


    public: void remove(GenericProfileDataWorkerType genericProfileDataWorkerType){
this->vector.remove(genericProfileDataWorkerType);
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = ModDomHelper::createTextNode(document, GenericProfileData::NAME, this->name);;
    

    int32_t size = this->vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfileDataWorkerType genericProfileDataWorkerType = this->vector.get(index) as GenericProfileDataWorkerType;;
    
node.appendChild(genericProfileDataWorkerType.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: GenericProfileActions getGenericProfileActions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActions;
    
}


    public: void setGenericProfileActions(GenericProfileActions genericProfileActions){
this->genericProfileActions= genericProfileActions;
    
}


};

            

