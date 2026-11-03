
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class DomNodeHelper;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class DomSearchHelper;
class ModDomHelper;
class GenericProfileActionScript;
class StdUtil;
class LogUtil;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GenericProfileActionJPanel;
class GenericProfileActionData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfileAction
            : public virtual Object
        , public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string name;

    private: GenericProfileActionScript* genericProfileActionScript;

    private: GenericProfileActionJPanel* genericProfileActionJPanel;

public: GenericProfileAction(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node);

public: GenericProfileAction(std::string name);

    public: std::string getName();

    public: void setName(std::string name);

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: GenericProfileActionScript* getGenericProfileActionScript();

    public: void setGenericProfileActionScript(GenericProfileActionScript* genericProfileActionScript);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h"
#endif

        #endif
    
