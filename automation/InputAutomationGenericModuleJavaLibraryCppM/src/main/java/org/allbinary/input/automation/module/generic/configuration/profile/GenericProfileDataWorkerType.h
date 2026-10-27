
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_H

        
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
class ModDomHelper;
class InputImageType;
class StdUtil;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerTypeInterface.h"
class SavedCaptureGenericProfileDataWorkerType;
class GenericProfileDataWorkerData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfileDataWorkerType
            : public virtual Object
        , public GenericProfileDataWorkerTypeInterface {

    private: static HashMap<Object*, Object*>* hashMap;

    public: static GenericProfileDataWorkerType* SAVED_CAPTURE;

    private: static GenericProfileDataWorkerType* SCREEN_CAPTURE_owner();
    public: static GenericProfileDataWorkerType* SCREEN_CAPTURE;

    private: static GenericProfileDataWorkerType* COMPARISON_owner();
    public: static GenericProfileDataWorkerType* COMPARISON;

    private: static GenericProfileDataWorkerType* MOTION_owner();
    public: static GenericProfileDataWorkerType* MOTION;

    public: static GenericProfileDataWorkerType* getInstance(Node* node);

    private: std::string name;

public: GenericProfileDataWorkerType(std::string name);

    public: std::string getName();

    public: void setName(std::string name);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_GENERICPROFILEDATAWORKERTYPE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/input/media/image/InputImageType.h>)
#include <org/allbinary/input/media/image/InputImageType.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerTypeInterface.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerTypeInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerData.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerData.h"
#endif

        #endif
    
