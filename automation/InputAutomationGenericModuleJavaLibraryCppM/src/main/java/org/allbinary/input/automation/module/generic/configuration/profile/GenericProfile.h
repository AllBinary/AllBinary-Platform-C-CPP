
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
class DomNodeHelper;
class ModDomHelper;
class GenericProfileActions;

class LogUtil;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GenericProfileDataWorkerData;
class GenericProfileDataWorkerType;
class GenericProfileData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfile
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string name;

    private: BasicArrayList* vector;

    private: GenericProfileActions* genericProfileActions;

public: GenericProfile(Node* node);

public: GenericProfile(std::string name);

    public: BasicArrayList* getGenericProfileDataWorkerTypeVector();

    public: void add(GenericProfileDataWorkerType* genericProfileDataWorkerType);

    public: void remove(GenericProfileDataWorkerType* genericProfileDataWorkerType);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: std::string getName();

    public: void setName(std::string name);

    public: GenericProfileActions* getGenericProfileActions();

    public: void setGenericProfileActions(GenericProfileActions* genericProfileActions);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>
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
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerData.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerData.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileData.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileData.h"
#endif

        #endif
    
