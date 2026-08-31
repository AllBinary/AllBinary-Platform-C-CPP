
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

            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
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

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileActionsJPanel.h"
#include "GenericProfileActionsData.h"
#include "GenericProfileActionData.h"
#include "GenericProfileAction.h"

class GenericProfileActions
            : public Object
        : public DomNodeInterface, public DomDocumentMappingInterface {
        

    public static const DEFAULT_PROFILE_ACTIONS_PATH: string = GenericProfiles.DEFAULT_PROFILES_PATH +"actions/";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonFileStrings: CommonDataFileStrings = CommonDataFileStrings.getInstance()!;

    private: name: string;

    private: genericProfileActionsJPanel: GenericProfileActionsJPanel;

    private: actionsDefaultListModelHelper: DefaultListModelHelper;

    private: hashMap: HashMap<any, any>;

public constructor (GenericProfileActionsJPanel genericProfileActionsJPanel, string name);

public constructor (GenericProfileActionsJPanel genericProfileActionsJPanel, AbPath abPath, string name);

public constructor (GenericProfileActionsJPanel genericProfileActionsJPanel, FileInputStream fileInputStream, string name);

                //@Throws(Exception.constructor)
            
    init(GenericProfileActionsJPanel genericProfileActionsJPanel);

                //@Throws(Exception.constructor)
            
    public save();

    public File getFile(string name);

                //@Throws(Exception.constructor)
            
    load();

                //@Throws(Exception.constructor)
            
    fileInit(FileInputStream fileInputStream);

                //@Throws(Exception.constructor)
            
    initActions(NodeList nodeList);

    public DefaultListModelHelper getDefaultListModelHelper();

    public GenericProfileAction getAction(string string);

                //@Throws(Exception.constructor)
            
    public add(string name);

                //@Throws(Exception.constructor)
            
    public remove(string name);

    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public Document toXmlDoc();

    public GenericProfileActionsJPanel getGenericProfileActionsJPanel();

    public setGenericProfileActionsJPanel(GenericProfileActionsJPanel genericProfileActionsJPanel);

    public HashMap<any, any> getHashMap();

    public setHashMap(HashMap<any, any> hashMap);

    public string getName();

    public setName(string name);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONS_H
