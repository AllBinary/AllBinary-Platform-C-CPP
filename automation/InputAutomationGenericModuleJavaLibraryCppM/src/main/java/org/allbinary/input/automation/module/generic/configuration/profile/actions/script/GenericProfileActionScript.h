
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

            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GenericProfileActionScript: public DefaultMutableTreeNode: public ProfileActionScriptNodeInterface {
        

    private: static const NAME: string = "Root";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: genericProfileActionJPanel: GenericProfileActionJPanel;

    private: profileActionConditionInterfaceVector: Vector;

public constructor (GenericProfileActionJPanel genericProfileActionJPanel, Node node);

public constructor (GenericProfileActionJPanel genericProfileActionJPanel);

    public addCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface);

    public removeCondition(ProfileActionScriptNodeInterface profileActionScriptNodeInterface);

    public HashMap<any, any> toHashMap();

    public Vector getProfileActionConditionInterfaceVector();

    public setProfileActionConditionInterfaceVector(Vector profileActionConditionInterfaceVector);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPT_H
