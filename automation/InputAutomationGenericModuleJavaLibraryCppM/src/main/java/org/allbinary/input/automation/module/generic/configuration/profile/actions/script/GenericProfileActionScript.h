
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
#include <javax/swing/tree/DefaultMutableTreeNode.h>
class DomSearchHelper;
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>
class ProfileActionScriptConditionFactory;
class ProfileActionScriptConditionInterface;
class GenericProfileActionData;
class GenericProfileActionJPanel;
class StdUtil;
class LogUtil;
class CommonStrings;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfileActionScript: public DefaultMutableTreeNode, public ProfileActionScriptNodeInterface {

    private: static inline const std::string NAME = "Root";

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: GenericProfileActionJPanel* genericProfileActionJPanel;

    private: BasicArrayList* profileActionConditionInterfaceVector;

public: GenericProfileActionScript(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node);

public: GenericProfileActionScript(GenericProfileActionJPanel* genericProfileActionJPanel);

    public: void addCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);

    public: void removeCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);

    public: HashMap<Object*, Object*>* toHashMap();

    public: BasicArrayList* getProfileActionConditionInterfaceVector();

    public: void setProfileActionConditionInterfaceVector(BasicArrayList* profileActionConditionInterfaceVector);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/swing/tree/DefaultMutableTreeNode.h>)
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>)
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h>)
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif

        #endif
    
