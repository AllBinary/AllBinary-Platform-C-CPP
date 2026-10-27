
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerTypeInterface.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerData.h"

class GenericProfileDataWorkerType
            : public Object
        , public GenericProfileDataWorkerTypeInterface {

    private: static inline HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();

    public: static inline GenericProfileDataWorkerType* SAVED_CAPTURE = SavedCaptureGenericProfileDataWorkerType::SAVED_CAPTURE;

    public: static GenericProfileDataWorkerType* SCREEN_CAPTURE() { static std::unique_ptr<GenericProfileDataWorkerType> value(new GenericProfileDataWorkerType("Screen " +InputImageType::CAPTURE.getName())); return value.get(); }

    public: static GenericProfileDataWorkerType* COMPARISON() { static std::unique_ptr<GenericProfileDataWorkerType> value(new GenericProfileDataWorkerType(InputImageType::COMPARISON()->getName())); return value.get(); }

    public: static GenericProfileDataWorkerType* MOTION() { static std::unique_ptr<GenericProfileDataWorkerType> value(new GenericProfileDataWorkerType(InputImageType::MOTION()->getName())); return value.get(); }

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
