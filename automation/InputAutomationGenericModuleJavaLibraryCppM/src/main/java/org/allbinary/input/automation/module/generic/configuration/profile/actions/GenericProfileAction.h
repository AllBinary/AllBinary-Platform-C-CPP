
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_H

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>

      
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

public: GenericProfileAction(GenericProfileActionJPanel genericProfileActionJPanel, Node node);

public: GenericProfileAction(std::string name);

    public: std::string getName();

    public: void setName(std::string name);

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

    public: GenericProfileActionScript getGenericProfileActionScript();

    public: void setGenericProfileActionScript(GenericProfileActionScript genericProfileActionScript);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_H
