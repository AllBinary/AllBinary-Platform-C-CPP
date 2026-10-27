
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILES_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfilesData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h"

const std::string GenericProfiles::DEFAULT_PROFILE_ACTIONS_PATH = JavaString::valueOf(GenericProfiles::DEFAULT_PROFILES_PATH) +JavaString::valueOf("actions/");
const std::string GenericProfiles::DEFAULT_FILE = JavaString::valueOf(GenericProfiles::DEFAULT_PROFILES_PATH) +JavaString::valueOf("profiles.xml");

GenericProfiles::GenericProfiles(std::string fileName) : logUtil(LogUtil::getInstance()){
this->fileName= fileName;
    
this->profilesDefaultListModelHelper= new DefaultListModelHelper();
    
this->hashMap= StdUtil::getInstance()->createHashMap();
    

                        if((new File(fileName))->isFile())
                        
                                    {
                                    
    std::vector<int8_t> bytes = std::vector<int8_t>(100000);;
    

    FileInputStream* idFile = new FileInputStream(fileName);;
    

    int32_t length = idFile->read(bytes);;
    

    std::string data = JavaString::fromChars(bytes);;
    

    int32_t endIndex = JavaString::lastIndexOf(data, '>');;
    

    Document* document = DomDocumentHelper::create(JavaString::substring(data, 0, endIndex +1));;
    

    NodeList* nodeList = document->getElementsByTagName(GenericProfilesData::NAME);;
    
this->logUtil->putF(JavaString::valueOf("Number Of Profiles Specified: ") +JavaString::valueOf(nodeList->getLength()), this, "Contructor");
    

                        if(nodeList != 
                                    nullptr
                                )
                        
                                    {
                                    this->initProfiles(nodeList->item(0));
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf(GenericProfileActionData::NAME) +JavaString::valueOf(" Name Node Node Children"));
                    

                        }
                            
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Loaded: ") +JavaString::valueOf(this->hashMap->size())) +JavaString::valueOf(" Configuration Profile Actions"), this, "Contructor");
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf("No Generic Profile: ") +JavaString::valueOf(fileName), this, "Contructor");
    

                        }
                            
this->getDefaultListModelHelper()->initDefaultModelList();
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfiles::initProfiles(Node* node) -> void{

    NodeList* nodeList = node->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* profileNameNode = nodeList->item(index);;
    

                        if(profileNameNode->getNodeName()->compareTo(GenericProfileData::NAME) == 0)
                        
                                    {
                                    
    GenericProfile* genericProfile = new GenericProfile(profileNameNode);;
    
this->hashMap->put(genericProfile->getName(), genericProfile);
    
this->getDefaultListModelHelper()->add(genericProfile->getName());
    

                                    }
                                
}

}


    auto GenericProfiles::getDefaultListModelHelper() -> DefaultListModelHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->profilesDefaultListModelHelper;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfiles::get(std::string name) -> GenericProfile*{

    GenericProfile* genericProfile = dynamic_cast<GenericProfile*>(this->hashMap->get(name));;
    

                        if(genericProfile == 
                                    nullptr
                                )
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("No Generic Profile Named: ") +JavaString::valueOf(name)) +JavaString::valueOf(" availability was: ")) +JavaString::valueOf(this->hashMap), this, commonStrings->GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return genericProfile;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfiles::add(std::string name) -> void{
this->hashMap->put(name, new GenericProfile(name));
    
this->getDefaultListModelHelper()->add(name);
    
this->getDefaultListModelHelper()->initDefaultModelList();
    
this->save();
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfiles::remove(std::string name) -> void{
this->hashMap->remove(name);
    
this->getDefaultListModelHelper()->remove(name);
    
this->getDefaultListModelHelper()->initDefaultModelList();
    
this->save();
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfiles::toXmlNode(Document* document) -> Node*{

    Node* node = document->createElement(GenericProfilesData::NAME);;
    

    Set* set = this->hashMap->keys();;
    

    std::vector<Object*> nameArray = set->toArray();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfile* genericProfile = dynamic_cast<GenericProfile*>(this->hashMap->get(nameArray[index]));;
    
node->appendChild(genericProfile->toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfiles::toXmlDoc() -> Document*{

    Document* document = DomDocumentHelper::create();;
    

    Node* node = this->toXmlNode(document);;
    
document->appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    auto GenericProfiles::save() -> void{

    FileOutputStream* idFile = new FileOutputStream(this->fileName);;
    

    DataOutputStream* idOutData = new DataOutputStream(idFile);;
    

    std::string documentString = XmlDocumentHelper::toString(this->toXmlDoc());;
    
idOutData->writeBytes(documentString);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILES_CPP
