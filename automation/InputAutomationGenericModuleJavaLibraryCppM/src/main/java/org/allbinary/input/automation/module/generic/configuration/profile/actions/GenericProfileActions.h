
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONS_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONS_H

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

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsJPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"

class GenericProfileActions
            : public Object
        , public DomNodeInterface, public DomDocumentMappingInterface {

    public: static inline const std::string DEFAULT_PROFILE_ACTIONS_PATH = GenericProfiles::DEFAULT_PROFILES_PATH +"actions/";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonDataFileStrings* commonFileStrings = CommonDataFileStrings::getInstance();

    private: std::string name;

    private: GenericProfileActionsJPanel* genericProfileActionsJPanel;

    private: DefaultListModelHelper* actionsDefaultListModelHelper;

    private: HashMap<Object*, Object*>* hashMap;

public: GenericProfileActions(GenericProfileActionsJPanel* genericProfileActionsJPanel, std::string name);

public: GenericProfileActions(GenericProfileActionsJPanel* genericProfileActionsJPanel, AbPath* abPath, std::string name);

public: GenericProfileActions(GenericProfileActionsJPanel* genericProfileActionsJPanel, FileInputStream* fileInputStream, std::string name);

                //@Throws(Exception.constructor)
            
    private: void init(GenericProfileActionsJPanel* genericProfileActionsJPanel);

                //@Throws(Exception.constructor)
            
    public: void save();

    public: File* getFile(std::string name);

                //@Throws(Exception.constructor)
            
    private: void load();

                //@Throws(Exception.constructor)
            
    private: void fileInit(FileInputStream* fileInputStream);

                //@Throws(Exception.constructor)
            
    private: void initActions(NodeList* nodeList);

    public: DefaultListModelHelper* getDefaultListModelHelper();

    public: GenericProfileAction* getAction(std::string string);

                //@Throws(Exception.constructor)
            
    public: void add(std::string name);

                //@Throws(Exception.constructor)
            
    public: void remove(std::string name);

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

    public: GenericProfileActionsJPanel* getGenericProfileActionsJPanel();

    public: void setGenericProfileActionsJPanel(GenericProfileActionsJPanel* genericProfileActionsJPanel);

    public: HashMap<Object*, Object*>* getHashMap();

    public: void setHashMap(HashMap<Object*, Object*>* hashMap);

    public: std::string getName();

    public: void setName(std::string name);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONS_H
