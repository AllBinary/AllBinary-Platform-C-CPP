
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

            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <java/util/Vector.h>

      
#include <javax/swing.h>

      
#include <javax/swing/tree/TreePath.h>

      
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/ProfileActionScriptProcessorInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInput.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInput.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputFactory.h>

      
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/GenericProfileActionScriptOutputData.h>

      
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutput.h>

      
#include <org/allbinary/input/automation/module/actions/script/condition/processors/output/ProfileActionScriptOutputFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptConditionInterface.h"
#include "GenericProfileActionScriptConditionData.h"
#include "ProfileActionScriptConditionFactory.h"
#include "JMenu.h"
#include "JMenuItem.h"
#include "TimeIntervalActionScriptCondition.h"
#include "AlwaysActionScriptCondition.h"
#include "ColorAtActionScriptCondition.h"

class BasicProfileActionScriptCondition: public ProfileActionScriptItem: public ProfileActionScriptConditionInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: profileActionProcessorInterfaceVector: Vector;

    private: profileActionConditionInterfaceVector: Vector;

public constructor (string label, Node node);

                //@Throws(Exception.constructor)
            
    public addProcessorNodes(Node node);

public constructor (string label);

    init();

    JMenu getConditionJPopupMenu();

    JMenu getInputJPopupMenu();

    JMenu getOutputJPopupMenu();

    public addProcessor(ProfileActionScriptProcessorInterface profileActionProcessorInterface);

    public removeProcessor(ProfileActionScriptProcessorInterface profileActionProcessorInterface);

    public removeCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface);

    public addCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

    public Vector getProfileActionConditionInterfaceVector();

    public setProfileActionConditionInterfaceVector(Vector profileActionConditionInterfaceVector);

    public actionPerformed(ActionEvent actionEvent);

    public Vector getProfileActionProcessorInterfaceVector();

    public setProfileActionProcessorInterfaceVector(Vector profileActionProcessorInterfaceVector);

    updateTree();

                //@Throws(Exception.constructor)
            
    public bool shouldProcess(Long frame);

                //@Throws(Exception.constructor)
            
    public process(Long frame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_BASICPROFILEACTIONSCRIPTCONDITION_H
