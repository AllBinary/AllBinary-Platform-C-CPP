
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILES_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILES_H

            #include <vector>
        
            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
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

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>

      
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

    private: HashMap<any, any> hashMap;

    private: DefaultListModelHelper profilesDefaultListModelHelper;

    private: std::string fileName;

public: GenericProfiles(std::string fileName);

                //@Throws(Exception.constructor)
            
    private: void initProfiles(Node node);

    public: DefaultListModelHelper getDefaultListModelHelper();

                //@Throws(Exception.constructor)
            
    public: GenericProfile get(std::string name);

                //@Throws(Exception.constructor)
            
    public: void add(std::string name);

                //@Throws(Exception.constructor)
            
    public: void remove(std::string name);

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: void save();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILES_H
