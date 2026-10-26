
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfilesData.h"
#include "GenericProfileData.h"
#include "GenericProfile.h"

class GenericProfiles
            : public Object
        : public DomNodeInterface, public DomDocumentMappingInterface {

    public: static const std::string DEFAULT_PROFILES_PATH = "./modules/configs/profiles/";

    public: static const std::string DEFAULT_PROFILE_ACTIONS_PATH = GenericProfiles::DEFAULT_PROFILES_PATH +"actions/";

    public: static const std::string DEFAULT_FILE = GenericProfiles::DEFAULT_PROFILES_PATH +"profiles.xml";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HashMap<Object*, Object*> hashMap;

    private: DefaultListModelHelper profilesDefaultListModelHelper;

    private: std::string fileName;

public: GenericProfiles(std::string fileName){
this->fileName= fileName;
    
this->profilesDefaultListModelHelper= DefaultListModelHelper();
    
this->hashMap= StdUtil::getInstance().createHashMap();
    

                        if(File(fileName).isFile())
                        
                                    {
                                    
    std::vector<int8_t> bytes = std::vector<int8_t>(100000);;
    

    FileInputStream idFile = FileInputStream(fileName);;
    

    int32_t length = idFile.read(bytes);;
    

    std::string data = String.fromCharCode(...bytes);;
    

    int32_t endIndex = data.lastIndexOf('>');;
    

    Document document = DomDocumentHelper::create(data.substring(0, endIndex +1));;
    

    NodeList nodeList = document.getElementsByTagName(GenericProfilesData::NAME);;
    
this->logUtil.putF("Number Of Profiles Specified: " +nodeList.getLength(), this, "Contructor");
    

                        if(nodeList != 
                                    nullptr
                                )
                        
                                    {
                                    this->initProfiles(nodeList.item(0));
    

                                    }
                                
                        else {
                            


                            throw Exception(GenericProfileActionData::NAME +" Name Node Node Children");
                    

                        }
                            
this->logUtil.putF("Loaded: " +this->hashMap.size() +" Configuration Profile Actions", this, "Contructor");
    

                                    }
                                
                        else {
                            this->logUtil.putF("No Generic Profile: " +fileName, this, "Contructor");
    

                        }
                            
this->getDefaultListModelHelper().initDefaultModelList();
    
}


                //@Throws(Exception.constructor)
            
    private: void initProfiles(Node node){

    NodeList nodeList = node.getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node profileNameNode = nodeList.item(index);;
    

                        if(profileNameNode.getNodeName().compareTo(GenericProfileData::NAME) == 0)
                        
                                    {
                                    
    GenericProfile genericProfile = GenericProfile(profileNameNode);;
    
this->hashMap.put(genericProfile.getName(), genericProfile);
    
this->getDefaultListModelHelper().add(genericProfile.getName());
    

                                    }
                                
}

}


    public: DefaultListModelHelper getDefaultListModelHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->profilesDefaultListModelHelper;
    
}


                //@Throws(Exception.constructor)
            
    public: GenericProfile get(std::string name){

    GenericProfile genericProfile = this->hashMap.get(name);;
    

                        if(genericProfile == 
                                    nullptr
                                )
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF("No Generic Profile Named: " +name +" availability was: " +this->hashMap, this, commonStrings.GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return genericProfile;
    
}


                //@Throws(Exception.constructor)
            
    public: void add(std::string name){
this->hashMap.put(name, GenericProfile(name));
    
this->getDefaultListModelHelper().add(name);
    
this->getDefaultListModelHelper().initDefaultModelList();
    
this->save();
    
}


                //@Throws(Exception.constructor)
            
    public: void remove(std::string name){
this->hashMap.remove(name);
    
this->getDefaultListModelHelper().remove(name);
    
this->getDefaultListModelHelper().initDefaultModelList();
    
this->save();
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(GenericProfilesData::NAME);;
    

    Set set = this->hashMap.keys();;
    

    std::vector<Object*> nameArray = set.toArray();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfile genericProfile = this->hashMap.get(nameArray[index]);;
    
node.appendChild(genericProfile.toXmlNode(document));
    
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


                //@Throws(Exception.constructor)
            
    public: void save(){

    FileOutputStream idFile = FileOutputStream(this->fileName);;
    

    DataOutputStream idOutData = DataOutputStream(idFile);;
    

    std::string documentString = XmlDocumentHelper::toString(this->toXmlDoc());;
    
idOutData.writeBytes(documentString);
    
}


};

            

