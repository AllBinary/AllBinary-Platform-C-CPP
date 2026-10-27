
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_BASICPROFILEACTIONSCRIPTCONDITION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_BASICPROFILEACTIONSCRIPTCONDITION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/event/ActionEvent.h>
class BasicArrayList;
class BasicArrayListD;
#include <javax/swing.h>
class TreePath;
class JTreeInterfaceFactory;
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>
class ProfileActionScriptNodeInterface;
class ProfileActionScriptProcessorInterface;
class GenericProfileActionScriptInputData;
class KeyboardActionScriptInput;
class MouseActionScriptInput;
class ProfileActionScriptInputFactory;
class GenericProfileActionScriptOutputData;
class ImageActionScriptOutput;
class ProfileActionScriptOutputFactory;
class LogUtil;
class StringMaker;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
class GenericProfileActionScriptConditionData;
class ProfileActionScriptConditionFactory;
class JMenu;
class JMenuItem;
class TimeIntervalActionScriptCondition;
class AlwaysActionScriptCondition;
class ColorAtActionScriptCondition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicProfileActionScriptCondition: public ProfileActionScriptItem, public ProfileActionScriptConditionInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* profileActionProcessorInterfaceVector;

    private: BasicArrayList* profileActionConditionInterfaceVector;

public: BasicProfileActionScriptCondition(std::string label, Node* node);

                //@Throws(Exception.constructor)
            
    public: void addProcessorNodes(Node* node);

public: BasicProfileActionScriptCondition(std::string label);

    private: void init();

    private: JMenu* getConditionJPopupMenu();

    private: JMenu* getInputJPopupMenu();

    private: JMenu* getOutputJPopupMenu();

    public: void addProcessor(ProfileActionScriptProcessorInterface* profileActionProcessorInterface);

    public: void removeProcessor(ProfileActionScriptProcessorInterface* profileActionProcessorInterface);

    public: void removeCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);

    public: void addCondition(ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: BasicArrayList* getProfileActionConditionInterfaceVector();

    public: void setProfileActionConditionInterfaceVector(BasicArrayList* profileActionConditionInterfaceVector);

    public: void actionPerformed(ActionEvent* actionEvent);

    public: BasicArrayList* getProfileActionProcessorInterfaceVector();

    public: void setProfileActionProcessorInterfaceVector(BasicArrayList* profileActionProcessorInterfaceVector);

    private: void updateTree();

                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(int64_t frame);

                //@Throws(Exception.constructor)
            
    public: void process(int64_t frame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_BASICPROFILEACTIONSCRIPTCONDITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_BASICPROFILEACTIONSCRIPTCONDITION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_BASICPROFILEACTIONSCRIPTCONDITION_H_COMPLETE
        #if __has_include(<java/awt/event/ActionEvent.h>)
#include <java/awt/event/ActionEvent.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<javax/swing/tree/TreePath.h>)
#include <javax/swing/tree/TreePath.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>)
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>)
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>)
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputFactory.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h>)
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h>)
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputFactory.h>)
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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
#if __has_include("org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/GenericProfileActionScriptConditionData.h")
#include "org/allbinary/input/automation/actions/script/condition/GenericProfileActionScriptConditionData.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h")
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JMenu.h")
#include "org/allbinary/input/automation/actions/script/condition/JMenu.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JMenuItem.h")
#include "org/allbinary/input/automation/actions/script/condition/JMenuItem.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h"
#endif

        #endif
    
