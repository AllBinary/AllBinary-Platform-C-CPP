
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileDataWorkerData.h"
#include "GenericProfileDataWorkerType.h"
#include "GenericProfileData.h"

class GenericProfile
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string name;

    private: BasicArrayList vector;

    private: GenericProfileActions genericProfileActions;

public: GenericProfile(Node node);

public: GenericProfile(std::string name);

    public: BasicArrayList getGenericProfileDataWorkerTypeVector();

    public: void add(GenericProfileDataWorkerType genericProfileDataWorkerType);

    public: void remove(GenericProfileDataWorkerType genericProfileDataWorkerType);

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

    public: std::string getName();

    public: void setName(std::string name);

    public: GenericProfileActions getGenericProfileActions();

    public: void setGenericProfileActions(GenericProfileActions genericProfileActions);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_H
