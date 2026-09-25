
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
        
            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileActionsJPanel.h"
#include "GenericProfileActionsData.h"
#include "GenericProfileActionData.h"
#include "GenericProfileAction.h"

class GenericProfileActions
            : public Object
        : public DomNodeInterface, public DomDocumentMappingInterface {

    public: static const std::string DEFAULT_PROFILE_ACTIONS_PATH = GenericProfiles::DEFAULT_PROFILES_PATH +"actions/";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonDataFileStrings commonFileStrings = CommonDataFileStrings::getInstance();

    private: std::string name;

    private: GenericProfileActionsJPanel genericProfileActionsJPanel;

    private: DefaultListModelHelper actionsDefaultListModelHelper;

    private: HashMap<any, any> hashMap;

public: GenericProfileActions(GenericProfileActionsJPanel genericProfileActionsJPanel, std::string name){
this->setName(name);
    
this->init(genericProfileActionsJPanel);
    
this->load();
    
}


public: GenericProfileActions(GenericProfileActionsJPanel genericProfileActionsJPanel, AbPath abPath, std::string name){
this->setName(name);
    
this->init(genericProfileActionsJPanel);
    
this->load();
    
}


public: GenericProfileActions(GenericProfileActionsJPanel genericProfileActionsJPanel, FileInputStream fileInputStream, std::string name){
this->setName(name);
    
this->init(genericProfileActionsJPanel);
    
this->fileInit(fileInputStream);
    
}


                //@Throws(Exception.constructor)
            
    private: void init(GenericProfileActionsJPanel genericProfileActionsJPanel){
this->setGenericProfileActionsJPanel(genericProfileActionsJPanel);
    
this->actionsDefaultListModelHelper= DefaultListModelHelper();
    
this->setHashMap(HashMap<any, any>());
    
}


                //@Throws(Exception.constructor)
            
    public: void save(){

    FileOutputStream idFile = FileOutputStream(GenericProfileActions::DEFAULT_PROFILE_ACTIONS_PATH +getName() +this->commonFileStrings._XML);;
    

    DataOutputStream idOutData = DataOutputStream(idFile);;
    
idOutData.writeBytes(DomDocumentHelper::toString(this->toXmlDoc()));
    
}


    public: File getFile(std::string name){

    std::string fileName = DEFAULT_PROFILE_ACTIONS_PATH +name +this->commonFileStrings._XML;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return File(fileName);
    
}


                //@Throws(Exception.constructor)
            
    private: void load(){

    File file = this->getFile(getName());;
    

                        if(file.isFile())
                        
                                    {
                                    
    FileInputStream idFile = FileInputStream(file);;
    
this->fileInit(idFile);
    

                                    }
                                
                        else {
                            this->logUtil.putF("No Profile: " +file.getAbsolutePath(), this, "Contructor");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void fileInit(FileInputStream fileInputStream){

    std::vector<int8_t> bytes = new Array(100000);;
    

    int32_t length = fileInputStream.read(bytes);;
    

    std::string data = String.fromCharCode(...bytes);;
    

    int32_t endIndex = data.lastIndexOf('>');;
    

    Document document = DomDocumentHelper::create(data.substring(0, endIndex +1));;
    

    NodeList nameNodeList = document.getElementsByTagName(GenericProfileActionsData::NAME);;
    
this->logUtil.putF("Number Of Profiles Specified: " +nameNodeList.getLength(), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nameNodeList.getLength(); index++)
        {

    Node node = nameNodeList.item(index);;
    

    NodeList nodeList = node.getChildNodes();;
    

                        if(nodeList != 
                                    nullptr
                                )
                        
                                    {
                                    this->initActions(nodeList);
    

                                    }
                                
                        else {
                            


                            throw Exception(GenericProfileActionData::NAME +" Name Node Node Children");
                    

                        }
                            
}

this->logUtil.putF("Loaded: " +this->getHashMap().size() +" Configuration Profile Action(s)", this, "Contructor");
    
this->getDefaultListModelHelper().initDefaultModelList();
    
}


                //@Throws(Exception.constructor)
            
    private: void initActions(NodeList nodeList){




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node actionNode = nodeList.item(index);;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    GenericProfileAction genericConfigurationProfileAction = GenericProfileAction(this->getGenericProfileActionsJPanel().getGenericProfileActionJPanel(), actionNode);;
    
this->getHashMap().put(genericConfigurationProfileAction.getName(), genericConfigurationProfileAction);
    
this->getDefaultListModelHelper().add(genericConfigurationProfileAction.getName());
    

                                    }
                                
                        else {
                            


                            throw Exception(GenericProfileActionData::NAME +" Node Null");
                    

                        }
                            
}

}


    public: DefaultListModelHelper getDefaultListModelHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->actionsDefaultListModelHelper;
    
}


    public: GenericProfileAction getAction(std::string string){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getHashMap().get(string) as GenericProfileAction;
    
}


                //@Throws(Exception.constructor)
            
    public: void add(std::string name){

    GenericProfileAction genericProfileAction = GenericProfileAction(name);;
    
this->getHashMap().put(genericProfileAction.getName(), genericProfileAction);
    
this->getDefaultListModelHelper().add(genericProfileAction.getName());
    
this->getDefaultListModelHelper().initDefaultModelList();
    
this->save();
    
}


                //@Throws(Exception.constructor)
            
    public: void remove(std::string name){
this->getHashMap().remove(name);
    
this->getDefaultListModelHelper().remove(name);
    
this->getDefaultListModelHelper().initDefaultModelList();
    
this->save();
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(GenericProfileActionsData::NAME);;
    

    Set set = this->getHashMap().keys();;
    

    std::vector<Object*> actionNameArray = set.toArray();;
    

    int32_t size = actionNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string nextActionName = actionNameArray[index]! as string;;
    

    GenericProfileAction nextGenericProfileAction = this->getAction(nextActionName) as GenericProfileAction;;
    
node.appendChild(nextGenericProfileAction.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){

    Document document = DomDocumentHelper::create();;
    

    Node node = this->toXmlNode(document);;
    
document.appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


    public: GenericProfileActionsJPanel getGenericProfileActionsJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActionsJPanel;
    
}


    public: void setGenericProfileActionsJPanel(GenericProfileActionsJPanel genericProfileActionsJPanel){
this->genericProfileActionsJPanel= genericProfileActionsJPanel;
    
}


    public: HashMap<any, any> getHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashMap;
    
}


    public: void setHashMap(HashMap<any, any> hashMap){
this->hashMap= hashMap;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


};

            

